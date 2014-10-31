/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface CalDAVClientInfoSentry : NSObject
{
    NSMutableDictionary *_hostToPluginIDCache;
    NSMutableDictionary *_pluginIDToTransmissionCheckResultCache;
}

@property(retain) NSMutableDictionary *pluginIDToTransmissionCheckResultCache; // @synthesize pluginIDToTransmissionCheckResultCache=_pluginIDToTransmissionCheckResultCache;
@property(retain) NSMutableDictionary *hostToPluginIDCache; // @synthesize hostToPluginIDCache=_hostToPluginIDCache;
- (BOOL)clearedToSendInfoForPluginWithIdentifier:(id)arg1;
- (id)pluginIdentifierForHost:(id)arg1;
- (BOOL)shouldSendClientInfoHeaderForURL:(id)arg1 providerHost:(id)arg2;
- (id)description;
- (void)dealloc;
- (id)init;

@end
