/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "PASampleNodeDataSource-Protocol.h"

@class NSMutableArray, NSString;

@interface PAAggregatedThread : NSObject <PASampleNodeDataSource>
{
    NSMutableArray *topFrames;
    unsigned int numStackshots;
    unsigned long long thread_id;
    unsigned long long startCPUTime;
    unsigned long long endCPUTime;
    int priority;
    BOOL hasDispatchQueue;
    unsigned long long dispatchQueueId;
}

- (id)children;
- (unsigned long long)sampleCount;
- (id)detailedDescription;
- (id)displayName;
- (id)topStackFrames;
- (void)printThreadToFile:(struct __sFILE *)arg1;
- (void)addSampleThreadDataStack:(id)arg1;
- (void)addThreadStackshot:(id)arg1;
- (unsigned long long)totalCPUTimeInNs;
- (unsigned long long)thread_id;
- (void)dealloc;
- (void)symbolicateWithPid:(int)arg1 andSampleTimeSeriesDataStore:(id)arg2;
- (void)symbolicateWithPid:(int)arg1 andSymbolDataStore:(id)arg2;
- (id)initWithThread:(id)arg1;
- (id)initWithSampleThreadData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

