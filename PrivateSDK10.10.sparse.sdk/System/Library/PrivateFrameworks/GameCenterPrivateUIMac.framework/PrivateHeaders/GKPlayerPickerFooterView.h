/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class NSButton;

@interface GKPlayerPickerFooterView : NSView
{
    NSButton *_cancelButton;
    NSButton *_nextButton;
}

+ (id)footerView;
@property NSButton *nextButton; // @synthesize nextButton=_nextButton;
@property NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(getter=isNextButtonEnabled) BOOL nextButtonEnabled;
- (void)nextButtonPressed:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;

@end

