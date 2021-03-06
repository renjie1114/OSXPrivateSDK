/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSViewController.h"

@class NSArray, NSButton, NSPopUpButton, NSTrackingArea;

@interface SHKShareLocationController : NSViewController
{
    NSArray *_locations;
    long long _status;
    long long _currentLocationIndex;
    id _updateLocationsBlock;
    id <SHKShareLocationControllerDelegate> _delegate;
    NSTrackingArea *_buttonTrackingArea;
    NSButton *locationButton;
    NSPopUpButton *locationsPopupButton;
}

+ (id)keyPathsForValuesAffectingCurrentLocationDisplayName;
+ (id)keyPathsForValuesAffectingCurrentLocation;
@property __weak id <SHKShareLocationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) id updateLocationsBlock; // @synthesize updateLocationsBlock=_updateLocationsBlock;
@property long long currentLocationIndex; // @synthesize currentLocationIndex=_currentLocationIndex;
- (void).cxx_destruct;
- (void)locationPopupChanged:(id)arg1;
- (void)locationClicked:(id)arg1;
- (id)currentLocationDisplayName;
@property(readonly) id currentLocation;
@property(copy) NSArray *locations;
- (void)updateFailedAndIsUnavailable:(BOOL)arg1;
@property long long status; // @synthesize status=_status;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)_showRemoveImage;
- (void)_showAndUpdateArrowImage;
- (id)imageForLocationButtonState:(unsigned long long)arg1;
- (void)_removeTrackingAreaForButton;
- (void)_addTrackingAreaForButton;
@property BOOL enabled;
- (void)_updateLocationsPopupWidth;
- (void)_updateLocationsPopup;
- (id)_titleForLocation:(id)arg1;
- (void)invalidate;
- (id)initWithParentView:(id)arg1;
- (BOOL)isTextDirectionRTL;

@end

