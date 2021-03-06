/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSFastEnumeration-Protocol.h"

@class NSMapTable;

@interface BRCMinHeap : NSObject <NSFastEnumeration>
{
    id *_array;
    unsigned long long _size;
    id _comparator;
    unsigned long long _mutation;
    NSMapTable *_objects;
    unsigned long long _count;
}

@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (void)objectWeightChanged:(id)arg1;
- (void)firstObjectWeightChanged;
- (void)removeAllObjects;
- (void)removeFirstObject;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)firstObject;
- (void)_moveUpOrDown:(id)arg1 index:(unsigned long long)arg2;
- (void)_moveDown:(id)arg1 index:(unsigned long long)arg2;
- (void)_moveUp:(id)arg1 index:(unsigned long long)arg2;
- (BOOL)check;
- (void)_shrink;
- (void)dealloc;
- (id)description;
- (id)initWithComparator:(id)arg1;

@end

