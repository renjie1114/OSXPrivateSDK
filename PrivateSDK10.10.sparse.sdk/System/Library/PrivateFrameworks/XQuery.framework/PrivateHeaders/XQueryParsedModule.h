/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

// Not exported
@interface XQueryParsedModule : NSObject
{
    NSString *_version;
    NSArray *_prologItems;
    id _body;
}

+ (id)moduleWithPrologItems:(id)arg1 body:(id)arg2 version:(id)arg3;
- (void)finalize;
- (void)dealloc;
- (id)version;
- (id)body;
- (id)prologItems;
- (id)initWithPrologItems:(id)arg1 body:(id)arg2 version:(id)arg3;

@end
