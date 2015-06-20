/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class NSMutableArray;

// Not exported
@interface CKDPUserPrivacySettingsBatchLookupResponse : PBCodable <NSCopying>
{
    NSMutableArray *_containerPrivacySettings;
}

@property(retain, nonatomic) NSMutableArray *containerPrivacySettings; // @synthesize containerPrivacySettings=_containerPrivacySettings;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)containerPrivacySettingsAtIndex:(unsigned long long)arg1;
- (unsigned long long)containerPrivacySettingsCount;
- (void)addContainerPrivacySettings:(id)arg1;
- (void)clearContainerPrivacySettings;

@end
