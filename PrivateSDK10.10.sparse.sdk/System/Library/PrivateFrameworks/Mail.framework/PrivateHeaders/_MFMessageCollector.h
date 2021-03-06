/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MFMessageConsumer-Protocol.h"

@class NSMutableArray, NSString;

@interface _MFMessageCollector : NSObject <MFMessageConsumer>
{
    NSMutableArray *_messages;
    BOOL _didCancel;
}

@property(nonatomic) BOOL didCancel; // @synthesize didCancel=_didCancel;
- (void).cxx_destruct;
- (void)finishedSendingMessages;
@property(readonly) BOOL shouldCancel;
- (void)newMessagesAvailable:(id)arg1 conversationMembers:(id)arg2;
- (void)newMessagesAvailable:(id)arg1 conversationsMembersByConversationID:(id)arg2 options:(id)arg3;
- (void)newMessagesAvailable:(id)arg1 conversationsMembersByConversationID:(id)arg2;
- (id)messages;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

