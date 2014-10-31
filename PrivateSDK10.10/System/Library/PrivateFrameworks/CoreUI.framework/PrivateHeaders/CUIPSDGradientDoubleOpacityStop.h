/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreUI/CUIPSDGradientOpacityStop.h>

#import "NSCoding-Protocol.h"

// Not exported
@interface CUIPSDGradientDoubleOpacityStop : CUIPSDGradientOpacityStop <NSCoding>
{
    double leadOutOpacity;
}

+ (id)doubleOpacityStopWithLocation:(double)arg1 leadInOpacity:(double)arg2 leadOutOpacity:(double)arg3;
+ (void)initialize;
- (id)description;
- (BOOL)isDoubleStop;
- (double)leadOutOpacity;
- (double)leadInOpacity;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLocation:(double)arg1 leadInOpacity:(double)arg2 leadOutOpacity:(double)arg3;

@end
