//  Created by Manfred Bergmann on 25.07.05.
//  Copyright 2005 mabe. All rights reserved.
//

#import "MBAboutWindowController.h"

@implementation MBAboutWindowController

- (id)init {
	return [super initWithWindowNibName:@"About"];
}

- (void)finalize {
	// dealloc object
	[super finalize];
}

//--------------------------------------------------------------------
//----------- bundle delegates ---------------------------------------
//--------------------------------------------------------------------
- (void)windowDidLoad {
    
    // get BundlePath
    NSString *infoPlistPath = [[NSBundle mainBundle] bundlePath];
    infoPlistPath = [infoPlistPath stringByAppendingPathComponent:@"Contents"];
    infoPlistPath = [infoPlistPath stringByAppendingPathComponent:@"Info.plist"];
    // get build number
    NSDictionary *infoPlist = [NSDictionary dictionaryWithContentsOfFile:infoPlistPath];
    
    // set version
    [versionLabel setStringValue:[NSString stringWithFormat:@"Version: %@", [infoPlist objectForKey:@"CFBundleShortVersionString"]]];
    // set credit rtf text
    NSMutableString *resourcePath = [NSMutableString stringWithString:[[NSBundle mainBundle] resourcePath]];
    NSString *creditPath = [resourcePath stringByAppendingPathComponent:@"English.lproj/Credits.rtf"];
    
    NSData *rtfData = [NSData dataWithContentsOfFile:creditPath];
    NSAttributedString *credits = [[[NSAttributedString alloc] initWithRTF:rtfData documentAttributes:nil] autorelease];
    // insert the text into the textview
    [creditsTextView insertText:credits];
    // make uneditable
    [creditsTextView setEditable:NO];
}

@end
