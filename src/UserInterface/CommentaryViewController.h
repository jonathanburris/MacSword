//
//  CommentaryViewController.h
//  MacSword2
//
//  Created by Manfred Bergmann on 18.08.08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <CocoLogger/CocoLogger.h>
#import <HostableViewController.h>
#import <BibleViewController.h>
#import <ProtocolHelper.h>

@class SwordCommentary, ExtTextViewController;

#define COMMENTARYVIEW_NIBNAME   @"CommentaryView"

/** the view of this view controller is a ScrollSynchronizableView */
@interface CommentaryViewController : BibleViewController <NSCoding, TextDisplayable, SubviewHosting, MouseTracking> {
    IBOutlet NSButton *editButton;
    BOOL editEnabled;
}

// ---------- initializers ---------
- (id)initWithModule:(SwordCommentary *)aModule;
- (id)initWithModule:(SwordCommentary *)aModule delegate:(id)aDelegate;

// ---------- methods --------------
// NSCoding
- (id)initWithCoder:(NSCoder *)decoder;
- (void)encodeWithCoder:(NSCoder *)encoder;

// actions
- (IBAction)toggleEdit:(id)sender;
/** we are overriding this method so user can just press <Command>S to save */
- (IBAction)saveDocument:(id)sender;

@end
