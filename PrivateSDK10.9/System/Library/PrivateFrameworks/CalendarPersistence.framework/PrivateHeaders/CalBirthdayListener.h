//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalABListener.h>

@class CalLimitingQueue;

@interface CalBirthdayListener : CalABListener
{
    BOOL _needsReset;
    CalLimitingQueue *_updateQueue;
}

+ (id)sharedListener;
@property BOOL needsReset; // @synthesize needsReset=_needsReset;
- (id)createEventInCalendar:(id)arg1 withABUID:(id)arg2 withLinkID:(id)arg3 withSummary:(id)arg4 withBirthday:(id)arg5 withName:(id)arg6 isYearless:(BOOL)arg7;
- (id)createBirthdayCalendarInContext:(id)arg1;
- (id)createFacebookCalendarInContext:(id)arg1;
- (void)putContactInAppropriateBirthdayCalendar:(id)arg1 forExistingEvent:(id)arg2 withCalendars:(id)arg3 eventsCreatedSoFar:(id)arg4 inContext:(id)arg5;
- (id)existingBirthdayEventsInCalendars:(id)arg1 withPeople:(id)arg2 context:(id)arg3;
- (id)uniquePeopleWithBirthdays;
- (id)findBirthdayCalendarsInContext:(id)arg1 createLocalCalendarIfNeeded:(BOOL)arg2;
- (void)saveEventsAndObtainIDsFor:(id)arg1 inContext:(id)arg2;
- (void)getRidOfFacebookCalendarIfEmpty:(id)arg1;
- (void)_resetInManagedObjectContext:(id)arg1;
- (id)unifiedPersonHelperForPerson:(id)arg1 linkIDsSeenSoFar:(id)arg2;
- (id)unifiedPersonHelperForEvent:(id)arg1 linkIDsSeenSoFar:(id)arg2 usingAddressBook:(id)arg3;
- (id)peopleFromDeletedUIDs:(id)arg1 updatedUIDs:(id)arg2 insertedUIDs:(id)arg3 inContext:(id)arg4;
- (void)_runQuickUpdateInBackground:(id)arg1;
- (void)_addressBookChanged:(id)arg1;
- (void)_runUpdateJobIfNecessaryInBackground;
- (void)disableBirthdayCalendars;
- (void)addBirthdayCalendars;
- (BOOL)areBirthdaysEnabled;
- (void)dealloc;
- (id)init;

@end
