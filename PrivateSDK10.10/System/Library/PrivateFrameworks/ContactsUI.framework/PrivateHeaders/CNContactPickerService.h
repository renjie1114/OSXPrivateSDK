/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CNContactPickerViewService, CNContactPickerXPCRelay;

@interface CNContactPickerService : NSObject
{
    CNContactPickerXPCRelay *_relay;
    CNContactPickerViewService *_viewController;
}

+ (id)sharedService;
- (void).cxx_destruct;
- (void)setViewController:(id)arg1;
@property(readonly) CNContactPickerXPCRelay *XPCRelay;
- (id)init;

@end
