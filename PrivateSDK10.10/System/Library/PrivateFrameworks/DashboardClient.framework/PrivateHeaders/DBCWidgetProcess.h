/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableSet;

@interface DBCWidgetProcess : NSObject
{
    unsigned int _server_port;
    struct __CFRunLoopSource *_source;
    NSMutableArray *_widgets;
    NSMutableSet *_registeredFonts;
}

+ (void)applicationDidFinishLaunching:(id)arg1;
+ (void)initializeSingleton;
+ (id)widgetProcess;
+ (void)startup;
- (void)_updateCrashReporter;
- (void)_fetchWidgetsFromServer:(BOOL)arg1;
- (id)name;
- (id)windowsOfAllWidgets;
- (void)terminateWidget:(id)arg1;
- (void)processWillTerminate;
- (void)registerFontsForBundleID:(id)arg1 fonts:(id)arg2;
- (id)init;

@end
