/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MailCore/_MCUserAlertRequest.h>

@class NSString;

@interface _MCInsecureAuthenticationRequest : _MCUserAlertRequest
{
    id <MCAccount> _account;
    NSString *_applicationName;
}

@property(copy) NSString *applicationName; // @synthesize applicationName=_applicationName;
@property(retain) id <MCAccount> account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)coalescingValue;

@end
