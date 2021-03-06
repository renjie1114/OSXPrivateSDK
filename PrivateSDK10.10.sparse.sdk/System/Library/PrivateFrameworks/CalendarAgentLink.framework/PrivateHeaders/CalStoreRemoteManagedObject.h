/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarAgentLink/CalStoreRemoteObject.h>

@class NSString;

@interface CalStoreRemoteManagedObject : CalStoreRemoteObject
{
    NSString *_objectId;
}

+ (BOOL)supportsSecureCoding;
+ (id)fetchObjectsWithPredicate:(id)arg1;
+ (id)fetchObjectWithUID:(id)arg1;
+ (id)fetchObjectWithObjectId:(id)arg1;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
- (void)encodeWithCoder:(id)arg1;
- (id)saveWithError:(id *)arg1;
- (BOOL)removeWithError:(id *)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

