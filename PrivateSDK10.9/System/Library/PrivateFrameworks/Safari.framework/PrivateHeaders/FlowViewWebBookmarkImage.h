//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WebBookmark;

__attribute__((visibility("hidden")))
@interface FlowViewWebBookmarkImage : NSObject
{
    WebBookmark *_collection;
    id _bookmarkItem;
}

- (id)imageURLString;
- (id)imageTitle;
- (struct CGImage *)cgImage;
- (void)dealloc;
- (id)initWithBookmarkCollection:(id)arg1 bookmarkItem:(id)arg2;

@end
