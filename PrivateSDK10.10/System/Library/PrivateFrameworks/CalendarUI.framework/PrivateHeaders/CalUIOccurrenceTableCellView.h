/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTableCellView.h"

@class EKEvent, NSArray, NSImage, NSImageView, NSTextField;

@interface CalUIOccurrenceTableCellView : NSTableCellView
{
    EKEvent *_event;
    NSArray *_detailsFields;
    NSImageView *_dotImageView;
    NSTextField *_titleField;
    NSImage *_dotImage;
    NSImage *_selectedDotImage;
}

@property(retain) NSImage *selectedDotImage; // @synthesize selectedDotImage=_selectedDotImage;
@property(retain) NSImage *dotImage; // @synthesize dotImage=_dotImage;
@property(retain) NSTextField *titleField; // @synthesize titleField=_titleField;
@property(retain) NSImageView *dotImageView; // @synthesize dotImageView=_dotImageView;
@property(retain) NSArray *detailsFields; // @synthesize detailsFields=_detailsFields;
@property(retain) EKEvent *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (id)effectiveEndDate;
- (BOOL)isMultiDayEvent;
- (id)timeStringWithClarifiedTimeZoneIfNecessary:(id)arg1;
- (id)bottomTimeFieldString;
- (id)topTimeFieldString;
- (id)dateAndTimeStringForDate:(id)arg1;
- (id)timeStringForDate:(id)arg1;
- (id)dateStringForDate:(id)arg1;
- (id)dotImageSelected:(BOOL)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)updateTitleFontIsSelected:(BOOL)arg1;
- (id)initWithEvent:(id)arg1 hideDateField:(BOOL)arg2 hideTimeField:(BOOL)arg3 hideLocationField:(BOOL)arg4 hideAttendeeField:(BOOL)arg5;
- (id)initWithEvent:(id)arg1;

@end
