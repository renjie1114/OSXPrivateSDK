/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface CertificateRevocationContext : NSObject
{
    struct RefPtr<Safari::Certificate> _certificate;
    struct RefPtr<Safari::Certificate> _intermediateCertificate;
    double _verifyTime;
    id _completionHandler;
}

@property(readonly, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) double verifyTime; // @synthesize verifyTime=_verifyTime;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct Certificate *intermediateCertificate;
@property(readonly, nonatomic) struct Certificate *certificate;
- (id)initWithCertificate:(PassRefPtr_61025e73)arg1 intermediateCertificate:(PassRefPtr_61025e73)arg2 verifyTime:(double)arg3 completionHandler:(id)arg4;

@end
