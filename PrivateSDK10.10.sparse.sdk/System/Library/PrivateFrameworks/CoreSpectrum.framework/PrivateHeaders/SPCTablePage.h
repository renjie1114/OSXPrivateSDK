/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreSpectrum/SPCTableStore.h>

#import "NSSecureCoding-Protocol.h"

@class NSArray;

@interface SPCTablePage : SPCTableStore <NSSecureCoding>
{
}

- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)createdObjectForIndex:(unsigned long long)arg1;
- (void)insertRowValues:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)enumerateRowsUsingBlock:(id)arg1;
- (id)rowForKey:(id)arg1 createIfNecessary:(BOOL)arg2;
- (id)rowForKey:(id)arg1;
- (id)rowAtIndex:(unsigned long long)arg1 createIfNecessary:(BOOL)arg2;
- (id)rowAtIndex:(unsigned long long)arg1;
- (void)removeRowAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long rowCount;
@property(readonly, copy, nonatomic) NSArray *rows;
- (id)initWithRowKeys:(id)arg1 andRows:(id)arg2;
- (id)initWithRowKeys:(id)arg1;

@end

