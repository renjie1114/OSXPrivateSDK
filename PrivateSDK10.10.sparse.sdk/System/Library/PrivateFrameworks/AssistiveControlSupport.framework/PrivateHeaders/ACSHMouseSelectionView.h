/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AssistiveControlSupport/ACSHView.h>

@interface ACSHMouseSelectionView : ACSHView
{
    struct CGPoint _selectionStartPoint;
    struct CGPoint _selectionEndPoint;
}

@property(nonatomic) struct CGPoint selectionEndPoint; // @synthesize selectionEndPoint=_selectionEndPoint;
@property(nonatomic) struct CGPoint selectionStartPoint; // @synthesize selectionStartPoint=_selectionStartPoint;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end

