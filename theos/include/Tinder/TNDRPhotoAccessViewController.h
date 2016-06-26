/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "TNDRActionDialogViewControllerDelegate-Protocol.h"
#import "TNDRDialogViewControllerDelegate-Protocol.h"
#import "TNDRImagePickerPhotoCropperDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIViewControllerPreviewingDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class TNDRImagePickerController, TNDRImagePickerPhotoCropperViewController, TNDRNeedPhotoAccessDialogViewController, TNDRNeedPhotoAccessiOS7DialogViewController, TNDRPhotoAccessIntroDialogViewController, UITapGestureRecognizer, UIViewController;

@interface TNDRPhotoAccessViewController : _ABCreateStringWithAddressDictionary <UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIViewControllerPreviewingDelegate, TNDRImagePickerPhotoCropperDelegate, TNDRDialogViewControllerDelegate, TNDRActionDialogViewControllerDelegate, UIViewControllerTransitioningDelegate>
{
    BOOL _hasRequestedCamerRollPhoto;
    BOOL _waitingForUserAuthorization;
    id <TNDRPhotoAccessViewControllerDelegate> _photoAccessDelegate;
    TNDRImagePickerController *_imagePicker;
    TNDRImagePickerPhotoCropperViewController *_photoCropper;
    TNDRPhotoAccessIntroDialogViewController *_photoAccessIntroDialogViewController;
    TNDRNeedPhotoAccessDialogViewController *_needPhotoAccessDialogViewController;
    TNDRNeedPhotoAccessiOS7DialogViewController *_needPhotoAccessiOS7DialogViewController;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIViewController *_imagePickerController;
}

- (void)setImagePickerController:(id)fp8;
- (id)imagePickerController;
- (void)setTapGestureRecognizer:(id)fp8;
- (id)tapGestureRecognizer;
- (void)setWaitingForUserAuthorization:(BOOL)fp8;
- (BOOL)waitingForUserAuthorization;
- (void)setHasRequestedCamerRollPhoto:(BOOL)fp8;
- (BOOL)hasRequestedCamerRollPhoto;
- (void)setNeedPhotoAccessiOS7DialogViewController:(id)fp8;
- (id)needPhotoAccessiOS7DialogViewController;
- (void)setNeedPhotoAccessDialogViewController:(id)fp8;
- (id)needPhotoAccessDialogViewController;
- (void)setPhotoAccessIntroDialogViewController:(id)fp8;
- (id)photoAccessIntroDialogViewController;
- (void)setPhotoCropper:(id)fp8;
- (id)photoCropper;
- (void)setImagePicker:(id)fp8;
- (id)imagePicker;
- (void)setPhotoAccessDelegate:(id)fp8;
- (id)photoAccessDelegate;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)fp8;
- (id)animationControllerForDismissedController:(id)fp8;
- (id)animationControllerForPresentedController:(id)fp8 presentingController:(id)fp12 sourceController:(id)fp16;
- (void)photoCropperDidCancel:(id)fp8;
- (void)photoCropper:(id)fp8 didCropPhoto:(id)fp12;
- (void)navigateToPhotoCropper:(id)fp8;
- (void)imagePickerControllerDidCancel:(id)fp8;
- (void)imagePickerController:(id)fp8 didFinishPickingMediaWithInfo:(id)fp12;
- (void)dialogViewControllerDidTapCancelButton:(id)fp8;
- (void)dialogViewControllerDidTapActionButton:(id)fp8;
- (void)showImagePicker;
- (void)showNeedPhotoAccessDialogToUser;
- (void)requestCameraRollPhoto;
- (int)authorizationStatus;
- (void)setupOriginalNavigationBarBackButtonAppearance;
- (void)setupImagePicker;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewDidLoad;

@end
