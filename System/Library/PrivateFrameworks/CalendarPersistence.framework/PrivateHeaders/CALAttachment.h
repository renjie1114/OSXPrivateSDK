//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CALPropertyValue.h>

@class NSManagedObjectID, NSURL;

@interface CALAttachment : CALPropertyValue
{
    NSManagedObjectID *_managedObjectID;
    NSURL *_cachedURL;
}

+ (id)attachmentWithURL:(id)arg1;
+ (id)attachmentFromManagedObject:(id)arg1;
- (id)previewItemURL;
- (id)icon;
- (id)filenameParameter;
- (void)setFilename:(id)arg1;
- (id)filename;
- (void)setAutoArchived:(BOOL)arg1;
- (BOOL)isAutoArchived;
- (void)setAttachmentId:(id)arg1;
- (id)attachmentId;
- (void)setContentType:(id)arg1;
- (id)contentType;
- (void)setData:(id)arg1;
- (id)data;
- (void)setCachedURL:(id)arg1;
- (id)cachedURL;
- (void)setURL:(id)arg1;
- (id)url;
- (void)setManagedObjectID:(id)arg1;
- (id)managedObjectID;
- (void)dealloc;
- (id)description;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;

@end
