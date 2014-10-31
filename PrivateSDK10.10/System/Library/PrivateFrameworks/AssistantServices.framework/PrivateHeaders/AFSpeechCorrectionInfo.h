/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@interface AFSpeechCorrectionInfo : NSObject <NSSecureCoding>
{
    long long _alternativeSelectionCount;
    long long _characterModificationCount;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long characterModificationCount; // @synthesize characterModificationCount=_characterModificationCount;
@property(nonatomic) long long alternativeSelectionCount; // @synthesize alternativeSelectionCount=_alternativeSelectionCount;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
