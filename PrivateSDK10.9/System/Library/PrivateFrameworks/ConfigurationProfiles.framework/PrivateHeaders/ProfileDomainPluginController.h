//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CPProfile, NSArray, NSString;

@interface ProfileDomainPluginController : NSObject
{
    NSString *_userGUID;
    CPProfile *_profile;
    NSArray *_plugins;
}

+ (BOOL)pluginWillHandleTrustSettingsForPayload:(id)arg1 forProfile:(id)arg2;
+ (id)getDisplayDetailsForPayload:(id)arg1 forProfile:(id)arg2;
@property(retain) NSArray *plugins; // @synthesize plugins=_plugins;
@property(retain) CPProfile *profile; // @synthesize profile=_profile;
@property(retain) NSString *userGUID; // @synthesize userGUID=_userGUID;
- (void)dealloc;
- (id)initWithProfile:(id)arg1 forUserGUID:(id)arg2;
- (BOOL)renewPayload:(id)arg1 error:(id *)arg2;
- (id)determineAdditionalWarningsForPhase:(id)arg1 intoResults:(id *)arg2;
- (id)determineMissingInfo:(id *)arg1;
- (id)userLoginForProfileWithPlugin;
- (id)removeProfileWithPlugin:(id)arg1;
- (id)removeProfilePayloadsWithPlugin:(id)arg1 outActions:(id)arg2;
- (id)installProfileWithPlugin:(id *)arg1 replacingProfile:(id)arg2 outActions:(id)arg3;
- (id)removeCertificates:(id)arg1 forUserGUID:(id)arg2;
- (id)installCertificates:(id *)arg1 forUserGUID:(id)arg2;
- (id)validateProfileWithPlugin:(unsigned int *)arg1;
- (int)importProfileCerts:(id)arg1 toKeychain:(struct OpaqueSecKeychainRef *)arg2 accessFlags:(int)arg3 outPersistentInfo:(id)arg4;
- (id)removeCertsFromKeychain:(id)arg1 forDomain:(int)arg2 allowInteraction:(BOOL)arg3;
- (id)importCertsToKeychain:(id)arg1 forDomain:(int)arg2 allowInteraction:(BOOL)arg3 accessFlags:(int)arg4 outPersistentInfo:(id *)arg5;
- (BOOL)profileHasCerts:(id)arg1;

@end
