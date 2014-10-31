//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AssistiveControlSupport/ACSHPanelElementView.h>

@class ACSHMouseSelectionView, ACSHPanelElementHighlightView, ACSHResizeHandlesView, NSArray, NSMutableArray, NSSet;

@interface ACSHPanelView : ACSHPanelElementView
{
    struct CGSize _defaultSpace;
    struct CGRect _destinationFrame;
    ACSHPanelElementView *_mouseDownView;
    ACSHPanelElementView *_mouseDragView;
    ACSHPanelElementView *_resizingView;
    ACSHPanelElementHighlightView *_panelElementHighlightView;
    NSMutableArray *_viewsMutatedDuringUndo;
    NSArray *_movedViews;
    struct CGRect _selfOriginalFrame;
    struct CGRect _mouseDownViewOriginalFrame;
    struct CGPoint _dragRemainder;
    struct CGPoint _lastMouseDownPoint;
    struct CGPoint _lastMouseDragPoint;
    struct {
        char didResize;
        char didMove;
        char didChangeSelection;
        char shiftKeyDownAtStart;
        char commandKeyDownAtStart;
    } _mouseEventState;
    NSSet *_selectedPanelElementViewsAtDragStart;
    ACSHResizeHandlesView *_resizeView;
    ACSHMouseSelectionView *_mouseSelectionView;
    int _resizeType;
    BOOL _tooManyElementForTrackingRects;
    BOOL _trackingSuspended;
    BOOL _allowHitTestThrough;
    id <ACSHPanelViewDelegate> _delegate;
    unsigned int _zoomLevel;
    NSArray *_elementsForPreviewingScanOrder;
    unsigned long long _previewScanOrderIndex;
    unsigned long long _localUndoGroupingLevel;
    BOOL _showGroupingPreview;
    BOOL _processingDidUndo;
    ACSHPanelElementView *_focusedView;
    double _zoomScaleFactor;
    unsigned long long _suppressFrameKVOCounter;
}

@property(nonatomic) ACSHPanelElementView *mouseDragView; // @synthesize mouseDragView=_mouseDragView;
@property(nonatomic) unsigned long long suppressFrameKVOCounter; // @synthesize suppressFrameKVOCounter=_suppressFrameKVOCounter;
@property(nonatomic) BOOL processingDidUndo; // @synthesize processingDidUndo=_processingDidUndo;
@property(nonatomic) double zoomScaleFactor; // @synthesize zoomScaleFactor=_zoomScaleFactor;
@property(nonatomic) BOOL showGroupingPreview; // @synthesize showGroupingPreview=_showGroupingPreview;
@property(readonly, nonatomic) struct CGRect destinationFrame; // @synthesize destinationFrame=_destinationFrame;
@property(nonatomic) ACSHPanelElementView *focusedView; // @synthesize focusedView=_focusedView;
@property(nonatomic) id <ACSHPanelViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (void)panelHighlightItemAtIndexPath:(id)arg1 isTrailingExtra:(BOOL)arg2;
- (id)_panelElementHighlightView;
- (void)setFrame:(struct CGRect)arg1;
- (void)setFrameNoNotify:(struct CGRect)arg1;
- (void)dealloc;
- (void)updateSizeAndPositionOfPanelElementViews;
- (void)highlightItemAtIndexPath:(id)arg1 isTrailingExtra:(BOOL)arg2;
- (BOOL)wantsUpdateLayer;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)initView;
- (id)_focusChain;
- (void)stopPreviewingScanOfFocusedView;
- (double)previewScanInterval;
- (void)previewScanOrderTick;
- (void)previewScanOfFocusedView;
- (BOOL)canPreviewScanOfFocusedView;
- (void)updateSizeAndPositionOfDescendents;
- (void)setPanel:(id)arg1;
- (id)panel;
- (void)willRemovePanelElementView:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)_deleteSelection;
- (void)moveDown:(id)arg1;
- (void)moveDownAndModifySelection:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveUpAndModifySelection:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveRightAndModifySelection:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveLeftAndModifySelection:(id)arg1;
- (void)keyDown:(id)arg1;
- (struct CGRect)_mouseSelectionRect;
- (id)_panelElementsInMouseSelectionRect;
- (void)_makePanelElementViewFrontmost:(id)arg1;
- (id)_buttonViewForPoint:(struct CGPoint)arg1;
- (void)leaveSelectedGroup:(id)arg1;
- (void)enterSelectedGroup:(id)arg1;
- (BOOL)canLeaveSelectedGroup;
- (BOOL)canEnterSelectedGroup;
- (void)ungroupSelection:(id)arg1;
- (void)groupSelection:(id)arg1;
- (BOOL)canUngroupSelection;
- (BOOL)canGroupSelection;
- (void)alignMiddle:(id)arg1;
- (void)alignBottom:(id)arg1;
- (void)alignTop:(id)arg1;
- (void)alignCenter:(id)arg1;
- (void)alignRight:(id)arg1;
- (void)alignLeft:(id)arg1;
- (struct CGRect)boundingBoxForPanelElements:(id)arg1;
- (BOOL)canAlignSelection;
- (void)equalizeRect:(id)arg1;
- (void)equalizeHeight:(id)arg1;
- (void)equalizeWidth:(id)arg1;
- (void)_equalizeWidth:(BOOL)arg1 height:(BOOL)arg2;
- (BOOL)canEqualizeSelection;
- (void)_didUndo:(id)arg1;
- (void)_willUndo:(id)arg1;
- (void)_updateTrackingAreas;
- (void)addMutatedViewDuringUndo:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseUpNonEditor:(id)arg1;
- (void)mouseUpEditor:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDraggedNonEditor:(id)arg1;
- (void)mouseDraggedEditor:(id)arg1;
- (void)_movePanelElementViews:(id)arg1 byDelta:(struct CGPoint)arg2;
- (void)mouseDown:(id)arg1;
- (void)mouseDownNonEditor:(id)arg1;
- (void)mouseDownEditor:(id)arg1;
- (void)setSelectView:(id)arg1;
- (id)selectedViews;
- (id)hitTest:(struct CGPoint)arg1;
- (void)_updateStateOfMouseTrackingRectsBasedOnSelectionCount;
- (void)resumeTracking;
- (void)suspendTracking;
- (BOOL)isTrackingSuspended;
- (void)setCanShowResizeHandles:(BOOL)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)paste:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (id)_plistForCopyOrCut;
- (id)_arrayForCopyOrCutForResourceIDs:(id)arg1;
- (void)selectAll:(id)arg1;
- (double)scaleFactorToDrawAt;
- (void)_setZoomLevel:(unsigned int)arg1;
- (void)zoomOut:(id)arg1;
- (void)zoomIn:(id)arg1;
- (void)zoomActual:(id)arg1;
- (BOOL)canZoomActual;
- (BOOL)canZoomOut;
- (BOOL)canZoomIn;
- (BOOL)canAddPanelButton;
- (void)updateUIForSelection;
- (BOOL)isFlipped;

@end
