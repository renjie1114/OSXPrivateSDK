//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GEOGeocodeProvider : NSObject
{
    CDUnknownBlockType _successHandler;
    CDUnknownBlockType _batchSuccessHandler;
    CDUnknownBlockType _errorHandler;
}

+ (id)providerName;
+ (unsigned short)provider;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy, nonatomic) CDUnknownBlockType batchSuccessHandler; // @synthesize batchSuccessHandler=_batchSuccessHandler;
@property(copy, nonatomic) CDUnknownBlockType successHandler; // @synthesize successHandler=_successHandler;
- (void)cancel;
- (void)batchReverseGeocode:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)reverseGeocode:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)forwardGeocode:(id)arg1 success:(CDUnknownBlockType)arg2 networkActivity:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)dealloc;

@end
