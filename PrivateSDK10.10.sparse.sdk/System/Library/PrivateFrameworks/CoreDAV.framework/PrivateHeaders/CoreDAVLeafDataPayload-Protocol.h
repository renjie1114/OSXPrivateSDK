/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSString, NSURL;

@protocol CoreDAVLeafDataPayload <NSObject>
@property(readonly, nonatomic) NSString *syncKey;
@property(readonly, nonatomic) NSData *dataPayload;
@property(retain, nonatomic) NSURL *serverID;
- (id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5;

@optional
@property(readonly, nonatomic) NSArray *childrenOrder;
@end
