//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CUIThemeSchema : NSObject
{
}

+ (id)schemaForPlatform:(long long)arg1;
+ (id)defaultSchema;
- (id)schemaEffectRenditionsForPartDefinition:(const CDStruct_26b2aa83 *)arg1;
- (unsigned long long)partDefinitionCountForEffectDefinition:(const CDStruct_b2911908 *)arg1;
- (unsigned long long)effectDefinitionCount;
- (const CDStruct_b2911908 *)effectDefinitionWithName:(id)arg1;
- (const CDStruct_b2911908 *)sortedEffectDefinitionAtIndex:(unsigned long long)arg1;
- (const CDStruct_b2911908 *)effectDefinitionAtIndex:(unsigned long long)arg1;
- (const CDStruct_c77fb927 *)categoryForElementDefinition:(const CDStruct_b2911908 *)arg1;
- (id)schemaRenditionsForPartDefinition:(const CDStruct_26b2aa83 *)arg1;
- (const CDStruct_26b2aa83 *)partDefinitionForWidgetName:(id)arg1;
- (id)widgetNameForPartDefinition:(const CDStruct_26b2aa83 *)arg1;
- (const CDStruct_26b2aa83 *)partDefinitionWithName:(id)arg1 forElementDefinition:(const CDStruct_b2911908 *)arg2;
- (const CDStruct_b2911908 *)elementDefinitionWithName:(id)arg1;
- (unsigned long long)dimensionDefinitionCountForPartDefinition:(const CDStruct_26b2aa83 *)arg1;
- (unsigned long long)partDefinitionCountForElementDefinition:(const CDStruct_b2911908 *)arg1;
- (const CDStruct_b2911908 *)sortedElementDefinitionAtIndex:(unsigned long long)arg1;
- (unsigned long long)elementDefinitionCount;
- (const CDStruct_b2911908 *)elementDefinitionAtIndex:(unsigned long long)arg1;
- (unsigned long long)elementCategoryCount;
- (const CDStruct_c77fb927 *)elementCategoryAtIndex:(unsigned long long)arg1;
- (long long)schemaVersion;

@end
