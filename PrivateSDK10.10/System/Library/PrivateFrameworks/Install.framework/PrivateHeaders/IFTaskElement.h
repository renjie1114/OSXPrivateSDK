/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Install/IFInstallQueueElement.h>

#import "IFTaskProgress-Protocol.h"

@class IFPackageController, NSLock, NSString, NSTask;

@interface IFTaskElement : IFInstallQueueElement <IFTaskProgress>
{
    NSTask *_myTask;
    BOOL _taskIsRunning;
    int _taskStatus;
    int _installKey;
    NSLock *_callbackLock;
    BOOL _writingFiles;
    id _stateDelegate;
    IFPackageController *_pkgController;
    NSString *_pkgTitle;
}

- (oneway void)noteMessage:(in bycopy id)arg1 percentCompleted:(in float)arg2;
- (void)taskTerminatedWithStatus:(int)arg1;
- (oneway void)noteFile:(bycopy id)arg1 kilobytesCompleted:(unsigned int)arg2;
- (int)taskStatus;
- (void)setTaskEnvironment;
- (long long)run;
- (void)setPackageController:(id)arg1;
- (void)setStateDelegate:(id)arg1;
- (void)setTask:(id)arg1;
- (void)dealloc;
- (id)init;

@end
