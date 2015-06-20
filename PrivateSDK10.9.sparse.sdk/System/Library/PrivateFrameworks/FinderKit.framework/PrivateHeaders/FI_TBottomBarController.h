//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSMenuDelegate.h"
#import "NSPathControlDelegate.h"
#import "TNodeObserverProtocol.h"

@class FI_TBrowserContainerController, FI_TPathControl;

__attribute__((visibility("hidden")))
@interface FI_TBottomBarController : NSViewController <NSPathControlDelegate, TNodeObserverProtocol, NSMenuDelegate>
{
    FI_TPathControl *_pathControl;
    struct TNodeObserverCocoaBridge *_nodeObserver;
    FI_TBrowserContainerController *_containerController;
    struct TFENodeVector _commonPathVector;
    struct TFENodeVector _observedSelection;
}

+ (double)defaultBottombarHeight;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)nodeDeleted:(const struct TFENode *)arg1 fromObservedNode:(const struct TFENode *)arg2;
- (void)nodeChanged:(const struct TFENode *)arg1 inObservedNode:(const struct TFENode *)arg2 property:(unsigned int)arg3;
- (void)pathControlDoubleClick:(id)arg1;
- (const struct TFENode *)nodeInPathBar:(id)arg1 forLocation:(struct CGPoint)arg2;
- (const struct TFENode *)nodeForCell:(id)arg1;
- (void)updateSelection:(const struct TFENodeVector *)arg1 forceUpdate:(BOOL)arg2;
- (void)setTarget:(const struct TFENode *)arg1 selection:(const struct TFENodeVector *)arg2;
- (BOOL)commonPathForNode:(const struct TFENode *)arg1 andSelection:(const struct TFENodeVector *)arg2;
- (BOOL)preflightSelection:(const struct TFENodeVector *)arg1 commonParent:(struct TFENode *)arg2;
- (void)updatePathComponents;
- (void)setInBrowseMode:(BOOL)arg1;
- (void)windowDidDeactivate;
- (void)windowDidActivate;
- (void)makeActive:(BOOL)arg1;
- (struct TNodeBrowser *)nodeBrowser;
- (void)aboutToTearDown:(id)arg1;
- (void)clearCommonPathNodes;
- (void)clearObservedSelection;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 containerController:(id)arg2;

@end
