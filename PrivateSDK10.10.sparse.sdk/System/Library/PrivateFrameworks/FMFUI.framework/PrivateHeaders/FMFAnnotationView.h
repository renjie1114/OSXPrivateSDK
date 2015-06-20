/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MKAnnotationView.h"

@class CALayer, CAShapeLayer, FMFClickView, NSColor;

// Not exported
@interface FMFAnnotationView : MKAnnotationView
{
    BOOL _isRotating;
    BOOL _wantsRotation;
    long long _annotationSize;
    CAShapeLayer *_shapeLayer;
    CAShapeLayer *_circleLayer;
    CAShapeLayer *_markerOval;
    CAShapeLayer *_markerCenter;
    CAShapeLayer *_tailLayer;
    CALayer *_centerImageLayer;
    double _futureRotationAmount;
    NSColor *_tintColor;
    FMFClickView *_hiddenClickView;
}

+ (id)circlePath;
@property(retain) FMFClickView *hiddenClickView; // @synthesize hiddenClickView=_hiddenClickView;
@property(copy) NSColor *tintColor; // @synthesize tintColor=_tintColor;
@property double futureRotationAmount; // @synthesize futureRotationAmount=_futureRotationAmount;
@property BOOL wantsRotation; // @synthesize wantsRotation=_wantsRotation;
@property BOOL isRotating; // @synthesize isRotating=_isRotating;
@property(retain) CALayer *centerImageLayer; // @synthesize centerImageLayer=_centerImageLayer;
@property(retain) CAShapeLayer *tailLayer; // @synthesize tailLayer=_tailLayer;
@property(retain) CAShapeLayer *markerCenter; // @synthesize markerCenter=_markerCenter;
@property(retain) CAShapeLayer *markerOval; // @synthesize markerOval=_markerOval;
@property(retain) CAShapeLayer *circleLayer; // @synthesize circleLayer=_circleLayer;
@property(retain) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property long long annotationSize; // @synthesize annotationSize=_annotationSize;
- (void).cxx_destruct;
- (id)markerCenterPathSmall;
- (id)markerOvalPathSmall;
- (id)markerCenterPath;
- (id)markerOvalPath;
- (id)shutterCircle;
- (id)smallCircle;
- (id)largeCircle;
- (id)smallTail;
- (id)largeTail;
- (id)largeBezierPath;
- (id)smallBezierPath;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (struct CGRect)centerImageFrameForSize:(long long)arg1;
- (id)shutterLineWidthForSize:(long long)arg1;
- (id)lineWidthForSize:(long long)arg1;
- (id)shadowOpacityForSize:(long long)arg1;
- (void)sizeAnnotationView;
- (void)updateAnnotationShutter;
- (void)setAnnotationSize:(double)arg1 animated:(BOOL)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)prepareForReuse;
- (void)setPersonImage:(id)arg1;
- (id)fallbackPersonImage;
- (id)clipImageToCircle:(id)arg1;
- (double)animationDuration;
- (struct CGRect)hitRectForSize;
- (void)openInMaps;
- (id)superViewMapView;
- (void)updateClickView;
- (id)hitTest:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)removeFromSuperview;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 tintColor:(id)arg3;

@end
