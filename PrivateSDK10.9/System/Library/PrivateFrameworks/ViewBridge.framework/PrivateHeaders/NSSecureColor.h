//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSColor;

@interface NSSecureColor : NSObject <NSSecureCoding>
{
    NSColor *_color;
}

+ (id)secureColorWithColor:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)color;
- (void)dealloc;
- (id)initWithColor:(id)arg1;

@end
