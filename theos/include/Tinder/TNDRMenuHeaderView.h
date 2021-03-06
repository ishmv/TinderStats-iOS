/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class FBKVOController, UIImageView, UILabel, UIView;

@interface TNDRMenuHeaderView : _ABCreateStringWithAddressDictionary
{
    UIImageView *_profilePictureImageView;
    UILabel *_firstNameLabel;
    UILabel *_viewProfileLabel;
    UIImageView *_celebrityBadgeView;
    FBKVOController *_KVOController;
    UIView *_firstNameLabelAndCelebrityBadge;
}

- (void)setFirstNameLabelAndCelebrityBadge:(id)fp8;
- (id)firstNameLabelAndCelebrityBadge;
- (void)setKVOController:(id)fp8;
- (id)KVOController;
- (void)setCelebrityBadgeView:(id)fp8;
- (id)celebrityBadgeView;
- (void)setViewProfileLabel:(id)fp8;
- (id)viewProfileLabel;
- (void)setFirstNameLabel:(id)fp8;
- (id)firstNameLabel;
- (void)setProfilePictureImageView:(id)fp8;
- (id)profilePictureImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupCelebrityBadgeView;
- (void)setupViewProfileLabel;
- (void)setupFirstNameLabel;
- (void)setupProfileImageView;
- (void)setupFirstNameAndProfile;
- (id)initWithFrame:(struct CGRect)fp8;

@end

