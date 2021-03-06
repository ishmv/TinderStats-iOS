/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_TNDRMoment.h"

@interface TNDRMoment : _TNDRMoment
{
}

+ (id)saveFilePath;
+ (id)saveImageToDisk:(id)fp8;
+ (id)timeFormatter;
- (id)adjustIncomingMomentJSONStructure:(id)fp8;
- (void)safeSetMomentValues:(id)fp8 dateFormatter:(id)fp12;
- (float)percentTimeUsed;
- (BOOL)isExpired;
- (BOOL)isInProgress;
- (BOOL)checkProgressTimeThresholdAndSetToFailedIfNeeded;
- (BOOL)isFailedMoment;
- (id)futureDateOfExpiration;
- (id)stringFromTimeInterval:(double)fp8;
- (id)shortTimeLeftDescription;
- (id)timeLeftDescription;
- (id)retrieveAllImageURLs;
- (int)numberOfLikes;
- (void)createAssociatedLikeAndMessageForMoment:(id)fp8 inContext:(id)fp12;
- (void)completionForMomentAction:(id)fp8 response:(id)fp12 JSON:(id)fp16 error:(id)fp20 firstName:(id)fp24 liked:(BOOL)fp28 success:(BOOL)fp32;
- (id)retrieveMomentImageFromDisk;
- (void)saveCompositedImageToDisk:(id)fp8 completion:(id)fp(null);

@end

