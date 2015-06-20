//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalManagedGroup.h>

#import "DefaultAlarmProviderProtocol.h"

@class CalManagedAccount, CalManagedDefaultAlarmSet, CalManagedMigrationGroup, NSSet, NSString, NSURL;

@interface CalManagedPrincipal : CalManagedGroup <DefaultAlarmProviderProtocol>
{
    BOOL _statusIsBusy;
}

+ (BOOL)calendarUserAddress:(id)arg1 isInCalendarAddressUserSet:(id)arg2;
+ (id)myAddressInPrincipal:(id)arg1 forEvent:(id)arg2;
+ (id)fetchRequestForICalMainWindowPrincipalsInManagedObjectContext:(id)arg1;
+ (id)fetchRequestForDelegatesWithAccount:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)fetchRequestForICalDelegatesWithUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)fetchRequestForICalDelegatesInManagedObjectContext:(id)arg1;
+ (id)fetchRequestWithUIDs:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)fetchRequestWithUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityName;
@property BOOL statusIsBusy; // @synthesize statusIsBusy=_statusIsBusy;
- (BOOL)isEnabledForReminders;
- (BOOL)isEnabledForEvents;
- (void)refresh:(int)arg1;
- (void)deactivate;
- (void)awakeFromSnapshotEvents:(unsigned long long)arg1;
- (void)stripPathAndSetOverrideBaseURL:(id)arg1;
@property(retain) NSURL *overrideBaseURL;
- (void)_setOverrideBaseURL:(id)arg1;
@property(readonly) BOOL supportsFreebusy;
@property BOOL isDelegate;
@property(readonly) BOOL isMainPrincipal;
@property(readonly) BOOL isAutoScheduleSupported;
@property(readonly) BOOL isPrivateCommentsSupported;
@property(readonly) BOOL isCalendarServerPrivateEventsSupported;
- (id)properties;
@property(readonly) NSURL *calendarUserAddress;
- (BOOL)calendarUserAddressIsEquivalentToURL:(id)arg1;
- (id)calendarUserAddressesAsURLs;
- (BOOL)_changeAffectsAccount:(id)arg1;
- (BOOL)_changeAffectsDockTile:(id)arg1;
- (BOOL)_changeAffectsAccountSync:(id)arg1;
- (BOOL)_changeAffectsRefresh:(id)arg1;

// Remaining properties
@property(retain) CalManagedAccount *account; // @dynamic account;
@property(retain) NSSet *calendarUserAddresses; // @dynamic calendarUserAddresses;
@property(readonly) CalManagedDefaultAlarmSet *defaultAlarmSet; // @dynamic defaultAlarmSet;
@property(retain) NSString *fullName; // @dynamic fullName;
@property BOOL isInSeparateWindow; // @dynamic isInSeparateWindow;
@property BOOL isManuallyConfigured; // @dynamic isManuallyConfigured;
@property BOOL keepOffline; // @dynamic keepOffline;
@property(readonly) CalManagedDefaultAlarmSet *localDefaultAlarmSet; // @dynamic localDefaultAlarmSet;
@property(retain) NSSet *messages; // @dynamic messages;
@property(retain) CalManagedMigrationGroup *migrationGroup; // @dynamic migrationGroup;
@property BOOL shareDefaultAlarmSettings; // @dynamic shareDefaultAlarmSettings;
@property BOOL supportsDefaultAlarms; // @dynamic supportsDefaultAlarms;

@end
