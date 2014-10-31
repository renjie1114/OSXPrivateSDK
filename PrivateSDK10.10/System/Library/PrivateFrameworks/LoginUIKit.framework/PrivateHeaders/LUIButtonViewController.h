/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <LoginUIKit/LUIViewController.h>

@class NSArray;

@interface LUIButtonViewController : LUIViewController
{
    NSArray *_buttons;
}

+ (id)identifier;
+ (id)controllerWithStyle:(int)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1;
- (void)tearDownController;
- (void)setButtons:(id)arg1;
- (void)refresh;
- (void)setUIEnabled:(BOOL)arg1;
- (void)_setupContentView;
- (void)_layoutContentView;
- (void)_buttonPressed:(id)arg1;
- (id)_buttonForIdentifier:(id)arg1;

@end
