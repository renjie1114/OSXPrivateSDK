/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarPersistence/CalTaskManager.h>

#import "CoreDAVTaskManager-Protocol.h"

@class NSRunLoop, NSString;

@interface CalCalDAVTaskManager : CalTaskManager <CoreDAVTaskManager>
{
}

- (void)coreDAVTaskDidFinish:(id)arg1;
- (void)coreDAVTaskEndModal:(id)arg1;
- (void)coreDAVTaskRequestModal:(id)arg1;
- (void)submitIndependentCoreDAVTask:(id)arg1;
- (void)submitQueuedCoreDAVTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSRunLoop *workRunLoop; // @dynamic workRunLoop;

@end
