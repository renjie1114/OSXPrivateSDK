//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface ICFCallServer : NSObject
{
    struct _xpc_connection_s *_connection;
    NSMutableArray *_clients;
    BOOL _hasRegistered;
}

+ (id)sharedInstance;
- (void)dealloc;
- (void)shouldAllowIncomingCallForNumber:(id)arg1 forService:(id)arg2 response:(CDUnknownBlockType)arg3;
- (void)_configureWithClient:(struct _xpc_connection_s *)arg1;
- (void)_cleanupClient:(struct _xpc_connection_s *)arg1;
- (void)_cleanup;
- (void)_clientConnected;
- (void)_requestCallGrantForIdentifier:(id)arg1 forService:(id)arg2 waitForResponse:(BOOL)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)init;

@end
