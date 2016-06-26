/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "TNDRChatContentViewProtocol-Protocol.h"

@class CALayer, FLAnimatedImageView, NSURL, TNDRChatCell, TNDRSlackChatTextView, UIActivityIndicatorView, UILongPressGestureRecognizer;

@interface TNDRGIFView : _ABCreateStringWithAddressDictionary <TNDRChatContentViewProtocol>
{
    BOOL _showLikeOption;
    CALayer *_mask;
    TNDRSlackChatTextView *_textView;
    TNDRChatCell *_parentCell;
    FLAnimatedImageView *_gifImageView;
    NSURL *_gifURL;
    UIActivityIndicatorView *_indicatorView;
    UILongPressGestureRecognizer *_longPressCopyGR;
    NSURL *_actualGIFURL;
}

- (id)actualGIFURL;
- (void)setLongPressCopyGR:(id)fp8;
- (id)longPressCopyGR;
- (void)setIndicatorView:(id)fp8;
- (id)indicatorView;
- (id)gifURL;
- (void)setGifImageView:(id)fp8;
- (id)gifImageView;
- (void)setParentCell:(id)fp8;
- (id)parentCell;
- (void)setShowLikeOption:(BOOL)fp8;
- (BOOL)showLikeOption;
- (void)setTextView:(id)fp8;
- (id)textView;
- (id)mask;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)urlForTouchPoint:(struct CGPoint)fp8;
- (void)menuDidHide:(id)fp8;
- (void)handleLongPressForCopy:(id)fp8;
- (void)heartTapped:(id)fp8;
- (void)copyLink:(id)fp8;
- (id)gifURLFromFullGIFURL:(id)fp8;
- (void)setGifURL:(id)fp8;
- (void)setActualGIFURL:(id)fp8;
- (BOOL)canBecomeFirstResponder;
- (int)bottomAlignmentAttributeForAvatar;
- (void)setMask:(id)fp8;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)fp8;

@end
