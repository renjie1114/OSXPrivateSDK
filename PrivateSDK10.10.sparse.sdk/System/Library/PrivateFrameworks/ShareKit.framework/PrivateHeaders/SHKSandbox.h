/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface SHKSandbox : NSObject
{
}

+ (id)safeUnarchiveObjectWithData:(id)arg1;
+ (id)safeClassNamesForArchiving;
+ (id)filteredItemsFromItems:(id)arg1 processWithPID:(int)arg2;
+ (id)filteredItemsFromSingleItem:(id)arg1 processWithPID:(int)arg2;
+ (id)filteredItemsFromAttributedString:(id)arg1 processWithPID:(int)arg2 textView:(id)arg3;
+ (id)filteredItemsFromAttributedString:(id)arg1 processWithPID:(int)arg2;
+ (BOOL)canAccessURL:(id)arg1 processWithPID:(int)arg2;

@end

