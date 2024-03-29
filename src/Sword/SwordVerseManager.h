//
//  SwordVerseManager.h
//  MacSword2
//
//  Created by Manfred Bergmann on 19.03.09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#ifdef __cplusplus
#include <versemgr.h>
class sword::VerseMgr::Book;
#endif

#define SW_VERSIFICATION_KJV       @"KJV"

@interface SwordVerseManager : NSObject {
#ifdef __cplusplus
    sword::VerseMgr *verseMgr;
#endif
    NSMutableDictionary *booksPerVersification;
}

+ (SwordVerseManager *)defaultManager;

/** convenience method that returns the books for default scheme (KJV) */
- (NSArray *)books;
/** books for a versification scheme */
- (NSArray *)booksForVersification:(NSString *)verseScheme;

#ifdef __cplusplus
- (sword::VerseMgr *)verseMgr;
#endif

@end
