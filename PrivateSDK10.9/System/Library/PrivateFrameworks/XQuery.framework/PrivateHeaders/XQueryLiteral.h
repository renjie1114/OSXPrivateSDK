//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XQuery/XQueryExpr.h>

#import "XQueryExprBehavior.h"

__attribute__((visibility("hidden")))
@interface XQueryLiteral : XQueryExpr <XQueryExprBehavior>
{
    id _value;
}

+ (id)stringLiteralWithString:(id)arg1;
+ (id)integerLiteralWithString:(id)arg1;
+ (id)doubleLiteralWithString:(id)arg1;
+ (id)decimalLiteralWithString:(id)arg1;
+ (id)literalWithValue:(id)arg1;
- (id)description;
- (id)evaluateWithContext:(id)arg1;
- (void)bindInfoForProlog:(id)arg1;
- (id)literalValue;
- (id)initWithValue:(id)arg1;
- (void)finalize;
- (void)dealloc;

@end
