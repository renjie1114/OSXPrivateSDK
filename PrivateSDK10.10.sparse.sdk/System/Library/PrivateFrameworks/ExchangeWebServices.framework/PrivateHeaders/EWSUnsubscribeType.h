/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class NSString;

@interface EWSUnsubscribeType : EWSBaseRequestType
{
    NSString *_SubscriptionId;
}

+ (id)definition;
@property(copy, nonatomic) NSString *SubscriptionId; // @synthesize SubscriptionId=_SubscriptionId;
- (void)dealloc;

@end
