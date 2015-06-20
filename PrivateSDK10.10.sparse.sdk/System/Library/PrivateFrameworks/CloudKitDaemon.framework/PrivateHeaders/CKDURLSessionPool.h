/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"
#import "NSURLSessionTaskDelegatePrivate-Protocol.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

// Not exported
@interface CKDURLSessionPool : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegatePrivate, NSURLSessionDataDelegate>
{
    NSMutableDictionary *_delegateByTaskDescription;
    NSMutableDictionary *_sessionByIdentifier;
    NSMutableDictionary *_ephemeralSessionByTaskDescription;
    NSMutableDictionary *_sessionConfigurationReferenceByName;
    NSMutableDictionary *_sessionConfigurationReferenceByIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedURLSessionPool;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(BOOL)arg3;
- (void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(id)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id)arg5;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)_performAsyncOnDelegateOfSession:(id)arg1 task:(id)arg2 fromSelector:(SEL)arg3 block:(id)arg4;
- (void)invalidateDataTask:(id)arg1;
- (id)dataTaskWithTaskDescription:(id)arg1 configuration:(id)arg2 request:(id)arg3 delegate:(id)arg4;
- (id)_URLSessionWithConfiguration:(id)arg1 forDelegate:(id)arg2;
- (void)checkinSessionConfiguration:(id)arg1;
- (void)setSessionConfiguration:(id)arg1 forName:(id)arg2;
- (id)checkoutSessionConfigurationWithName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
