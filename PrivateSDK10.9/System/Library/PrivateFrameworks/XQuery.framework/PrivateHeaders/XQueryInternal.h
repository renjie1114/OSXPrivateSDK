//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, XQueryProlog;

__attribute__((visibility("hidden")))
@interface XQueryInternal : NSObject
{
    XQueryProlog *_prolog;
    id _body;
    NSArray *_errors;
}

- (BOOL)isError;
- (id)errors;
- (id)body;
- (id)prolog;
- (id)initWithSource:(id)arg1;
- (void)finalize;
- (void)dealloc;

@end
