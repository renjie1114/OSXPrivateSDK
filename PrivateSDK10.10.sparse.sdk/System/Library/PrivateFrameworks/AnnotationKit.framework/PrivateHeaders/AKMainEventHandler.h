/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSResponder.h"

#import "AKFormFeatureDetectorDelegate-Protocol.h"

@class AKAnnotation, AKAnnotationEventHandler, AKController, AKPageController, NSEvent, NSString;

@interface AKMainEventHandler : NSResponder <AKFormFeatureDetectorDelegate>
{
    BOOL _mainEventHandlerIsInTrackingLoop;
    BOOL _shouldEatNextLeftMouseUp;
    BOOL _shouldEatNextRightMouseUp;
    BOOL _mainEventHandlerTrackingLoopIsForIntelligentSketch;
    BOOL _dragDidCopySelectedAnnotations;
    BOOL _undoManagerWasGroupingByEvent;
    AKAnnotationEventHandler *_annotationEventHandler;
    unsigned long long _currentModifierFlags;
    AKController *_controller;
    AKPageController *_dragPageController;
    NSEvent *_lastDragEvent;
    NSEvent *_lastLeftMouseDownEvent;
    AKAnnotation *_annotationToBeginEditingOnDragEnd;
    struct CGPoint _firstDragPoint;
    struct CGPoint _lastDragPoint;
    struct CGPoint _lastDragActualLocation;
    struct CGPoint _leftMouseDownPoint;
}

+ (id)newMainEventHandlerForCurrentPlatformWithController:(id)arg1;
@property __weak AKAnnotation *annotationToBeginEditingOnDragEnd; // @synthesize annotationToBeginEditingOnDragEnd=_annotationToBeginEditingOnDragEnd;
@property struct CGPoint leftMouseDownPoint; // @synthesize leftMouseDownPoint=_leftMouseDownPoint;
@property(retain) NSEvent *lastLeftMouseDownEvent; // @synthesize lastLeftMouseDownEvent=_lastLeftMouseDownEvent;
@property(retain) NSEvent *lastDragEvent; // @synthesize lastDragEvent=_lastDragEvent;
@property struct CGPoint lastDragActualLocation; // @synthesize lastDragActualLocation=_lastDragActualLocation;
@property struct CGPoint lastDragPoint; // @synthesize lastDragPoint=_lastDragPoint;
@property struct CGPoint firstDragPoint; // @synthesize firstDragPoint=_firstDragPoint;
@property(retain) AKPageController *dragPageController; // @synthesize dragPageController=_dragPageController;
@property BOOL undoManagerWasGroupingByEvent; // @synthesize undoManagerWasGroupingByEvent=_undoManagerWasGroupingByEvent;
@property BOOL dragDidCopySelectedAnnotations; // @synthesize dragDidCopySelectedAnnotations=_dragDidCopySelectedAnnotations;
@property BOOL mainEventHandlerTrackingLoopIsForIntelligentSketch; // @synthesize mainEventHandlerTrackingLoopIsForIntelligentSketch=_mainEventHandlerTrackingLoopIsForIntelligentSketch;
@property BOOL shouldEatNextRightMouseUp; // @synthesize shouldEatNextRightMouseUp=_shouldEatNextRightMouseUp;
@property BOOL shouldEatNextLeftMouseUp; // @synthesize shouldEatNextLeftMouseUp=_shouldEatNextLeftMouseUp;
@property __weak AKController *controller; // @synthesize controller=_controller;
@property unsigned long long currentModifierFlags; // @synthesize currentModifierFlags=_currentModifierFlags;
@property(retain) AKAnnotationEventHandler *annotationEventHandler; // @synthesize annotationEventHandler=_annotationEventHandler;
@property BOOL mainEventHandlerIsInTrackingLoop; // @synthesize mainEventHandlerIsInTrackingLoop=_mainEventHandlerIsInTrackingLoop;
- (void).cxx_destruct;
- (BOOL)_detectFormElementInCurrentPageControllerUnderPointInWindow:(struct CGPoint)arg1 withStartingPoint:(struct CGPoint)arg2;
- (void)_beginEditingIfTextAnnotation:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint)_alignedAnnotationDragPointForPoint:(struct CGPoint)arg1;
- (void)_updateSelectionWithAnnotation:(id)arg1 onPageController:(id)arg2;
- (BOOL)_didNotHandleEventSoDeselect;
- (void)_setCurrentPageBasedOnPageController:(id)arg1;
- (void)applyTranslationToAllSelectedAnnotations:(struct CGPoint)arg1;
- (BOOL)hitTestPointsOfInterestsAtPoint:(struct CGPoint)arg1 onPageController:(id)arg2 inAnnotations:(id)arg3 event:(id)arg4 touches:(id)arg5 cursorUpdateOnly:(BOOL)arg6;
- (id)topmostAnnotationForBorderAndInteriorHitTestAtPoints:(id)arg1 inAnnotations:(id)arg2 onPageController:(id)arg3 wasOnBorder:(char *)arg4 wasOnText:(char *)arg5;
- (id)annotationsPassingBoundingBoxHitTestsWithPoints:(id)arg1 onPageController:(id)arg2;
- (BOOL)continueDragEventTrackingLoopWithEvent:(id)arg1 withOptionalTouches:(id)arg2;
- (BOOL)enterDragEventTrackingLoopWithEvent:(id)arg1 withOptionalTouches:(id)arg2;
- (void)updateCropHandleVisibilityForEvent:(id)arg1;
- (void)updateCursorForEvent:(id)arg1;
- (BOOL)handleKeyboardEvent:(id)arg1;
- (BOOL)handleRightDownEvent:(id)arg1;
- (BOOL)handleDoubleDownEvent:(id)arg1 withOptionalTouches:(id)arg2;
- (BOOL)handleDownEvent:(id)arg1 withOptionalTouches:(id)arg2;
- (id)pointsFromEvent:(id)arg1 withOptionalTouches:(id)arg2 onPageController:(id *)arg3;
- (BOOL)mainHandleEvent:(id)arg1 withOptionalTouches:(id)arg2;
- (void)teardown;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

