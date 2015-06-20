//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XMPPIQTarget.h"

@interface XMPPExtension : NSObject <XMPPIQTarget>
{
    id <XMPPExtensionSession> _session;
}

- (void)parseMessageNode:(id)arg1 intoMessage:(id)arg2 additionalProperties:(id)arg3;
- (void)writeToMessageTagForConnection:(id)arg1 messageType:(int)arg2 jid:(id)arg3 message:(id)arg4 additionalProperties:(id)arg5;
- (id)writeOpenMessageTagForConnection:(id)arg1 messageType:(int)arg2 jid:(id)arg3 message:(id)arg4 additionalProperties:(id)arg5;
- (void)writeToPresenceTagForConnection:(id)arg1;
- (void)setCapabilities:(unsigned long long)arg1 withCapsManager:(id)arg2;
- (unsigned long long)capabilitiesForNamespaces:(id)arg1;
- (void)handleHostFeaturesUpdated;
- (BOOL)handleIncomingSession:(id)arg1;
- (void)handlePresenceNode:(id)arg1;
- (void)loggedOut;
- (void)loggedIn;
- (void)installed;
- (void)clearDelegate;
- (id)session;
- (void)setSession:(id)arg1;
- (void)dealloc;
- (id)init;

@end
