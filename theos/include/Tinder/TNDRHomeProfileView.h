/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSArray, NSLayoutConstraint, NSString, UIButton, UIImage, UIImageView, UILabel, UITapGestureRecognizer;

@interface TNDRHomeProfileView : _ABCreateStringWithAddressDictionary
{
    id <TNDRHomeProfileViewDelegate> _delegate;
    UIImage *_fullSizeAvatarImage;
    UIButton *_editProfileButton;
    UILabel *_bioLabel;
    int _groupsState;
    UIImageView *_avatarImageView;
    UILabel *_nameLabel;
    UILabel *_workLabel;
    UIButton *_schoolOrPassportView;
    UIImageView *_badgeView;
    NSLayoutConstraint *_avatarConstraint;
    NSLayoutConstraint *_nameLabelConstraint;
    NSString *_lastLoadedAvatarURLString;
    UITapGestureRecognizer *_tapProfileGR;
    NSArray *_bioConstraints;
    NSLayoutConstraint *_avatarHeightConstraint;
    NSLayoutConstraint *_avatarHeightConstraintNoGroups;
    NSLayoutConstraint *_nameLabelCenterXConstraint;
}

+ (BOOL)requiresConstraintBasedLayout;
- (void)setNameLabelCenterXConstraint:(id)fp8;
- (id)nameLabelCenterXConstraint;
- (void)setAvatarHeightConstraintNoGroups:(id)fp8;
- (id)avatarHeightConstraintNoGroups;
- (void)setAvatarHeightConstraint:(id)fp8;
- (id)avatarHeightConstraint;
- (void)setBioConstraints:(id)fp8;
- (id)bioConstraints;
- (void)setTapProfileGR:(id)fp8;
- (id)tapProfileGR;
- (void)setLastLoadedAvatarURLString:(id)fp8;
- (id)lastLoadedAvatarURLString;
- (void)setNameLabelConstraint:(id)fp8;
- (id)nameLabelConstraint;
- (void)setAvatarConstraint:(id)fp8;
- (id)avatarConstraint;
- (void)setBadgeView:(id)fp8;
- (id)badgeView;
- (void)setSchoolOrPassportView:(id)fp8;
- (id)schoolOrPassportView;
- (void)setWorkLabel:(id)fp8;
- (id)workLabel;
- (void)setNameLabel:(id)fp8;
- (id)nameLabel;
- (void)setAvatarImageView:(id)fp8;
- (id)avatarImageView;
- (int)groupsState;
- (void)setBioLabel:(id)fp8;
- (id)bioLabel;
- (void)setEditProfileButton:(id)fp8;
- (id)editProfileButton;
- (id)fullSizeAvatarImage;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void).cxx_destruct;
- (void)updateAvatarHeightConstraints;
- (id)passportLocationImageForHome;
- (void)updateAvatarImageWithURL:(id)fp8 andImageSize:(float)fp12;
- (void)animateInEditButtonIfNeeded;
- (void)currentUserUpdatedViewedAvatarImage:(id)fp8;
- (void)setFullSizeAvatarImage:(id)fp8;
- (void)updateUserBadge:(id)fp8;
- (void)setGroupsState:(int)fp8;
- (void)updateUserBio:(id)fp8;
- (void)updateUserTraveling:(BOOL)fp8 location:(id)fp12 school:(id)fp16;
- (void)updateUserWorkInfo:(id)fp8;
- (void)updateUserName:(id)fp8;
- (void)handleTapProfileAvatar:(id)fp8;
- (void)completeDismissFromProfile;
- (void)prepareForDismissFromProfile;
- (struct CGRect)avatarRect;
- (void)handlePassportButtonTapped:(id)fp8;
- (void)handleEditButtonTapped:(id)fp8;
- (float)badgeSize;
- (float)infoFontSize;
- (float)titleFontSize;
- (float)fontMultiplier;
- (float)maxLabelWidth;
- (id)layoutConstraintForGroupsAvatarWithHeightPerc:(float)fp8;
- (void)setupBioLabelConstraints;
- (void)setupButtonConstraints;
- (void)setupSchoolPassportConstraints;
- (void)setupWorkLabelConstraints;
- (void)setupBadgeConstraints;
- (void)setupNameLabelConstraints;
- (void)setupAvatarImageViewConstraints;
- (void)setupConstraints;
- (void)setupProfileButtons;
- (void)setupBioLabel;
- (void)setupSchoolLabelOrPassportInfo;
- (void)setupWorkLabel;
- (void)setupBadgeView;
- (void)setupNameLabel;
- (void)setupAvatarImageView;
- (void)setup;
- (id)init;

@end

