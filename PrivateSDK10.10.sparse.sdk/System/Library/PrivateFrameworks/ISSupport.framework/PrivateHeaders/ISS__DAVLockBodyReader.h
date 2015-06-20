/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DAVResponseBodyReader-Protocol.h"

@class NSMutableData, NSString;

@interface ISS__DAVLockBodyReader : NSObject <DAVResponseBodyReader>
{
    NSMutableData *readData;
    NSString *lockToken;
    int timeout;
}

- (void)reset;
- (void)request:(id)arg1 readResponseBody:(id)arg2;
- (BOOL)request:(id)arg1 acceptResponseWithHTTPStatusCode:(int)arg2;
- (id)data;
- (void)_calculateLockInfos;
- (int)lockTimeout;
- (id)lockToken;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end
