/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol MigrationProgressEventsListener
- (void)engineCompletedWithErrorsAndWarnings:(id)arg1;
- (void)engineMinutesRemaining:(id)arg1;
- (void)enginePercentDone:(id)arg1;
- (void)engineProcessingText:(id)arg1;
- (void)engineStarted;

@optional
- (void)reconnecting:(BOOL)arg1;
- (void)engineStateChanged:(unsigned long long)arg1;
- (void)engineSetToAnotherMac:(BOOL)arg1;
- (void)engineDidBecomeCancellable;
- (void)engineWillBecomeNonCancellable;
- (void)currentIncompatibleApps:(id)arg1;
- (BOOL)hasIncompatibleApps;
- (void)engineStatus:(id)arg1 arguments:(id)arg2;
@end

