/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class FABIcon;

@interface FABAppIconUtility : _ABCreateStringWithAddressDictionary
{
    FABIcon *_applicationIcon;
}

+ (id)iconNameSetWithAlternateNamesAddedToIconNameSet:(id)fp8;
+ (void)addIconNameWithModifier:(id)fp8 forIconWithName:(id)fp12 toSetOfIconNames:(id)fp16;
+ (BOOL)isIconImageFileNameExtensionPresentInName:(id)fp8;
+ (struct CGSize)sizeForImage:(id)fp8;
- (void)setApplicationIcon:(id)fp8;
- (void).cxx_destruct;
- (id)fetchApplicationIcon;
- (id)iconByFallingBackOnDefaultIconNamingConvention;
- (id)iconFromCFBundleIconFile;
- (id)iconFromCFBundleIconFiles;
- (id)iconFromIOS7StyleCFBundleIconsInFieldWithKey:(id)fp8;
- (id)largestIconInIconNames:(id)fp8 prerendered:(BOOL)fp12;
- (id)iconRootPath;
- (id)applicationIcon;
- (id)appInfoDictionary;

@end

