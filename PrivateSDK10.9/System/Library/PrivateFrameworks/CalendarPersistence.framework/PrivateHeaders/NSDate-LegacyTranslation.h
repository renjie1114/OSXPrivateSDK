//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDate.h"

@interface NSDate (LegacyTranslation)
- (id)legacyDateAsType:(int)arg1 timeZone:(id)arg2;
- (id)convertToCALDateFromTimeZone:(id)arg1 toTimeZone:(id)arg2 isDateOnly:(BOOL)arg3;
- (id)CALDateInTimeZone:(id)arg1 isDateOnly:(BOOL)arg2;
- (id)CALDateOnlyInGMT;
- (id)CALDateOnlyInTimeZone:(id)arg1;
- (id)CALFloatingDateTimeInGMT;
- (id)CALFloatingDateTimeInTimeZone:(id)arg1;
- (id)CALDateTimeInTimeZone:(id)arg1;
@end
