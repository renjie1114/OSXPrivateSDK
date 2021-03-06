/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSNumber, NSString;

@interface SAMovieV2ReviewListSnippet : SAUISnippet
{
}

+ (id)reviewListSnippetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)reviewListSnippet;
@property(copy, nonatomic) NSString *reviewsProvider;
@property(copy, nonatomic) NSArray *reviewListCells;
@property(copy, nonatomic) NSNumber *reviewCount;
@property(nonatomic) double qualityRating;
@property(copy, nonatomic) NSString *movieName;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

