/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class FI_TTextField<TTextWithTitleFieldImplProtocol>, FI_TTitleField;

// Not exported
@interface FI_TTextWithTitleFieldImpl : NSObject
{
    FI_TTextField<TTextWithTitleFieldImplProtocol> *_textFld;
    FI_TTitleField *_titleFld;
}

@property FI_TTitleField *titleFld; // @synthesize titleFld=_titleFld;
@property FI_TTextField<TTextWithTitleFieldImplProtocol> *textFld; // @synthesize textFld=_textFld;
- (double)calcHeightToFit:(struct CGSize)arg1;

@end
