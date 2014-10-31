/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SystemMigration/SMALRock.h>

@class NSArray, NSNumber, NSString;

@interface SMALStatusRock : SMALRock
{
    NSNumber *_timeRemaining;
    NSNumber *_percentDone;
    NSString *_text;
    NSArray *_arguments;
    NSArray *_errorsAndWarnings;
}

+ (id)rockWithPayload:(id)arg1;
+ (id)rockID;
@property(retain) NSArray *errorsAndWarnings; // @synthesize errorsAndWarnings=_errorsAndWarnings;
@property(retain) NSArray *arguments; // @synthesize arguments=_arguments;
@property(retain) NSString *text; // @synthesize text=_text;
@property(retain) NSNumber *percentDone; // @synthesize percentDone=_percentDone;
@property(retain) NSNumber *timeRemaining; // @synthesize timeRemaining=_timeRemaining;
- (void).cxx_destruct;
- (BOOL)keepAlive;
- (BOOL)returnsData;
- (id)requestPayload;
- (id)description;
- (void)sendResult;
- (BOOL)expectsAResult;

@end
