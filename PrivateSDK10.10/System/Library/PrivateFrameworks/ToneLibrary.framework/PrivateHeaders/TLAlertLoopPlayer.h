/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVQueuePlayer;

@interface TLAlertLoopPlayer : NSObject
{
    BOOL _playing;
    AVQueuePlayer *_player;
}

@property(retain, nonatomic, setter=_setPlayer:) AVQueuePlayer *_player; // @synthesize _player;
- (void)_setPlaying:(BOOL)arg1;
@property(nonatomic, getter=isPlaying) BOOL playing; // @synthesize playing=_playing;
- (void)_performBlockOnMainThread:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopPlayingWithFadeOutDuration:(double)arg1;
- (void)startPlayingRepeatedlyAssetWithURL:(id)arg1;
- (void)dealloc;

@end
