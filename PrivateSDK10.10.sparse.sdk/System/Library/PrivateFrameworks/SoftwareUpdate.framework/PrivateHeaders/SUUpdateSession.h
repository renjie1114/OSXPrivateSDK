/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSMutableSet;

@interface SUUpdateSession : NSObject
{
    NSMutableDictionary *_updateStatusByKey;
    NSMutableDictionary *_initiatedDownloads;
    NSDictionary *_completeUpdatesByKey;
    struct dispatch_semaphore_s *_foregroundConcurrentDownloadSemaphore;
    NSMutableSet *_backgroundKeys;
    NSMutableDictionary *_initiatedInstalls;
    NSMutableDictionary *_factoredInstallSizeByKey;
    NSMutableDictionary *_downloadDoneBlocksByKey;
    NSMutableDictionary *_completionSemaphoreByKey;
    long long _foregroundTransactions;
    long long _backgroundTransactions;
    NSMutableDictionary *_assertionByTransactionID;
    struct dispatch_queue_s *_updateStatusQueue;
    struct dispatch_queue_s *_clientNotifyQueue;
    struct dispatch_queue_s *_transactionQueue;
    BOOL _isPreparingForReboot;
    BOOL _nowIsLater;
    BOOL _pendingStageInstallCancelled;
    id _transactionCountDidChangeHandler;
    id _installStateDidChangeHandler;
}

+ (id)sharedUpdateSession;
@property BOOL pendingStageInstallCancelled; // @synthesize pendingStageInstallCancelled=_pendingStageInstallCancelled;
@property BOOL nowIsLater; // @synthesize nowIsLater=_nowIsLater;
@property BOOL isPreparingForReboot; // @synthesize isPreparingForReboot=_isPreparingForReboot;
@property(copy) id installStateDidChangeHandler; // @synthesize installStateDidChangeHandler=_installStateDidChangeHandler;
@property(copy) id transactionCountDidChangeHandler; // @synthesize transactionCountDidChangeHandler=_transactionCountDidChangeHandler;
- (unsigned long long)diskSpaceRequiredForProducts:(id)arg1 includingInstall:(BOOL)arg2;
- (void)_stopTransactionWithID:(long long)arg1;
- (long long)_startTransactionForForeground:(BOOL)arg1 withProducts:(id)arg2 includingInstall:(BOOL)arg3;
- (long long)activeBackgroundTransactions;
- (long long)activeForegroundTransactions;
- (id)combinedStatusForUpdatesWithProductKeys:(id)arg1 individualStatus:(id *)arg2;
- (id)statusForUpdateWithProductKey:(id)arg1;
- (id)_nonatomicStatusForUpdateWithProductKey:(id)arg1 averageDownloadSpeed:(float *)arg2;
- (id)_updateStatusForProducts:(id)arg1;
- (void)_cancelBackgroundDownloadOperations;
- (void)cancelUpdatesForProductKeys:(id)arg1 reply:(id)arg2;
- (void)startUpdateForProducts:(id)arg1 usingClientAuthorization:(struct AuthorizationOpaqueRef *)arg2 inForeground:(BOOL)arg3 holdingBoostDuringInstall:(BOOL)arg4 stageInstall:(BOOL)arg5 clientBlocksRestart:(BOOL)arg6 allowOnlyAppleSigned:(BOOL)arg7 packageScriptUserID:(unsigned int)arg8 sendingStatusUpdates:(BOOL)arg9 replyWhenDone:(id)arg10;
- (void)_installProducts:(id)arg1 authorization:(struct AuthorizationOpaqueRef *)arg2 holdingBoostDuringInstall:(BOOL)arg3 stageInstall:(BOOL)arg4 clientBlocksRestart:(BOOL)arg5 allowOnlyAppleSigned:(BOOL)arg6 packageScriptUserID:(unsigned int)arg7;
- (void)startDownloadingForProducts:(id)arg1 inForeground:(BOOL)arg2 replyWhenDone:(id)arg3;
- (void)_startDownloadingUpdateWithProduct:(id)arg1 inForeground:(BOOL)arg2 forActivePhases:(long long)arg3 completionBlock:(id)arg4;
- (void)finishStagingProduct:(id)arg1 completionBlock:(id)arg2;
- (BOOL)_shouldResetStatus:(id)arg1 afterScan:(BOOL)arg2;
- (void)updateStatusChangedExternally:(id)arg1;
- (void)setupStatusForAvailableProducts:(id)arg1 afterScan:(BOOL)arg2;
- (void)_installStateDidChangeForKey:(id)arg1;
- (void)dumpDebugInfo;
- (void)resetState;
- (void)archiveToCoder:(id)arg1;
- (void)restoreFromCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

