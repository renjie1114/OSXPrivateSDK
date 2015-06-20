/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarUI/EKUISingleTextFieldGadget.h>

#import "CalUIResizingTextFieldDelegate-Protocol.h"

@class NSString;

@interface EKUIURLGadget : EKUISingleTextFieldGadget <CalUIResizingTextFieldDelegate>
{
    BOOL _mouseEntered;
}

+ (id)interestedChangeKeys;
@property BOOL mouseEntered; // @synthesize mouseEntered=_mouseEntered;
- (BOOL)performDragOperation:(id)arg1;
- (id)claimedPboardTypes;
- (void)mouseExitedGadgetView;
- (void)mouseEnteredGadgetView;
- (void)updateWithChanges:(id)arg1;
- (void)updateEvent;
- (id)url;
- (double)maxHeight;
- (BOOL)shouldDisplayForEvent:(id)arg1;
- (BOOL)hasData;
- (id)placeholderText;
- (id)initWithEventViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
