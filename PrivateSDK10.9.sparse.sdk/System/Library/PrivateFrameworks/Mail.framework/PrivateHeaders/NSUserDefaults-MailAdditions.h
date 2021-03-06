//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSUserDefaults.h"

@class NSString, NSURL;

@interface NSUserDefaults (MailAdditions)
- (void)_mf_setObject:(id)arg1 forKey:(id)arg2 version:(unsigned long long)arg3;
- (id)_mf_objectForKey:(id)arg1 version:(unsigned long long)arg2;
- (void)setDisplayName:(id)arg1 forFlagColor:(BOOL)arg2;
- (id)displayNameForFlagColor:(BOOL)arg1;
@property BOOL autosaveWindows;
@property(readonly) double autoSaveStoreDelay;
@property(readonly) double autoSaveDelay;
@property BOOL junkMailEvaluationAfterRules;
@property long long junkMailBehavior;
@property BOOL junkMailTrustHeaders;
@property(readonly) NSString *autoDownloadDirectoryPath;
@property(retain) NSURL *downloadDirectoryURL;
@end

