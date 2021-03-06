/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ABAddressBook, ABPerson, CALAddress, CalAddressABGroupWrapper, NSString;

@interface CalAutocompleteAttendee : NSObject
{
    NSString *_firstName;
    NSString *_lastName;
    NSString *_uid;
    BOOL _isOrganizer;
    NSString *_geoURLString;
    ABPerson *_person;
    CALAddress *_calAddress;
    CalAddressABGroupWrapper *_iiABGroupWrapper;
    ABAddressBook *_addressBook;
}

+ (id)recentsSourceIDForAccount:(id)arg1;
+ (id)properURLForAddress:(id)arg1 userType:(int)arg2;
+ (id)completionForSubstring:(id)arg1 displayedName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 address:(id)arg5 isLocation:(BOOL)arg6;
+ (id)descriptionForDisplayedName:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 address:(id)arg4;
+ (id)attendeeWithFirstName:(id)arg1 lastName:(id)arg2 commonName:(id)arg3 userType:(int)arg4 address:(id)arg5 emailAddress:(id)arg6 abPerson:(id)arg7 geoURLstring:(id)arg8;
+ (id)attendeeFromABPerson:(id)arg1;
+ (id)attendeeFromDictionary:(id)arg1;
+ (id)attendeeFromAddress:(id)arg1;
+ (id)attendeeWithCommonName:(id)arg1;
@property(retain) ABAddressBook *addressBook; // @synthesize addressBook=_addressBook;
@property(retain, nonatomic) NSString *UID; // @synthesize UID=_uid;
@property(retain) CalAddressABGroupWrapper *ABGroupWrapper; // @synthesize ABGroupWrapper=_iiABGroupWrapper;
@property(retain) ABPerson *_person; // @synthesize _person;
@property(retain) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain) NSString *firstName; // @synthesize firstName=_firstName;
@property BOOL isOrganizer; // @synthesize isOrganizer=_isOrganizer;
@property(retain) CALAddress *calAddress; // @synthesize calAddress=_calAddress;
@property(retain) NSString *geoURLstring; // @synthesize geoURLstring=_geoURLString;
- (id)representationForMail;
- (id)dictionaryRepresentation;
- (id)loginName;
- (id)compoundName;
@property BOOL scheduleForceSend;
- (void)setRSVP:(BOOL)arg1;
- (BOOL)rsvp;
@property(readonly) int scheduleStatus;
@property int participationStatus;
@property int userType;
@property int role;
@property(retain) NSString *commonName;
@property(retain) NSString *emailAddress;
@property(retain) NSString *address;
@property(readonly, retain) NSString *description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)newPersonWithAddressBook:(id)arg1;
@property(retain) ABPerson *person;
@property(readonly, retain) NSString *commonNameOrEmailAddress;
@property(readonly, retain) NSString *commonNameOrAddress;
@property(readonly) BOOL hasAddress;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCALAddress:(id)arg1;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2 commonName:(id)arg3 userType:(int)arg4 address:(id)arg5 emailAddress:(id)arg6 abPerson:(id)arg7 geoURLstring:(id)arg8;
- (void)markAsCleanAndNew;

@end

