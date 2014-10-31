//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EWSExchangeServiceBinding, NSError, NSURLAuthenticationChallenge, NSURLProtectionSpace;

@protocol EWSExchangeServiceBindingDelegate <NSObject>
- (void)exchangeServiceBinding:(EWSExchangeServiceBinding *)arg1 didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (void)exchangeServiceBinding:(EWSExchangeServiceBinding *)arg1 didCancelAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;

@optional
- (BOOL)exchangeServiceBinding:(EWSExchangeServiceBinding *)arg1 canAuthenticateAgainstProtectionSpace:(NSURLProtectionSpace *)arg2;
- (void)exchangeServiceBinding:(EWSExchangeServiceBinding *)arg1 didReceiveCertificateError:(NSError *)arg2;
- (void)exchangeServiceBinding:(EWSExchangeServiceBinding *)arg1 didFailWithError:(NSError *)arg2;
- (void)exchangeServiceBinding:(EWSExchangeServiceBinding *)arg1 didFinishWithResponse:(id)arg2;
@end
