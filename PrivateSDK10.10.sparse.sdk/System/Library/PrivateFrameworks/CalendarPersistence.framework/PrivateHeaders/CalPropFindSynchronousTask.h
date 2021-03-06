/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarPersistence/CalSingleSynchronousTask.h>

@class NSSet, NSURL;

@interface CalPropFindSynchronousTask : CalSingleSynchronousTask
{
    NSSet *_responses;
    NSURL *_lastRedirectURL;
}

@property(retain) NSURL *lastRedirectURL; // @synthesize lastRedirectURL=_lastRedirectURL;
@property(retain) NSSet *responses; // @synthesize responses=_responses;
- (void)executePropFindTask:(id)arg1 usingTaskManager:(id)arg2;
- (void)_setCompletionBlockOnTask:(id)arg1;
- (void)dealloc;

@end

