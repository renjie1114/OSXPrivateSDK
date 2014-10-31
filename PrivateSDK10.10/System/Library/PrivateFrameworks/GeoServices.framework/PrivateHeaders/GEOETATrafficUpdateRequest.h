/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBRequest.h"

#import "NSCopying-Protocol.h"

@class GEOClientCapabilities, GEOLocation, GEORouteAttributes, NSData, NSMutableArray;

@interface GEOETATrafficUpdateRequest : PBRequest <NSCopying>
{
    CDStruct_612aec5b _sessionID;
    GEOClientCapabilities *_clientCapabilities;
    GEOLocation *_currentUserLocation;
    NSMutableArray *_destinationWaypointTypeds;
    NSData *_directionsResponseID;
    GEORouteAttributes *_routeAttributes;
    NSMutableArray *_routes;
    NSMutableArray *_serviceTags;
    BOOL _includeBetterRouteSuggestion;
    struct {
        unsigned int sessionID:1;
        unsigned int includeBetterRouteSuggestion:1;
    } _has;
}

@property(retain, nonatomic) NSMutableArray *serviceTags; // @synthesize serviceTags=_serviceTags;
@property(retain, nonatomic) NSMutableArray *destinationWaypointTypeds; // @synthesize destinationWaypointTypeds=_destinationWaypointTypeds;
@property(nonatomic) CDStruct_612aec5b sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) NSData *directionsResponseID; // @synthesize directionsResponseID=_directionsResponseID;
@property(retain, nonatomic) GEOClientCapabilities *clientCapabilities; // @synthesize clientCapabilities=_clientCapabilities;
@property(retain, nonatomic) NSMutableArray *routes; // @synthesize routes=_routes;
@property(retain, nonatomic) GEORouteAttributes *routeAttributes; // @synthesize routeAttributes=_routeAttributes;
@property(retain, nonatomic) GEOLocation *currentUserLocation; // @synthesize currentUserLocation=_currentUserLocation;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (unsigned long long)serviceTagsCount;
- (void)addServiceTag:(id)arg1;
- (void)clearServiceTags;
- (id)destinationWaypointTypedAtIndex:(unsigned long long)arg1;
- (unsigned long long)destinationWaypointTypedsCount;
- (void)addDestinationWaypointTyped:(id)arg1;
- (void)clearDestinationWaypointTypeds;
@property(nonatomic) BOOL hasSessionID;
@property(readonly, nonatomic) BOOL hasDirectionsResponseID;
@property(readonly, nonatomic) BOOL hasClientCapabilities;
- (id)routeAtIndex:(unsigned long long)arg1;
- (unsigned long long)routesCount;
- (void)addRoute:(id)arg1;
- (void)clearRoutes;
@property(nonatomic) BOOL hasIncludeBetterRouteSuggestion;
@property(nonatomic) BOOL includeBetterRouteSuggestion; // @synthesize includeBetterRouteSuggestion=_includeBetterRouteSuggestion;
@property(readonly, nonatomic) BOOL hasRouteAttributes;
@property(readonly, nonatomic) BOOL hasCurrentUserLocation;
- (void)dealloc;

@end
