/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface GEOPDEntity : PBCodable <NSCopying>
{
    NSMutableArray *_altFaxs;
    NSMutableArray *_altTelephones;
    NSMutableArray *_altUrls;
    NSString *_fax;
    NSMutableArray *_localizedCategorys;
    NSMutableArray *_names;
    NSMutableArray *_spokenNames;
    NSString *_telephone;
    int _type;
    NSString *_url;
    BOOL _isDisputed;
    BOOL _isPermanentlyClosed;
    struct {
        unsigned int type:1;
        unsigned int isDisputed:1;
        unsigned int isPermanentlyClosed:1;
    } _has;
}

+ (id)entityForPlaceData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *localizedCategorys; // @synthesize localizedCategorys=_localizedCategorys;
@property(retain, nonatomic) NSMutableArray *spokenNames; // @synthesize spokenNames=_spokenNames;
@property(retain, nonatomic) NSMutableArray *names; // @synthesize names=_names;
@property(nonatomic) BOOL isDisputed; // @synthesize isDisputed=_isDisputed;
@property(nonatomic) BOOL isPermanentlyClosed; // @synthesize isPermanentlyClosed=_isPermanentlyClosed;
@property(retain, nonatomic) NSMutableArray *altUrls; // @synthesize altUrls=_altUrls;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSMutableArray *altFaxs; // @synthesize altFaxs=_altFaxs;
@property(retain, nonatomic) NSString *fax; // @synthesize fax=_fax;
@property(retain, nonatomic) NSMutableArray *altTelephones; // @synthesize altTelephones=_altTelephones;
@property(retain, nonatomic) NSString *telephone; // @synthesize telephone=_telephone;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)localizedCategoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedCategorysCount;
- (void)addLocalizedCategory:(id)arg1;
- (void)clearLocalizedCategorys;
- (id)spokenNameAtIndex:(unsigned long long)arg1;
- (unsigned long long)spokenNamesCount;
- (void)addSpokenName:(id)arg1;
- (void)clearSpokenNames;
- (id)nameAtIndex:(unsigned long long)arg1;
- (unsigned long long)namesCount;
- (void)addName:(id)arg1;
- (void)clearNames;
@property(nonatomic) BOOL hasIsDisputed;
@property(nonatomic) BOOL hasIsPermanentlyClosed;
- (id)altUrlAtIndex:(unsigned long long)arg1;
- (unsigned long long)altUrlsCount;
- (void)addAltUrl:(id)arg1;
- (void)clearAltUrls;
@property(readonly, nonatomic) BOOL hasUrl;
- (id)altFaxAtIndex:(unsigned long long)arg1;
- (unsigned long long)altFaxsCount;
- (void)addAltFax:(id)arg1;
- (void)clearAltFaxs;
@property(readonly, nonatomic) BOOL hasFax;
- (id)altTelephoneAtIndex:(unsigned long long)arg1;
- (unsigned long long)altTelephonesCount;
- (void)addAltTelephone:(id)arg1;
- (void)clearAltTelephones;
@property(readonly, nonatomic) BOOL hasTelephone;
@property(nonatomic) BOOL hasType;
- (void)dealloc;
- (id)bestLocalizedName;

@end

