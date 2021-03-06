/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSArray, TNDRGroup, UIImageView;

@interface TNDRAvatarClusterView : _ABCreateStringWithAddressDictionary
{
    TNDRGroup *_group;
    NSArray *_groupMembers;
    int _clusterType;
    UIImageView *_avatar1;
    UIImageView *_avatar2;
    UIImageView *_avatar3;
    UIImageView *_avatar4;
}

+ (BOOL)requiresConstraintBasedLayout;
- (void)setAvatar4:(id)fp8;
- (id)avatar4;
- (void)setAvatar3:(id)fp8;
- (id)avatar3;
- (void)setAvatar2:(id)fp8;
- (id)avatar2;
- (void)setAvatar1:(id)fp8;
- (id)avatar1;
- (int)clusterType;
- (id)groupMembers;
- (id)group;
- (void).cxx_destruct;
- (id)avatars;
- (void)resetConstraints;
- (id)buildAvatarImageView;
- (void)rebuildViews:(BOOL)fp8;
- (id)groupProfileImageForWatchApp;
- (void)setClusterType:(int)fp8;
- (void)setGroupMembers:(id)fp8;
- (void)setGroup:(id)fp8;
- (void)updateAvatarImages:(BOOL)fp8;
- (void)pinAvatar:(id)fp8 toPosition:(int)fp12;
- (void)sizeAvatar:(id)fp8 percentageOfSuperview:(float)fp12;
- (void)setupConstraints;
- (void)setupAvatars;
- (void)setup;
- (id)init;

@end

