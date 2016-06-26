/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "TNDRActionDialogViewControllerDelegate-Protocol.h"
#import "TNDRActionSheetDelegate-Protocol.h"
#import "TNDRNotificationWindowDelegate-Protocol.h"
#import "TNDROptionsTableViewControllerDelegate-Protocol.h"
#import "TNDRPhotoAccessViewControllerDelegate-Protocol.h"
#import "TNDRProfileEditorChangedData-Protocol.h"
#import "TNDRURLNavigableProtocol-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class MBProgressHUD, NSArray, NSIndexPath, NSMutableArray, NSString, PSPDFTextView, TNDRActionSheet, TNDRInstagramConnectionViewController, TNDRMyProfileEditViewPhotoSourceSelection, TNDRMyProfilePhotoCell, TNDRMyProfilePhotoLayout, TNDRPhotoFailedToUploadDialogViewController, UICollectionView, UIImage, UILabel, UILongPressGestureRecognizer, UINavigationBar, UINavigationController, UIScrollView, UITableView, UITableViewCell, UITableViewController, UITapGestureRecognizer, UIView;

@interface TNDRMyProfileEditViewController : _ABCreateStringWithAddressDictionary <UICollectionViewDataSource, UITextViewDelegate, UICollectionViewDelegate, UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate, TNDRActionSheetDelegate, TNDROptionsTableViewControllerDelegate, TNDRNotificationWindowDelegate, TNDRPhotoAccessViewControllerDelegate, TNDRActionDialogViewControllerDelegate, UIViewControllerTransitioningDelegate, TNDRProfileEditorChangedData, TNDRURLNavigableProtocol>
{
    TNDRMyProfilePhotoLayout *_layout;
    TNDRMyProfilePhotoCell *_panPhotoCell;
    UIView *_shadow;
    UILongPressGestureRecognizer *_longPressGesture;
    NSIndexPath *_movedTo;
    UIImage *_mainProfileImage;
    BOOL _isLoading;
    MBProgressHUD *_progressHUD;
    int _photoDataLoaded;
    NSArray *_savedPhotoData;
    NSIndexPath *_indexPathToDeleteOrReplace;
    unsigned int _mainProfilePhotoAction;
    struct CGRect _stashFrame;
    UILabel *_remainingChars;
    NSString *_bio;
    NSString *_savedBio;
    float _kbHeight;
    float _topOffset;
    BOOL _swappedImagePositions;
    BOOL _dismissing;
    UIView *_toolTipBG;
    UILabel *_toolTipLabel;
    UITapGestureRecognizer *_tapGesture;
    TNDRActionSheet *_deleteActionSheet;
    TNDRActionSheet *_addOrReplaceActionSheet;
    UILabel *_aboutLabel;
    PSPDFTextView *_aboutTextView;
    UITableViewCell *_genderSelectionCell;
    UINavigationController *_navController;
    BOOL _isEditingPhotos;
    UITableViewCell *_workSelectionCell;
    UITableViewCell *_schoolSelectionCell;
    UITapGestureRecognizer *_keyboardDismissTapGR;
    id <TNDRProfileEditorChangedData> _delegate;
    UICollectionView *_photoCollection;
    UIScrollView *_mainScrollView;
    UITableViewController *_genderTable;
    UITableView *_workAndSchoolTable;
    UIView *_infoContainer;
    UINavigationBar *_navBar;
    TNDRMyProfileEditViewPhotoSourceSelection *_photoSourceSelection;
    TNDRInstagramConnectionViewController *_instagramConnectionViewController;
    TNDRPhotoFailedToUploadDialogViewController *_photoFailedToUploadDialogViewController;
    NSMutableArray *_photoData;
}

+ (id)viewControllerNavigationKey;
- (void)setPhotoData:(id)fp8;
- (id)photoData;
- (void)setPhotoFailedToUploadDialogViewController:(id)fp8;
- (id)photoFailedToUploadDialogViewController;
- (void)setInstagramConnectionViewController:(id)fp8;
- (id)instagramConnectionViewController;
- (void)setPhotoSourceSelection:(id)fp8;
- (id)photoSourceSelection;
- (void)setNavBar:(id)fp8;
- (id)navBar;
- (void)setInfoContainer:(id)fp8;
- (id)infoContainer;
- (void)setWorkAndSchoolTable:(id)fp8;
- (id)workAndSchoolTable;
- (void)setGenderTable:(id)fp8;
- (id)genderTable;
- (void)setMainScrollView:(id)fp8;
- (id)mainScrollView;
- (void)setAboutTextView:(id)fp8;
- (id)aboutTextView;
- (void)setAboutLabel:(id)fp8;
- (id)aboutLabel;
- (void)setPhotoCollection:(id)fp8;
- (id)photoCollection;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void).cxx_destruct;
- (id)disclosureImageView;
- (id)animationControllerForDismissedController:(id)fp8;
- (id)animationControllerForPresentedController:(id)fp8 presentingController:(id)fp12 sourceController:(id)fp16;
- (void)dialogViewControllerDidTapActionButton:(id)fp8;
- (void)updateServerWithChangedGender:(int)fp8;
- (void)didSelectOptionWithIndex:(int)fp8;
- (void)refreshSchoolAndJobCellData;
- (void)selectSchool;
- (void)selectJob;
- (void)selectGender;
- (id)jobPreviewText;
- (id)schoolPreviewText;
- (id)schoolSelectionCell;
- (id)workSelectionCell;
- (id)genderSelectionCell;
- (float)tableView:(id)fp8 heightForRowAtIndexPath:(id)fp12;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 viewForHeaderInSection:(int)fp12;
- (id)tableView:(id)fp8 viewForFooterInSection:(int)fp12;
- (float)tableView:(id)fp8 heightForFooterInSection:(int)fp12;
- (float)tableView:(id)fp8 heightForHeaderInSection:(int)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (void)addWorkAndSchoolTable;
- (void)addGenderTable;
- (struct CGRect)frameForPhotoAtIndexPath:(id)fp8;
- (void)updateServerWithAbout;
- (void)removeBioIfAllWhiteSpace;
- (void)hideKeyboard;
- (void)keyboardWillHide:(id)fp8;
- (void)keyboardWillShow:(id)fp8;
- (void)adjustScrollViewForKeyboardAnimated:(BOOL)fp8;
- (void)textViewDidEndEditing:(id)fp8;
- (void)textViewDidBeginEditing:(id)fp8;
- (void)textViewDidChange:(id)fp8;
- (void)textViewDidChangeSelection:(id)fp8;
- (BOOL)textView:(id)fp8 shouldChangeTextInRange:(struct _NSRange)fp12 replacementText:(id)fp20;
- (void)updateRemainingChars:(unsigned int)fp8;
- (void)adjustFrames;
- (void)setupInstagramConnection;
- (void)addAboutTextView;
- (void)addAboutLabel;
- (void)dismissToolTip;
- (void)showTooltip;
- (void)addTooltip;
- (id)findLargestPhotoFrom:(id)fp8;
- (void)facebookImagePickerUploadDidFail:(id)fp8;
- (void)didSelectCroppedPhotoFromFacebookImageCropper:(id)fp8 isMainPhoto:(BOOL)fp12 withResponse:(id)fp16;
- (void)addPhotoFromFacebook;
- (void)photoAccessManagerCancel:(id)fp8;
- (void)photoAccessManager:(id)fp8 selectedPhotoData:(id)fp12;
- (void)addPhotoFromCameraRoll;
- (void)addPhoto;
- (void)loadView;
- (void)userDidDeletePhotoAtIndexPath:(id)fp8;
- (void)updateServerWithImagePositions;
- (void)setupProgressHUD;
- (void)setupCollectionView;
- (void)reloadCells;
- (void)updateImage:(id)fp8 forIndex:(int)fp12 andURL:(id)fp16;
- (struct CGPoint)calcOffsetBetweenTouchPointAndCellCenterForIndexPath:(id)fp8 andLocation:(struct CGPoint)fp12;
- (void)removePanImageViewAndFinish;
- (void)makePanImageForIndexPath:(id)fp8 center:(struct CGPoint)fp12;
- (void)handleLongPressGesture:(id)fp8;
- (BOOL)gestureRecognizer:(id)fp8 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)fp12;
- (id)findIndexPathAt:(struct CGPoint)fp8;
- (id)swapPhotosIfNecessary:(struct CGPoint)fp8;
- (BOOL)swapPhotosAtIndexPath:(id)fp8 withIndexPath:(id)fp12;
- (void)addOrReplacePhoto;
- (void)deleteItemAtIndexPath:(id)fp8;
- (void)actionSheet:(id)fp8 triggeredButtonWithId:(int)fp12;
- (void)deletePhoto:(id)fp8;
- (void)collectionView:(id)fp8 didSelectItemAtIndexPath:(id)fp12;
- (id)collectionView:(id)fp8 cellForItemAtIndexPath:(id)fp12;
- (int)collectionView:(id)fp8 numberOfItemsInSection:(int)fp12;
- (int)numberOfSectionsInCollectionView:(id)fp8;
- (void)setupNavBar;
- (void)setupContainerView;
- (void)setupScrollView;
- (void)editDone;
- (int)preferredStatusBarStyle;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)instagramUserDataUpdatedNotification:(id)fp8;
- (void)registerForNotifications;
- (void)viewDidLoad;
- (void)setPhotos:(id)fp8 bio:(id)fp12;
- (id)initWithPhotoData:(id)fp8 bio:(id)fp12;

@end

