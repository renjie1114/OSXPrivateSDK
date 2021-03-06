/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CALayer.h"

@class NSTimer;

@interface GEOPulseLayer : CALayer
{
    NSTimer *animationTimer;
    struct CGRect startingFrame;
    struct CGSize originalSize;
    float animationProgress;
}

+ (struct CGImage *)_copyImage:(struct CGRect *)arg1;
- (void)resetForReuse;
- (void)stopAnimation;
- (void)startAnimation;
- (void)_stopAnimationTimer;
- (void)_startAnimationTimer;
- (void)_animate;
- (void)_setAnimationWithProgress:(float)arg1;
- (id)init;

@end

