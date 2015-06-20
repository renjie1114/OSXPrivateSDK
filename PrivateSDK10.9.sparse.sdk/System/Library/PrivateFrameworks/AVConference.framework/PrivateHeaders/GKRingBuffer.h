//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface GKRingBuffer : NSObject
{
    void *ringBufRef;
    unsigned int endTime;
    unsigned int capacity;
    unsigned int bytesPerFrame;
}

- (int)fetch:(char *)arg1 numSamples:(unsigned int)arg2 timestamp:(unsigned int)arg3;
- (int)needsNewNumSamples:(unsigned int)arg1 timestamp:(unsigned int)arg2;
- (BOOL)store:(char *)arg1 numSamples:(unsigned int)arg2 timestamp:(unsigned int)arg3;
- (void)increaseCapacity:(unsigned int)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCapacity:(unsigned int)arg1 bytesPerFrame:(unsigned int)arg2;

@end
