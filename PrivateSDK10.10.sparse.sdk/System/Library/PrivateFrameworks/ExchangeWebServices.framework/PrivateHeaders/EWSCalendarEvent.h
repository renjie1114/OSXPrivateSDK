/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class EWSCalendarEventDetails, NSDateComponents;

@interface EWSCalendarEvent : NSObject
{
    NSDateComponents *_StartTime;
    NSDateComponents *_EndTime;
    int _BusyType;
    EWSCalendarEventDetails *_CalendarEventDetails;
}

+ (id)definition;
@property(retain, nonatomic) EWSCalendarEventDetails *CalendarEventDetails; // @synthesize CalendarEventDetails=_CalendarEventDetails;
@property(nonatomic) int BusyType; // @synthesize BusyType=_BusyType;
@property(retain, nonatomic) NSDateComponents *EndTime; // @synthesize EndTime=_EndTime;
@property(retain, nonatomic) NSDateComponents *StartTime; // @synthesize StartTime=_StartTime;
- (void)dealloc;

@end
