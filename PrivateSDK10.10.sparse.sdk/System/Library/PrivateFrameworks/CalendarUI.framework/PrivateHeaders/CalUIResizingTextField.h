/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTextField.h"

@class NSDictionary;

@interface CalUIResizingTextField : NSTextField
{
    BOOL _resizingEnabled;
    BOOL _automaticLinkDetection;
    BOOL _alwaysTreatAsLink;
    BOOL _hasEverLayedOutWithContent;
    long long _maxLines;
    NSDictionary *_textAttributes;
    double _lineHeight;
}

@property BOOL hasEverLayedOutWithContent; // @synthesize hasEverLayedOutWithContent=_hasEverLayedOutWithContent;
@property(nonatomic) BOOL alwaysTreatAsLink; // @synthesize alwaysTreatAsLink=_alwaysTreatAsLink;
@property(nonatomic) BOOL automaticLinkDetection; // @synthesize automaticLinkDetection=_automaticLinkDetection;
@property double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(retain) NSDictionary *textAttributes; // @synthesize textAttributes=_textAttributes;
@property BOOL resizingEnabled; // @synthesize resizingEnabled=_resizingEnabled;
@property(nonatomic) long long maxLines; // @synthesize maxLines=_maxLines;
- (void).cxx_destruct;
- (void)updateStringValue:(id)arg1;
- (void)setAttributedStringValueWithString:(id)arg1 andURLString:(id)arg2;
- (void)setStringValue:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (void)textDidChange:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)updatePreferredMaxLayoutWidth:(id)arg1;
- (void)enableEntireFieldTreatedAsLink;
- (void)enableAutomaticLinkDetection;
- (void)_configureForLinks;
- (void)configureText;
- (void)dealloc;
- (void)layout;
- (id)initWithResizeEnabled:(BOOL)arg1;
- (id)init;

@end

