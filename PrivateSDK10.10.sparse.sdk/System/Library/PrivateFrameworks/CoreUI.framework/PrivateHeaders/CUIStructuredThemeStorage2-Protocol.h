/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol CUIStructuredThemeStorage2
- (id)imagesWithName:(id)arg1;
- (id)allImageNames;
- (const struct _renditionkeytoken *)renditionKeyForName:(id)arg1;
- (BOOL)canGetRenditionWithKey:(const struct _renditionkeytoken *)arg1;

@optional
- (void)removeImageNamed:(id)arg1 withDescription:(id)arg2;
- (void)insertCGImage:(struct CGImage *)arg1 withName:(id)arg2 andDescription:(id)arg3;
@end
