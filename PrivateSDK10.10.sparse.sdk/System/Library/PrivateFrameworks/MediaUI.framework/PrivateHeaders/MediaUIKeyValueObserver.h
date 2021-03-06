/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSCountedSet;

@interface MediaUIKeyValueObserver : NSObject <NSCopying>
{
    struct dispatch_queue_s *_queue;
    id _target;
    SEL _action;
    NSCountedSet *_observances;
    NSCountedSet *_internalObservances;
}

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)enumerateChanges:(id)arg1;
- (void)stopObservingKeyPath:(id)arg1 ofObject:(id)arg2;
- (void)beginObservingKeyPath:(id)arg1 ofObject:(id)arg2;
- (void)invalidate;
@property SEL action;
@property id target;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

