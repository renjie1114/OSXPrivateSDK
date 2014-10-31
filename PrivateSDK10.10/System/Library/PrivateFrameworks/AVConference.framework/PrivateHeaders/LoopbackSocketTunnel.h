/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<LoopbackSocketTunnelDelegate>;

// Not exported
@interface LoopbackSocketTunnel : NSObject
{
    unsigned short port;
    int sockFD;
    struct sockaddr_in sa;
    struct sockaddr_in vtpSA;
    NSObject *optionalArg;
    NSObject<LoopbackSocketTunnelDelegate> *delegate;
    BOOL foundVTPIP;
}

@property NSObject *optionalArg; // @synthesize optionalArg;
- (int)serverLoopProc:(id)arg1;
- (void)shutdownSocket;
- (void)setVTPIP:(struct tagIPPORT *)arg1;
- (void)getVTPIPPort:(struct tagIPPORT *)arg1;
- (void)getIPPort:(struct tagIPPORT *)arg1;
- (int)sendPacketToVTP:(id)arg1;
- (id)initWithPort:(unsigned short)arg1 delegate:(id)arg2;

@end
