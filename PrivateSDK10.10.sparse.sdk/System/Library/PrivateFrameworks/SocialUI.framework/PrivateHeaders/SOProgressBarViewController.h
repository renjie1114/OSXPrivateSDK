/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSLayoutConstraint, NSView;

@interface SOProgressBarViewController : NSObject
{
    BOOL _iMessageable;
    NSView *_sendingView;
    NSView *_progressBarView;
    NSLayoutConstraint *_progressBarViewWidthConstraint;
}

@property(retain) NSLayoutConstraint *progressBarViewWidthConstraint; // @synthesize progressBarViewWidthConstraint=_progressBarViewWidthConstraint;
@property(retain) NSView *progressBarView; // @synthesize progressBarView=_progressBarView;
@property(retain) NSView *sendingView; // @synthesize sendingView=_sendingView;
@property(nonatomic, setter=setiMessageable:) BOOL iMessageable; // @synthesize iMessageable=_iMessageable;
- (void).cxx_destruct;
- (void)setProgressValue:(double)arg1 oldProgress:(double)arg2 sending:(unsigned long long)arg3 total:(unsigned long long)arg4 animate:(BOOL)arg5;
- (void)finish;
- (void)setup;
- (double)_sendingViewWidth;
- (void)_finishSendingView;
- (void)_fadeOutSendingView;
- (void)_setupSendingView;
- (void)_updateProgressBarConstraintWithMultiplier:(double)arg1;
- (void)_setProgressValue:(double)arg1 oldProgress:(double)arg2 animate:(BOOL)arg3;
- (void)_resetProgressBarColor;
- (void)_finishProgressBar;
- (void)_resetProgressBar;
- (void)_setupProgressBar;
- (void)awakeFromNib;

@end
