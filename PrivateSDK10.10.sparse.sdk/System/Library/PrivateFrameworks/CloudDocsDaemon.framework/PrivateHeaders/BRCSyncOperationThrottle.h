/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSString;

// Not exported
@interface BRCSyncOperationThrottle : NSObject <NSSecureCoding>
{
    double _delay;
    double _nextTry;
    NSString *_containerID;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *containerID; // @synthesize containerID=_containerID;
@property(readonly, nonatomic) double nextTry; // @synthesize nextTry=_nextTry;
@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
- (void).cxx_destruct;
- (void)clear;
- (void)updateForError:(id)arg1;
- (void)updateAfterSchedulingTask;
- (void)updateAfterSchedulingTaskWithMinimumDelay:(double)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainerID:(id)arg1;

@end

