/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "TNDRExpiredChatRowDelegate-Protocol.h"

@class NSArray, UIViewController<TNDRExpiredChatViewDelegate>;

@interface TNDRExpiredChatView : _ABCreateStringWithAddressDictionary <TNDRExpiredChatRowDelegate>
{
    UIViewController<TNDRExpiredChatViewDelegate> *_delegate;
    NSArray *_rows;
    NSArray *_separatorBars;
}

+ (id)defaultSeparatorBar;
- (void)setSeparatorBars:(id)fp8;
- (id)separatorBars;
- (void)setRows:(id)fp8;
- (id)rows;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void).cxx_destruct;
- (void)requestToLikeWithSuperLike:(BOOL)fp8 user:(id)fp12;
- (void)requestTransitionToMatchProfileForUser:(id)fp8;
- (void)setSwipeValue:(int)fp8 forRow:(int)fp12;
- (void)setupConstraints;
- (void)setupRows;
- (void)setup;
- (id)initWithFrame:(struct CGRect)fp8 delegate:(id)fp24;

@end

