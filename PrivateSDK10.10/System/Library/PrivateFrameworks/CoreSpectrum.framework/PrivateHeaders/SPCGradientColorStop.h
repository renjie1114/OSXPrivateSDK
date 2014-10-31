/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreSpectrum/SPCGradientStop.h>

#import "NSCoding-Protocol.h"

@class SPCColor;

@interface SPCGradientColorStop : SPCGradientStop <NSCoding>
{
    SPCColor *_color;
}

+ (id)gradientStopWithColor:(id)arg1 location:(CDStruct_9d897620)arg2;
@property(retain, nonatomic) SPCColor *color; // @synthesize color=_color;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithColor:(id)arg1 location:(CDStruct_9d897620)arg2;

@end
