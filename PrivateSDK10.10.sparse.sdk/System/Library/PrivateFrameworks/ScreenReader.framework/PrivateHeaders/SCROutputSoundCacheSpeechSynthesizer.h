/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SCROutputSpeechSynthesizerProtocol-Protocol.h"

@class NSString, SCRSound;

// Not exported
@interface SCROutputSoundCacheSpeechSynthesizer : NSObject <SCROutputSpeechSynthesizerProtocol>
{
    id _delegate;
    SCRSound *_sound;
    id _owner;
    id _action;
    NSString *_category;
    NSString *_spokenString;
}

@property(retain, nonatomic) NSString *spokenString; // @synthesize spokenString=_spokenString;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) id action; // @synthesize action=_action;
@property(retain, nonatomic) id owner; // @synthesize owner=_owner;
@property(retain, nonatomic) SCRSound *sound; // @synthesize sound=_sound;
@property(retain, nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)unlockSynthesizer;
- (void)lockSynthesizer;
- (void)stopSpeaking;
- (BOOL)isSpeaking;
- (BOOL)isPaused;
- (void)sound:(id)arg1 didFinishPlaying:(BOOL)arg2;
- (id)supportedLiteralCharacterRanges;
- (void)startAction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

