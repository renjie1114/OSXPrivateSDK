/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface EAEmailAddressParser : NSObject
{
}

+ (id)displayNameFromAddress:(id)arg1;
+ (id)addressDomainFromAddress:(id)arg1;
+ (id)rawAddressRespectingGroupsFromFullAddress:(id)arg1;
+ (id)rawAddressFromFullAddress:(id)arg1;
+ (BOOL)addressIsEmptyGroup:(id)arg1;
+ (BOOL)isLegalEmailAddress:(id)arg1;
+ (id)unsafeAddressLocalPartCharacterSet;

@end

