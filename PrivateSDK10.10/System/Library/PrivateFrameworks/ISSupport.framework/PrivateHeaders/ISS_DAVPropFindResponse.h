/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ISSupport/ISS_DAVMultiStatusResponse.h>

@class NSMutableDictionary;

@interface ISS_DAVPropFindResponse : ISS_DAVMultiStatusResponse
{
    NSMutableDictionary *categorizedProperties;
}

- (BOOL)handleResponseSubnode:(id)arg1;
- (int)statusCodeForKey:(id)arg1;
- (id)propertyForKey:(id)arg1;
- (id)properties;
- (id)propertiesWithStatusCode:(int)arg1;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)ressourceType;
- (BOOL)isFolder;
- (BOOL)isCollection;
- (id)getDisplayName;
- (id)creationDate;
- (long long)getContentLength;
- (id)_getPropertyForKey:(id)arg1;

@end
