/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PerformanceAnalysis/PAGenealogyTimestampedMessage.h>

#import "PASerializable-Protocol.h"

@class NSString, NSUUID;

@interface PAGenealogyTraceMessage : PAGenealogyTimestampedMessage <PASerializable>
{
    unsigned long long _traceId;
    NSUUID *_binaryUuid;
    unsigned int _binaryOffset;
    void *_buffer;
    unsigned long long _bufferLength;
    NSString *_message;
}

+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void *)arg1;
+ (id)classDictionaryKey;
@property(readonly) unsigned int binaryOffset; // @synthesize binaryOffset=_binaryOffset;
@property(readonly) NSUUID *binaryUuid; // @synthesize binaryUuid=_binaryUuid;
- (void)dealloc;
- (id)message;
- (id)initWithId:(unsigned long long)arg1 andOffset:(unsigned int)arg2 intoBinaryWithUUID:(id)arg3 withBuffer:(const void *)arg4 ofLength:(unsigned long long)arg5 atMachTime:(double)arg6 withActivityId:(unsigned long long)arg7;
- (void)populateReferencesUsingBufferPosition:(const void *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (id)initWithSerializedGenealogyTraceMessage:(const CDStruct_727c8412 *)arg1;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (BOOL)addSelfToBufferAtPosition:(void *)arg1 withCompletedSerializationDictionary:(id)arg2;
- (unsigned long long)sizeInBytesForSerializedVersion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
