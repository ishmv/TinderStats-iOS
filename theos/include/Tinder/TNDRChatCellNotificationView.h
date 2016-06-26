/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSMutableArray, NSString, UIImage, UIImageView, UILabel;

@interface TNDRChatCellNotificationView : _ABCreateStringWithAddressDictionary
{
    BOOL _showsError;
    BOOL _showsPending;
    BOOL _showsSent;
    id <TNDRChatCellNotificationViewDelegate> _delegate;
    UIImageView *_rightImageView;
    UIImage *_spinner;
    UIImage *_notDeliveredIcon;
    UILabel *_notificationMessage;
    NSString *_sentText;
    NSString *_notDeliveredText;
    NSMutableArray *_showsSentConstraints;
    NSMutableArray *_defaultConstraints;
}

- (void)setDefaultConstraints:(id)fp8;
- (id)defaultConstraints;
- (void)setShowsSentConstraints:(id)fp8;
- (id)showsSentConstraints;
- (void)setNotDeliveredText:(id)fp8;
- (id)notDeliveredText;
- (void)setSentText:(id)fp8;
- (id)sentText;
- (void)setNotificationMessage:(id)fp8;
- (id)notificationMessage;
- (void)setNotDeliveredIcon:(id)fp8;
- (id)notDeliveredIcon;
- (void)setSpinner:(id)fp8;
- (id)spinner;
- (void)setRightImageView:(id)fp8;
- (id)rightImageView;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (BOOL)showsSent;
- (BOOL)showsPending;
- (BOOL)showsError;
- (void).cxx_destruct;
- (void)setShowsSent:(BOOL)fp8 animatePath:(id)fp12;
- (void)setShowsSent:(BOOL)fp8;
- (void)setShowsPending:(BOOL)fp8;
- (void)setShowsError:(BOOL)fp8;
- (void)setupConstraints;
- (void)setup;
- (id)initWithFrame:(struct CGRect)fp8;

@end

