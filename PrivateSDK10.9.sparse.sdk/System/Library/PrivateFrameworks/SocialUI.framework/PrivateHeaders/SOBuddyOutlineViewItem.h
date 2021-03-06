//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString;

@interface SOBuddyOutlineViewItem : NSObject
{
    NSString *_displayID;
    NSString *_personUniqueID;
    NSMutableArray *_handles;
}

@property(readonly, nonatomic) NSArray *handles; // @synthesize handles=_handles;
@property(retain, nonatomic) NSString *personUniqueID; // @synthesize personUniqueID=_personUniqueID;
@property(retain, nonatomic) NSString *displayID; // @synthesize displayID=_displayID;
- (void)removeHandle:(id)arg1;
- (void)addHandle:(id)arg1;
- (void)dealloc;
- (id)init;

@end

