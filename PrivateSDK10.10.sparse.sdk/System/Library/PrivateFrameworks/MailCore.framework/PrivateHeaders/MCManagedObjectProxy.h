/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MCChanging-Protocol.h"

@class NSManagedObject, NSManagedObjectContext, NSString;

@interface MCManagedObjectProxy : NSObject <MCChanging>
{
    NSManagedObjectContext *_context;
    NSManagedObject *_managedObject;
    BOOL _isChanging;
}

@property BOOL isChanging; // @synthesize isChanging=_isChanging;
- (void).cxx_destruct;
- (BOOL)endChanging:(BOOL)arg1 immediately:(BOOL)arg2;
- (void)beginChanging;
- (void)setProxiedValue:(id)arg1 forKey:(id)arg2;
- (id)proxiedValueForKey:(id)arg1;
- (void)_handleObjectDeletion:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)objectID;
- (void)dealloc;
- (id)init;
- (id)initWithManagedObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

