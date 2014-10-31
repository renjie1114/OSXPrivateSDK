/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBRequest.h"

#import "NSCopying-Protocol.h"

@class GEOClientCapabilities, GEODirectionsRequestFeedback, GEOLocation, GEOMapRegion, GEOOriginalRoute, GEORouteAttributes, NSData, NSMutableArray;

@interface GEODirectionsRequest : PBRequest <NSCopying>
{
    CDStruct_612aec5b _sessionID;
    unsigned long long _maxDecoderVersion;
    unsigned long long _maxGraphVersion;
    unsigned long long _sharedLibraryVersion;
    GEOClientCapabilities *_clientCapabilities;
    GEOMapRegion *_currentMapRegion;
    GEOLocation *_currentUserLocation;
    int _departureTime;
    GEODirectionsRequestFeedback *_feedback;
    unsigned int _mainTransportTypeMaxRouteCount;
    NSData *_originalDirectionsResponseID;
    GEOOriginalRoute *_originalRoute;
    NSData *_originalRouteID;
    NSData *_originalRouteZilchPoints;
    GEORouteAttributes *_routeAttributes;
    unsigned int _sequenceNumber;
    NSMutableArray *_serviceTags;
    unsigned int _timeSinceLastRerouteRequest;
    NSMutableArray *_waypointTypeds;
    BOOL _getRouteForZilchPoints;
    struct {
        unsigned int sessionID:1;
        unsigned int maxDecoderVersion:1;
        unsigned int maxGraphVersion:1;
        unsigned int sharedLibraryVersion:1;
        unsigned int departureTime:1;
        unsigned int mainTransportTypeMaxRouteCount:1;
        unsigned int sequenceNumber:1;
        unsigned int timeSinceLastRerouteRequest:1;
        unsigned int getRouteForZilchPoints:1;
    } _has;
}

@property(nonatomic) unsigned long long sharedLibraryVersion; // @synthesize sharedLibraryVersion=_sharedLibraryVersion;
@property(nonatomic) unsigned long long maxGraphVersion; // @synthesize maxGraphVersion=_maxGraphVersion;
@property(nonatomic) unsigned long long maxDecoderVersion; // @synthesize maxDecoderVersion=_maxDecoderVersion;
@property(retain, nonatomic) NSMutableArray *serviceTags; // @synthesize serviceTags=_serviceTags;
@property(nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain, nonatomic) GEOOriginalRoute *originalRoute; // @synthesize originalRoute=_originalRoute;
@property(retain, nonatomic) NSMutableArray *waypointTypeds; // @synthesize waypointTypeds=_waypointTypeds;
@property(retain, nonatomic) GEODirectionsRequestFeedback *feedback; // @synthesize feedback=_feedback;
@property(nonatomic) CDStruct_612aec5b sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) int departureTime; // @synthesize departureTime=_departureTime;
@property(retain, nonatomic) NSData *originalDirectionsResponseID; // @synthesize originalDirectionsResponseID=_originalDirectionsResponseID;
@property(retain, nonatomic) GEOClientCapabilities *clientCapabilities; // @synthesize clientCapabilities=_clientCapabilities;
@property(retain, nonatomic) NSData *originalRouteZilchPoints; // @synthesize originalRouteZilchPoints=_originalRouteZilchPoints;
@property(retain, nonatomic) NSData *originalRouteID; // @synthesize originalRouteID=_originalRouteID;
@property(retain, nonatomic) GEOMapRegion *currentMapRegion; // @synthesize currentMapRegion=_currentMapRegion;
@property(retain, nonatomic) GEOLocation *currentUserLocation; // @synthesize currentUserLocation=_currentUserLocation;
@property(retain, nonatomic) GEORouteAttributes *routeAttributes; // @synthesize routeAttributes=_routeAttributes;
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
@property(nonatomic) BOOL hasSharedLibraryVersion;
@property(nonatomic) BOOL hasMaxGraphVersion;
@property(nonatomic) BOOL hasMaxDecoderVersion;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (unsigned long long)serviceTagsCount;
- (void)addServiceTag:(id)arg1;
- (void)clearServiceTags;
@property(nonatomic) BOOL hasSequenceNumber;
@property(readonly, nonatomic) BOOL hasOriginalRoute;
- (id)waypointTypedAtIndex:(unsigned long long)arg1;
- (unsigned long long)waypointTypedsCount;
- (void)addWaypointTyped:(id)arg1;
- (void)clearWaypointTypeds;
@property(readonly, nonatomic) BOOL hasFeedback;
@property(nonatomic) BOOL hasSessionID;
@property(nonatomic) BOOL hasGetRouteForZilchPoints;
@property(nonatomic) BOOL getRouteForZilchPoints; // @synthesize getRouteForZilchPoints=_getRouteForZilchPoints;
@property(nonatomic) BOOL hasDepartureTime;
@property(readonly, nonatomic) BOOL hasOriginalDirectionsResponseID;
@property(readonly, nonatomic) BOOL hasClientCapabilities;
@property(nonatomic) BOOL hasTimeSinceLastRerouteRequest;
@property(nonatomic) unsigned int timeSinceLastRerouteRequest; // @synthesize timeSinceLastRerouteRequest=_timeSinceLastRerouteRequest;
@property(readonly, nonatomic) BOOL hasOriginalRouteZilchPoints;
@property(readonly, nonatomic) BOOL hasOriginalRouteID;
@property(readonly, nonatomic) BOOL hasCurrentMapRegion;
@property(readonly, nonatomic) BOOL hasCurrentUserLocation;
@property(nonatomic) BOOL hasMainTransportTypeMaxRouteCount;
@property(nonatomic) unsigned int mainTransportTypeMaxRouteCount; // @synthesize mainTransportTypeMaxRouteCount=_mainTransportTypeMaxRouteCount;
@property(readonly, nonatomic) BOOL hasRouteAttributes;
- (void)dealloc;

@end
