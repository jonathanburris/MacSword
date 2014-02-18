//
//  BookmarkManager.h
//  MacSword2
//
//  Created by Manfred Bergmann on 21.10.08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class Bookmark;
@class SwordVerseKey;

@interface BookmarkManager : NSObject {
    NSMutableArray *bookmarks;
}

@property (retain, readwrite) NSMutableArray *bookmarks;

+ (BookmarkManager *)defaultManager;
- (void)saveBookmarks;

- (Bookmark *)bookmarkForReference:(SwordVerseKey *)aVerseKey;

@end
