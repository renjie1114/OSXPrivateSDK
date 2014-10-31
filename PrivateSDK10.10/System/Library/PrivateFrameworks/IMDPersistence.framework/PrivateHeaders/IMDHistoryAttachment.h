/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSString;

@interface IMDHistoryAttachment : NSObject
{
    NSString *_path;
    NSString *_filename;
    NSData *_data;
    NSString *_guid;
    NSString *_UTIType;
    NSString *_mimeType;
    long long _transferState;
    double _dateCreated;
}

@property long long transferState; // @synthesize transferState=_transferState;
@property(retain) NSString *UTIType; // @synthesize UTIType=_UTIType;
@property(retain) NSData *data; // @synthesize data=_data;
@property(retain) NSString *filename; // @synthesize filename=_filename;
@property(retain) NSString *path; // @synthesize path=_path;
@property double dateCreated; // @synthesize dateCreated=_dateCreated;
@property(retain) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(retain) NSString *guid; // @synthesize guid=_guid;
- (id)description;
- (void)dealloc;
- (id)initWithAttributeDictionary:(id)arg1;

@end
