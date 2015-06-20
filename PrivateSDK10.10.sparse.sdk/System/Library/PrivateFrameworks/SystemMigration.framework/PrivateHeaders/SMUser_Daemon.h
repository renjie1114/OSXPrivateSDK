/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SystemMigration/SMUser.h>

@class NSArray, NSLock, NSMutableArray, NSNumber, NSObject<OS_dispatch_queue>, NSString, SMDBEntry, SMSystem_Daemon;

@interface SMUser_Daemon : SMUser
{
    NSArray *_pathsInHomeDirToNeverCopy;
    NSMutableArray *_allOtherFilesInDirectory;
    NSMutableArray *_userExcludedPathList;
    NSString *_cachedAbsHomeDir;
    NSString *_picturePath;
    NSNumber *_cachedHomeDirSize;
    NSLock *_cachedHomeDirSizeLock;
    BOOL _calculatingHome;
    BOOL _homeDirSearchComplete;
    BOOL _homeDirToBeCopiedByMigration;
    BOOL _needsAttention;
    BOOL isAdminUser;
    BOOL _isAutoLoginUser;
    BOOL _shouldUseAlternateFileVaultHomeDirPath;
    SMSystem_Daemon *sourceSystem;
    SMDBEntry *_backing;
    NSObject<OS_dispatch_queue> *_sizingQueue;
    NSObject<OS_dispatch_queue> *_excludablePathQueue;
    NSMutableArray *_supportedPathList;
}

+ (id)_pathsToNeverCopy;
@property(retain) NSMutableArray *supportedPathList; // @synthesize supportedPathList=_supportedPathList;
@property(retain) NSObject<OS_dispatch_queue> *excludablePathQueue; // @synthesize excludablePathQueue=_excludablePathQueue;
@property(retain) NSObject<OS_dispatch_queue> *sizingQueue; // @synthesize sizingQueue=_sizingQueue;
@property(retain) NSMutableArray *allOtherFilesInDirectory; // @synthesize allOtherFilesInDirectory=_allOtherFilesInDirectory;
@property BOOL shouldUseAlternateFileVaultHomeDirPath; // @synthesize shouldUseAlternateFileVaultHomeDirPath=_shouldUseAlternateFileVaultHomeDirPath;
@property BOOL isAutoLoginUser; // @synthesize isAutoLoginUser=_isAutoLoginUser;
@property(retain) SMDBEntry *backing; // @synthesize backing=_backing;
@property(retain) SMSystem_Daemon *sourceSystem; // @synthesize sourceSystem;
@property BOOL isAdminUser; // @synthesize isAdminUser;
- (void).cxx_destruct;
- (BOOL)_checkShadowHashPassword:(id)arg1;
- (void)_binaryToHexConversion:(const char *)arg1 len:(unsigned long long)arg2 hex:(char *)arg3;
- (BOOL)_checkCryptPassword:(id)arg1;
- (id)_getEntry:(id)arg1 atIndex:(int)arg2;
- (id)_fileVaultImagePath;
- (void)setHomeDirSize:(id)arg1;
- (id)_initWithEntry:(id)arg1 fromSystem:(id)arg2;
- (BOOL)homeDirToBeSymlinkedByMigration;
- (BOOL)__homeDirToBeCopiedByMigration;
- (BOOL)homeDirIsRedirected;
- (BOOL)homeDirToBeCopiedByMigration;
- (id)sizeOfDataToCopySizingQueue;
- (id)sizeOfDataToCopy;
- (id)totalHomeDirectorySize;
- (id)sizeForSubPath:(id)arg1;
- (id)_sizeForSubPath:(id)arg1;
- (void)calculateHomeDirSize:(id)arg1;
- (id)homeDirSize;
- (BOOL)verifyPassword:(id)arg1;
- (id)passwordFilePath;
- (id)authenticationType;
- (id)password;
- (id)entriesForKey:(id)arg1;
- (id)filevaultAlternateHomeDirPath;
- (id)currentAbsolutePathToHomeDir;
- (id)relativeHomeDir;
- (id)homeDirOnNetworkSystem;
- (id)accountPicture;
- (id)picturePath;
- (id)embeddedDSPicture;
- (id)picturePathFromDB;
- (id)UUID;
- (unsigned int)gid;
- (unsigned int)uid;
@property(readonly, getter=isDisabled) BOOL disabled;
- (BOOL)isRoleUser;
- (BOOL)portableHomeUser;
- (BOOL)filevault;
- (id)fullName;
- (id)iCloudName;
- (id)modernICloudName;
- (id)oldICloudName;
- (id)name;
- (BOOL)dontNeedToCopyUserHome;
- (id)extraString:(id)arg1 withColor:(id)arg2;
- (BOOL)hasUserExcludedPath:(id)arg1;
- (void)removeUserExcludedPath:(id)arg1;
- (void)addUserExcludedPaths:(id)arg1;
- (void)addUserExcludedPath:(id)arg1;
- (id)pathsExcludedByTheUser;
- (id)pathsExcludableByTheUser;
- (BOOL)migratableUser;
- (id)pathsExcluded;
- (id)description;
- (id)fullDescription;
- (id)replacementObjectForPortCoder:(id)arg1;

@end
