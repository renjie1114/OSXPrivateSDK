/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface CoreDAVItemParserMapping : NSObject
{
    NSString *_nameSpace;
    NSString *_name;
    Class _parseClass;
}

@property(nonatomic) Class parseClass; // @synthesize parseClass=_parseClass;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *nameSpace; // @synthesize nameSpace=_nameSpace;
- (id)description;
- (void)dealloc;
- (id)initWithNameSpace:(id)arg1 name:(id)arg2 parseClass:(Class)arg3;

@end
