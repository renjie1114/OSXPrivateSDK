/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface CNAutocompleteFetchRequestConfiguration : NSObject
{
    id _configurationBlock;
}

+ (id)configurationWithBlock:(id)arg1;
+ (id)configurationWithLiveUserDataForContacts:(BOOL)arg1 recents:(BOOL)arg2 servers:(BOOL)arg3 searchString:(id)arg4;
- (void).cxx_destruct;
- (void)configureQueryConfiguration:(id)arg1;
- (id)initWithConfigurationBlock:(id)arg1;

@end

