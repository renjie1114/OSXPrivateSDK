//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ShareKit/SHKWindowController.h>

@class NSButton, NSImageView, NSTextField;

@interface SHKAccountConfigurationWindowController : SHKWindowController
{
    NSImageView *logoImageView;
    NSImageView *iconImageView;
    NSTextField *setupTextField;
    NSButton *cancelButton;
    NSButton *configureButton;
}

@property(readonly) NSButton *configureButton; // @synthesize configureButton;
@property(readonly) NSButton *cancelButton; // @synthesize cancelButton;
@property(readonly) NSTextField *setupTextField; // @synthesize setupTextField;
@property(readonly) NSImageView *iconImageView; // @synthesize iconImageView;
@property(readonly) NSImageView *logoImageView; // @synthesize logoImageView;
- (void)closeAndConfigure:(id)arg1;
- (void)close:(id)arg1;
- (BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (id)serviceNotConfiguredError;
- (void)_close;
- (id)windowNibName;
- (void)windowDidLoad;
- (id)initWithWindow:(id)arg1;

@end

