/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ViewBridge/NSSelfDestructingRemoteViewDelegate.h>

#import "NSRendezvousWindowDelegate-Protocol.h"

@interface NSRendezvousChildWindowDelegate : NSSelfDestructingRemoteViewDelegate <NSRendezvousWindowDelegate>
{
    unsigned int _isSettingValue:1;
}

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(id)arg4;
@property(readonly) BOOL isSettingValue;

@end
