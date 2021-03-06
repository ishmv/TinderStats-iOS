/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "UIScrollViewDelegate-Protocol.h"

@class UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIScrollView, UIView;

@interface TNDRImagePickerPhotoCropperViewController : _ABCreateStringWithAddressDictionary <UIScrollViewDelegate>
{
    UIImageView *_imageView;
    id <TNDRImagePickerPhotoCropperDelegate> _photoPickerDelegate;
    UIScrollView *_scrollView;
    UIView *_outlineView;
    UIButton *_chooseButton;
    UIButton *_cancelButton;
    UILabel *_directionsLabel;
    UIView *_spinnerBackgroundView;
    UIActivityIndicatorView *_activityIndicator;
    struct CGPoint _startingImageViewCenter;
    struct CGAffineTransform _startingImageViewTransform;
}

- (void)setActivityIndicator:(id)fp8;
- (id)activityIndicator;
- (void)setSpinnerBackgroundView:(id)fp8;
- (id)spinnerBackgroundView;
- (void)setDirectionsLabel:(id)fp8;
- (id)directionsLabel;
- (void)setCancelButton:(id)fp8;
- (id)cancelButton;
- (void)setChooseButton:(id)fp8;
- (id)chooseButton;
- (void)setOutlineView:(id)fp8;
- (id)outlineView;
- (void)setScrollView:(id)fp8;
- (id)scrollView;
- (void)setStartingImageViewTransform:(struct CGAffineTransform)fp8;
- (struct CGAffineTransform)startingImageViewTransform;
- (void)setStartingImageViewCenter:(struct CGPoint)fp8;
- (struct CGPoint)startingImageViewCenter;
- (void)setPhotoPickerDelegate:(id)fp8;
- (id)photoPickerDelegate;
- (void)setImageView:(id)fp8;
- (id)imageView;
- (void).cxx_destruct;
- (void)cancel:(id)fp8;
- (void)save:(id)fp8;
- (id)viewForZoomingInScrollView:(id)fp8;
- (struct CGRect)croppingRectAsPercentages;
- (id)croppedImage;
- (void)scrollViewDidEndZooming:(id)fp8 withView:(id)fp12 atScale:(float)fp16;
- (void)setupScrollView;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;

@end

