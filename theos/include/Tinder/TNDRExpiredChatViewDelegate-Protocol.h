/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol TNDRExpiredChatViewDelegate <NSObject>
- (void)requestToLikeWithSuperLike:(BOOL)fp8 user:(id)fp12;
- (void)requestTransitionToMatchProfileForUser:(id)fp8;
- (int)swipeValueForRow:(int)fp8;
- (id)imageURLForRow:(int)fp8;
- (id)nameForRow:(int)fp8;
- (int)numberOfRows;
- (id)userForRow:(int)fp8;
@end

