//
//  ProgressOverlayView.m
//  MacSword2
//
//  Created by Manfred Bergmann on 10.03.09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import "ProgressOverlayView.h"


@implementation ProgressOverlayView

- (id)initWithFrame:(NSRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        // Initialization code here.
    }
    return self;
}

- (void)drawRect:(NSRect)rect {
    
    // we draw a filled rect with dark color
    CGContextRef currentContext = (CGContextRef)[[NSGraphicsContext currentContext] graphicsPort];
    CGContextSaveGState(currentContext);
    
    [[NSColor colorWithCalibratedRed:0.4 green:0.4 blue:0.4 alpha:0.3f] set];
    [NSBezierPath fillRect:rect];

    CGContextRestoreGState(currentContext);
    
    [super drawRect:rect];
}

@end
