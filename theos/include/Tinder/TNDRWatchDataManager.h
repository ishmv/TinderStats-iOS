/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@interface TNDRWatchDataManager : _ABCreateStringWithAddressDictionary
{
}

+ (id)sharedManager;
- (void)markViewedStatusOfMessages:(BOOL)fp8 match:(id)fp12 reply:(id)fp(null);
- (void)sendChatMsgFromWatch:(id)fp8 match:(id)fp12 reply:(id)fp(null);
- (void)chatMsgsForMatch:(id)fp8 max:(int)fp12 reply:(id)fp(null);
- (id)getLastNChatMessages:(id)fp8 max:(int)fp12;
- (id)avatarImageDataForImage:(id)fp8 withImageSize:(float)fp12 andResultsDict:(id)fp16;
- (void)avatarImageForPath:(id)fp8 imageSize:(float)fp12 reply:(id)fp(null);
- (id)fetchTopMatches:(int)fp8;
- (id)lastActivityString:(id)fp8;
- (void)topOfMatchTable:(int)fp8 size:(float)fp12 reply:(id)fp(null);
- (void)matchInfoAndNewMessageForWatch:(id)fp8 size:(float)fp12 reply:(id)fp(null);
- (id)findLargestPhotoFrom:(id)fp8;
- (void)matchInfoForWatch:(id)fp8 size:(float)fp12 reply:(id)fp(null);
- (void)triggerUpdateCallWithReply:(id)fp(null);
- (void)checkIfUserIsLoggedIn:(id)fp(null);
- (void)handleWatchRequest:(id)fp8 reply:(id)fp(null);

@end

