/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface PRSFeedback : NSObject <NSCopying, NSCoding, NSSecureCoding>
{
    NSString *_input;
    long long _timestamp;
}

+ (id)JSONDictionaryForFeedbackArray:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) NSString *input; // @synthesize input=_input;
- (void).cxx_destruct;
- (id)description;
- (id)plist;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)validate;
- (id)initWithFeedback:(id)arg1;
@property(readonly, nonatomic) NSString *type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInput:(id)arg1 timestamp:(long long)arg2;
- (id)init;

@end

