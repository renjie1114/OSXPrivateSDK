/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Slideshows/MREffect.h>

@class DDXMLDocument, MRCAMLLayer, NSMutableArray;

@interface MREffectCAML : MREffect
{
    DDXMLDocument *mDocument;
    double mWidth;
    double mHeight;
    MRCAMLLayer *mRootLayer;
    BOOL mIsLoaded;
    NSMutableArray *mImageProviders;
    NSMutableArray *mTextLayers;
}

- (void)renderLayer:(id)arg1 atTime:(double)arg2 inContext:(id)arg3 arguments:(id)arg4 offset:(struct CGPoint)arg5 aspectRatio:(double)arg6 withCurrentState:(id)arg7;
- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (id)_animationsForTransformAnimation:(id)arg1 inContext:(id)arg2;
- (void)_addValue:(double)arg1 toKeyframe:(id)arg2 inDict:(id)arg3 forKey:(id)arg4;
- (id)createLayer:(id)arg1 inArray:(id)arg2 parentSize:(struct CGSize)arg3 parentOrigin:(struct CGPoint)arg4 inContext:(id)arg5;
- (BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)isLoadedForTime:(double)arg1;
- (void)_cleanup;
- (id)initWithEffectID:(id)arg1;
- (void)_unload;
- (void)_loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;

@end

