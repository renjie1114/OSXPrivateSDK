//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Notes/NFFolder.h>

@class NFAccount;

@interface NFTrashFolder : NFFolder
{
}

- (void)emptyContents;
- (BOOL)validateParent:(inout id *)arg1 error:(out id *)arg2;
- (void)awakeFromInsert;

// Remaining properties
@property(retain, nonatomic) NFAccount *trashAccount; // @dynamic trashAccount;

@end
