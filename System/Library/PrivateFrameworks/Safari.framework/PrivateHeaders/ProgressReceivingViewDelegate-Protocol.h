//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ProgressReceivingView;

@protocol ProgressReceivingViewDelegate <NSObject>

@optional
- (void)progressSender:(id <ProgressSender>)arg1 progressDidCompleteForView:(ProgressReceivingView *)arg2;
- (void)progressSender:(id <ProgressSender>)arg1 progressDidChangeForView:(ProgressReceivingView *)arg2;
- (void)progressSender:(id <ProgressSender>)arg1 progressWillStartForView:(ProgressReceivingView *)arg2;
@end
