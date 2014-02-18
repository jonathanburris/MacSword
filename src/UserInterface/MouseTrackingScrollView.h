//
//  MouseTrackingScrollView.h
//  MacSword2
//
//  Created by Manfred Bergmann on 03.07.08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <CocoLogger/CocoLogger.h>

@interface MouseTrackingScrollView : NSScrollView {
    id delegate;
}

@property (readwrite) id delegate;

- (void)updateMouseTracking;

@end
