/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ExchangeWebServices/EWSResponseMessageType.h>

@class NSArray, NSString;

@interface EWSSyncFolderItemsResponseMessageType : EWSResponseMessageType
{
    NSString *_SyncState;
    BOOL _IncludesLastItemInRange;
    NSArray *_Changes;
}

+ (id)definition;
@property(copy, nonatomic) NSArray *Changes; // @synthesize Changes=_Changes;
@property(nonatomic) BOOL IncludesLastItemInRange; // @synthesize IncludesLastItemInRange=_IncludesLastItemInRange;
@property(copy, nonatomic) NSString *SyncState; // @synthesize SyncState=_SyncState;
- (void)dealloc;

@end
