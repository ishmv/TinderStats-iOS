/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class TNDRChatToProfileAnimationController, TNDRGroupProfileViewController;

@interface TNDRChatToProfileTransitioningDelegate : _ABCreateStringWithAddressDictionary <UIViewControllerTransitioningDelegate>
{
    TNDRGroupProfileViewController *_groupProfileVC;
    TNDRChatToProfileAnimationController *_animationController;
    struct CGRect _originalWindowFrameForMatchCell;
}

- (void)setAnimationController:(id)fp8;
- (id)animationController;
- (void)setGroupProfileVC:(id)fp8;
- (id)groupProfileVC;
- (void)setOriginalWindowFrameForMatchCell:(struct CGRect)fp8;
- (struct CGRect)originalWindowFrameForMatchCell;
- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)fp8;
- (id)animationControllerForPresentedController:(id)fp8 presentingController:(id)fp12 sourceController:(id)fp16;

@end

