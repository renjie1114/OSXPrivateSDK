//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, SMUIDGIDTranslator;

@interface SMMigrationSession : NSObject
{
    BOOL _readFromDisk;
    NSMutableSet *_completedPath;
    NSMutableSet *_currentCopyEngineCompletedPath;
    NSMutableSet *_pathsToDelete;
    SMUIDGIDTranslator *_uidgidTranslator;
    BOOL _useSandBox;
}

+ (id)localizedResumeMigrationPrompt;
+ (id)sandboxPath;
+ (BOOL)canResumePreviousMigrationSession;
+ (BOOL)canResumePreviousMigrationSessionWithSystem:(id)arg1;
+ (id)_canResumePreviousMigrationSession;
+ (void)deletePreviousMigrationSession;
+ (id)loadPreviousMigrationSession;
+ (void)_makeSessionNotResumable;
@property BOOL useSandBox; // @synthesize useSandBox=_useSandBox;
- (void)deletePathsBeforeShove;
- (id)pathsToDeleteBeforeShove;
- (void)addPathToDeleteBeforeShove:(id)arg1;
- (BOOL)copyWasCompletedForPath:(id)arg1;
- (void)copyCompletedForPath:(id)arg1;
@property(retain) SMUIDGIDTranslator *uidgidTranslator;
- (BOOL)wasResumedFromAPreviousMigrationSession;
- (void)completedMigrationWithRequest:(id)arg1;
- (void)startingMigrationWithRequest:(id)arg1;
- (void)predetermineTranslatedUIDsForRequest:(id)arg1;
- (id)initWithPreviousMigrationSession;
- (void)dealloc;
- (id)init;
- (void)_unserializePersistentState;
- (void)_serializePersistentState;
- (BOOL)_makeSessionResumable:(id)arg1;

@end
