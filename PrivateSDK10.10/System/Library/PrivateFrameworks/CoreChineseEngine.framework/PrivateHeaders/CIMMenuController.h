/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMenu;

@interface CIMMenuController : NSObject
{
    NSMenu *_menu;
    NSMenu *_originalMenu;
}

+ (id)sharedMenuController;
@property(retain, nonatomic) NSMenu *menu; // @synthesize menu=_menu;
- (id)menuForInputMethodIdentifier:(id)arg1;
- (void)setupDefaultActions;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;

@end
