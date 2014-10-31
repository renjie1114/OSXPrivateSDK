/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSObject<OS_xpc_object>, NSString;

@interface APMessage : NSObject
{
    NSDictionary *_messageData;
    NSObject<OS_xpc_object> *_xpcMessage;
}

+ (id)stringForMessageType:(int)arg1;
+ (id)stringForResult:(int)arg1;
+ (id)messageWithXPCMessage:(id)arg1;
+ (id)messageWithType:(int)arg1 andData:(id)arg2;
@property(retain) NSObject<OS_xpc_object> *xpcMessage; // @synthesize xpcMessage=_xpcMessage;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
@property unsigned int transactionID;
- (void)updateMessageDataWithEntriesFromDictionary:(id)arg1;
@property(retain) NSDictionary *messageData; // @synthesize messageData=_messageData;
- (void)setMessageDataInternal:(id)arg1;
@property(readonly) NSString *messageTypeString;
@property int messageType;
- (int)resultCode;
- (id)sendToHelperAndReturnResponse;
- (id)sendWithReplyOnConnectionSync:(id)arg1 replyQueue:(id)arg2 error:(id *)arg3;
- (void)sendWithReplyOnConnection:(id)arg1 replyQueue:(id)arg2 replyHandler:(id)arg3;
- (void)sendOnConnection:(id)arg1;
- (id)replyWithError:(id)arg1;
- (id)replyWithErrorCode:(long long)arg1 andFormat:(id)arg2;
- (id)replyWithErrorCode:(long long)arg1 andFailureReason:(id)arg2;
- (id)replyWithSuccess;
- (id)replyWithData:(id)arg1;
- (id)initWithXPCMessage:(id)arg1;
- (id)initWithType:(int)arg1 andData:(id)arg2;
- (id)init;

@end
