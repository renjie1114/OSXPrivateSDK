//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ALSession, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface SMAutoLoaderServer : NSObject
{
    ALSession *_session;
    NSMutableDictionary *_txtRecord;
    NSObject<OS_dispatch_queue> *_requestQueue;
}

+ (id)modelIDOfCurrentSystem;
- (BOOL)shouldAcceptPeerCertificates:(id)arg1;
- (id)localCertificates;
- (BOOL)session:(id)arg1 shouldAcceptPeerWithAddress:(id)arg2;
- (void)session:(id)arg1 streamClosing:(id)arg2;
- (void)session:(id)arg1 newIncomingStream:(id)arg2;
- (void)sessionInterrupted:(id)arg1 didReplaceActiveConnection:(BOOL)arg2;
- (void)sessionIsActive:(id)arg1;
- (void)sessionHasFasterConnectionAvailable:(id)arg1;
- (void)sessionDeterminingFastestConnection:(id)arg1;
- (void)session:(id)arg1 didFailConnectionToPeerNamed:(id)arg2;
- (void)session:(id)arg1 resolvedPeerNamed:(id)arg2 txtRecord:(id)arg3;
- (void)session:(id)arg1 failedToResolvePeerNamed:(id)arg2;
- (void)session:(id)arg1 peerDisappeared:(id)arg2;
- (void)session:(id)arg1 discoveredPeerNamed:(id)arg2;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end
