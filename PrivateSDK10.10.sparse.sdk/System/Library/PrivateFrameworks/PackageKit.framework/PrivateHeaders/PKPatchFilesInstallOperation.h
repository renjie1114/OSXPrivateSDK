/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PackageKit/PKInstallOperation.h>

@class PKPackageSpecifier;

@interface PKPatchFilesInstallOperation : PKInstallOperation
{
    PKPackageSpecifier *_currentPackageSpecifier;
    struct CompressionQueueContext_s *_compressionQueue;
    BOOL _useAFSCByDefault;
}

- (void)main;
- (BOOL)applyPatchesForPackageSpecifier:(id)arg1 error:(id *)arg2;
- (BOOL)patchFileAtSubpath:(id)arg1 inComponent:(id)arg2 atSandboxPrefix:(id)arg3 onDiskPrefix:(id)arg4 withRequirements:(id)arg5 error:(id *)arg6;
- (BOOL)shouldPatchFileAtSubpath:(id)arg1 inComponent:(id)arg2;
- (void)finishCompressionQueue;
- (void)queueSandboxFileForCompression:(id)arg1;
- (BOOL)isBackwardsIncompatibleCompressionEnabledForCurrentPackage;
- (BOOL)isCompressionEnabledForCurrentPackage;
- (void)createCompressionQueue;
- (id)currentPackageSpecifier;
- (int)installState;

@end

