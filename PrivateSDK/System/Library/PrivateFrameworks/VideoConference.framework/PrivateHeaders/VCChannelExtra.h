//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VCChannelModel;

__attribute__((visibility("hidden")))
@interface VCChannelExtra : NSObject
{
    VCChannelModel *_model;
}

- (id)remoteIPPorts:(int)arg1;
- (void)sockets:(int *)arg1 size:(int)arg2;
- (void)prepareExtraConnectionWithRemoteConnectionData:(id)arg1 withLocalConnectionData:(id)arg2;
- (id)connectionDataWithOptions:(id)arg1 shouldFindExternalIP:(BOOL)arg2;
- (id)connectionDataWithOptions:(id)arg1;
- (void)closeHandle;
- (struct tagHANDLE *)currentHandle;
- (void)dealloc;
- (id)initWithHandle:(struct tagHANDLE *)arg1;
- (id)init;

@end
