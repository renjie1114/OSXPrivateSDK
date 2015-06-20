/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class APSCUTWeakReference, APSPerAppTokenMap, NSArray, NSData, NSMutableArray, NSMutableDictionary, NSString;

@interface APSConnection : NSObject
{
    APSCUTWeakReference *_delegateReference;
    struct dispatch_queue_s *_ivarQueue;
    NSString *_environmentName;
    NSData *_publicToken;
    unsigned long long _messageSize;
    unsigned long long _largeMessageSize;
    NSString *_connectionPortName;
    unsigned int _connectionPort;
    NSArray *_enabledTopics;
    NSArray *_ignoredTopics;
    NSArray *_opportunisticTopics;
    BOOL _enableCriticalReliability;
    BOOL _enableStatusNotifications;
    BOOL _isConnected;
    BOOL _usesAppLaunchStats;
    NSMutableDictionary *_idsToOutgoingMessages;
    unsigned long long _nextOutgoingMessageID;
    struct dispatch_queue_s *_machQueue;
    struct dispatch_source_s *_mach_source;
    struct _xpc_connection_s *_connection;
    struct dispatch_queue_s *_delegateQueue;
    BOOL _everHadDelegate;
    NSMutableArray *_queuedDelegateBlocks;
    APSPerAppTokenMap *_perAppTokenMap;
    void *_dynamicStore;
    double _reconnectDelay;
    BOOL _isReconnectScheduled;
    BOOL _isDisconnected;
    BOOL _isDeallocing;
    BOOL _isShutdown;
    BOOL _enablePushDuringSleep;
    NSArray *_pushWakeTopics;
}

+ (id)preference:(id)arg1;
+ (id)environmentForNamedPort:(id)arg1;
+ (void)finishLogin;
+ (BOOL)sendActivationRecordToMachService:(id)arg1;
+ (struct OpaqueSecIdentityRef *)copyIdentity;
+ (void)_nonblockingXPCCallWithArgumentBlock:(id)arg1;
+ (void)_blockingXPCCallWithArgumentBlock:(id)arg1 resultHandler:(void)arg2 timeout:(id)arg3;
+ (void)initialize;
+ (id)connectionsDebuggingState;
+ (double)keepAliveIntervalForEnvironmentName:(id)arg1;
+ (void)requestCourierConnection;
+ (void)_blockingXPCCallWithArgumentBlock:(id)arg1 resultHandler:(void)arg2;
+ (void)_safelyCancelAndReleaseConnection:(struct _xpc_connection_s *)arg1;
+ (void)_safelyCancelAndReleaseAfterBarrierConnection:(struct _xpc_connection_s *)arg1;
+ (BOOL)isValidEnvironment:(id)arg1;
@property(readonly, nonatomic) BOOL isShutdown; // @synthesize isShutdown=_isShutdown;
@property(readonly, nonatomic) struct dispatch_queue_s *ivarQueue; // @synthesize ivarQueue=_ivarQueue;
@property(readonly, nonatomic) struct dispatch_queue_s *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
- (void)setPushWakeTopics:(id)arg1;
- (void)_setPushWakeTopics:(id)arg1;
- (void)setEnabledTopicsAreInteractive:(BOOL)arg1;
- (void)acknowledgeDidReceivePublicToken:(id)arg1;
- (void)deregisterForConsoleUserChangeNotifications;
- (void)registerForConsoleUserChangeNotifications;
- (void)performOSXDeallocation;
- (void)_rerequestPerAppTokens;
- (void)invalidateTokenForTopic:(id)arg1 identifier:(id)arg2;
- (void)_sendPerAppTokenRequestForTopic:(id)arg1 identifier:(id)arg2;
- (void)requestTokenForTopic:(id)arg1 identifier:(id)arg2;
- (void)sendFakeMessage:(id)arg1;
- (void)cancelOutgoingMessage:(id)arg1;
- (void)sendOutgoingMessage:(id)arg1;
- (void)_sendOutgoingMessage:(id)arg1 fake:(BOOL)arg2;
- (BOOL)hasIdentity;
- (void)_deliverToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3;
- (void)_deliverOutgoingMessageResultWithID:(unsigned long long)arg1 error:(id)arg2;
- (void)_deliverConnectionStatusFromDealloc:(BOOL)arg1;
- (void)_deliverConnectionStatusChange:(BOOL)arg1;
- (void)_deliverPublicToken:(id)arg1;
- (void)_deliverPublicTokenOnIvarQueue:(id)arg1;
- (void)_deliverDidReconnectOnIvarQueue;
- (void)_deliverMessage:(id)arg1;
- (void)_dispatch_async_to_ivarQueue:(id)arg1;
- (void)_addPushWakeTopicsToXPCMessage:(void *)arg1;
- (void)_addEnableStatusNotificationsToXPCMessage:(void *)arg1;
- (void)_addUsesAppLaunchStatsToXPCMessage:(void *)arg1;
- (void)_addEnableCriticalReliabilityToXPCMessage:(void *)arg1;
- (void)setEnableStatusNotifications:(BOOL)arg1;
- (void)_setEnableStatusNotifications:(BOOL)arg1 sendToDaemon:(BOOL)arg2;
- (void)setEnableCriticalReliability:(BOOL)arg1;
- (BOOL)isConnected;
- (BOOL)usesAppLaunchStats;
- (void)setUsesAppLaunchStats:(BOOL)arg1;
@property(nonatomic) unsigned long long largeMessageSize;
@property(nonatomic) unsigned long long messageSize;
@property(readonly, retain, nonatomic) NSData *publicToken;
- (void)setIgnoredTopics:(id)arg1;
- (void)setOpportunisticTopics:(id)arg1;
- (void)setEnabledTopics:(id)arg1;
- (void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2;
- (void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3;
- (void)_setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 sendToDaemon:(BOOL)arg4;
- (void)_onIvarQueue_setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 sendToDaemon:(BOOL)arg4;
- (void)removeFromRunLoop;
- (void)scheduleInRunLoop:(id)arg1;
- (void)_flushConnection;
- (void)_disconnectFromDealloc;
- (void)_disconnect;
- (void)_disconnectOnIvarQueue;
- (void)_cancelConnectionOnIvarQueue;
- (void)_connectIfNecessary;
- (void)_connectOnIvarQueue;
- (void)_connectIfNecessaryOnIvarQueue;
- (void)_reconnectIfNecessaryOnIvarQueueAfterDelay;
- (void)_handleEvent:(void *)arg1 withHandler:(id)arg2;
- (void)_noteDisconnectedFromDaemonOnIvarQueue;
- (void)_callDelegateOnIvarQueueWithBlock:(id)arg1;
@property(nonatomic) id <APSConnectionDelegate> delegate;
- (void)dealloc;
- (void)_shutdownFromDealloc;
- (void)shutdown;
- (void)_shutdownOnIvarQueue;
- (id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 enablePushDuringSleep:(BOOL)arg3 queue:(struct dispatch_queue_s *)arg4;
- (id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 queue:(struct dispatch_queue_s *)arg3;
- (id)initWithEnvironmentName:(id)arg1 queue:(struct dispatch_queue_s *)arg2;
- (id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2;
- (id)initWithEnvironmentName:(id)arg1;

@end
