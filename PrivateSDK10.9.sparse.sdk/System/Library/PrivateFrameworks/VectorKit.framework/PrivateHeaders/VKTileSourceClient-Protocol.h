//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, VKTile, VKTileKeyList, VKTileSource;

@protocol VKTileSourceClient <NSObject>
- (void)dirtyTilesFromTileSource:(VKTileSource *)arg1;
- (void)tileSource:(VKTileSource *)arg1 dirtyTilesWithinRect:(const CDStruct_d2b197d1 *)arg2 level:(long long)arg3;
- (void)didStopLoadingTilesWithError:(NSError *)arg1;
- (void)willStartLoadingTiles;
- (BOOL)tileSource:(VKTileSource *)arg1 keyIsNeeded:(const struct VKTileKey *)arg2;
- (void)invalidateTilesFromTileSource:(VKTileSource *)arg1;
- (void)tileSource:(VKTileSource *)arg1 invalidateTilesWithState:(unsigned long long)arg2;
- (void)tileSource:(VKTileSource *)arg1 invalidateKeys:(VKTileKeyList *)arg2;
- (void)tileSource:(VKTileSource *)arg1 invalidateKey:(const struct VKTileKey *)arg2;
- (void)tileSource:(VKTileSource *)arg1 didFailToLoadTileForKey:(const struct VKTileKey *)arg2 error:(NSError *)arg3;
- (void)tileSource:(VKTileSource *)arg1 didFailToDecodeTileForKey:(const struct VKTileKey *)arg2;
- (void)tileSource:(VKTileSource *)arg1 didFetchTile:(VKTile *)arg2 forKey:(const struct VKTileKey *)arg3;
- (BOOL)tileSourceMayUseNetwork:(VKTileSource *)arg1;
@end

