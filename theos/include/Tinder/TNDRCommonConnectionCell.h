/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class TNDRAsyncNetworkImageNode, TNDRCommonConnectionData, UILabel;

@interface TNDRCommonConnectionCell : _ABCreateStringWithAddressDictionary
{
    TNDRCommonConnectionData *_connectionData;
    TNDRAsyncNetworkImageNode *_avatarImageNode;
    UILabel *_degreeLabel;
    UILabel *_nameLabel;
}

+ (id)reuseIdentifier;
- (void)setNameLabel:(id)fp8;
- (id)nameLabel;
- (void)setDegreeLabel:(id)fp8;
- (id)degreeLabel;
- (void)setAvatarImageNode:(id)fp8;
- (id)avatarImageNode;
- (id)connectionData;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)attributesForSuperscript;
- (id)attributesForNumeric;
- (id)degreeColor;
- (id)degreeAttributedText;
- (void)updateUserAvatar;
- (void)updateLabels;
- (void)setConnectionData:(id)fp8;
- (void)setupWithFrame:(struct CGRect)fp8;
- (id)initWithFrame:(struct CGRect)fp8;

@end
