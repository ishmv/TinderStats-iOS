/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "TNDRActionSheetDelegate-Protocol.h"

@class TNDRActionSheet;

@interface TNDRMyProfileEditViewPhotoSourceSelection : _ABCreateStringWithAddressDictionary <TNDRActionSheetDelegate>
{
    id _completionBlock;
    TNDRActionSheet *_photoSourceSelectActionSheet;
}

- (void)setPhotoSourceSelectActionSheet:(id)fp8;
- (id)photoSourceSelectActionSheet;
- (void)setCompletionBlock:(id)fp(null);
- (id)completionBlock;
- (void).cxx_destruct;
- (void)actionSheet:(id)fp8 triggeredButtonWithId:(int)fp12;
- (void)presentPhotoSourceSelectionOnView:(id)fp8 completionBlock:(id)fp(null);

@end

