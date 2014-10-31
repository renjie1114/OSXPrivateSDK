/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

@interface AECommandParameter : NSObject
{
    BOOL _optional;
    unsigned int _code;
    NSString *_displayName;
    NSArray *_types;
}

+ (id)parameterWithCode:(unsigned int)arg1 types:(id)arg2 optional:(BOOL)arg3 displayName:(id)arg4;
@property BOOL optional; // @synthesize optional=_optional;
@property unsigned int code; // @synthesize code=_code;
@property(retain) NSArray *types; // @synthesize types=_types;
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (id)initWithCode:(unsigned int)arg1 types:(id)arg2 optional:(BOOL)arg3 displayName:(id)arg4;

@end
