/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ExchangeWebServices/EWSBasePagingType.h>

@interface EWSFractionalPageViewType : EWSBasePagingType
{
    long long _Numerator;
    long long _Denominator;
}

+ (id)definition;
@property(nonatomic) long long Denominator; // @synthesize Denominator=_Denominator;
@property(nonatomic) long long Numerator; // @synthesize Numerator=_Numerator;

@end

