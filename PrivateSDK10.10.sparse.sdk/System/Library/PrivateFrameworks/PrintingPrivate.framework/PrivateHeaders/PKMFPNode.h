/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PrintingPrivate/PKNode.h>

@class PKScannerDevice;

@interface PKMFPNode : PKNode
{
    PKScannerDevice *scanner;
}

@property(retain) PKScannerDevice *scanner; // @dynamic scanner;
- (id)matchingScannerKey;
- (BOOL)sameDevice:(id)arg1;
- (id)iconPath;
- (id)description;
- (void)dealloc;

@end
