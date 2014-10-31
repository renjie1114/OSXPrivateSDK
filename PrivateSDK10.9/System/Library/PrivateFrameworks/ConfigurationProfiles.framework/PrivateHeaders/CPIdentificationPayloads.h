//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface CPIdentificationPayloads : NSObject
{
    NSMutableArray *_identifcationPayloads;
}

@property(retain) NSMutableArray *identifcationPayloads; // @synthesize identifcationPayloads=_identifcationPayloads;
- (void)dealloc;
- (id)init;
- (id)initWithProfile:(id)arg1;
- (BOOL)validateRequiredKeysInPayloadProfile:(id)arg1 forIDUUID:(id)arg2 validationDict:(id)arg3;
- (id)mergeIDPayload:(id)arg1 toPayload:(id)arg2 usingMappingDict:(id)arg3;
- (BOOL)isPasswordMethodSetToNone:(id)arg1;
- (id)keyValueForIDPayloadType:(id)arg1 forIDPayloadDict:(id)arg2;
- (id)keyValueForIDPayloadType:(id)arg1 forIDPayloadUUID:(id)arg2;
- (id)copyIDPayloadDictForPayload:(id)arg1;
- (BOOL)hasIDPayloads;

@end
