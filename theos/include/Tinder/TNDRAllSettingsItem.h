/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSAttributedString, NSNumber, NSString, NSURL, UIColor, UIFont, UIView, UIViewController;

@interface TNDRAllSettingsItem : _ABCreateStringWithAddressDictionary
{
    BOOL _maxIsRange;
    NSString *_itemTitle;
    NSString *_detailText;
    NSAttributedString *_attributedDetailText;
    UIView *_accessoryView;
    NSString *_identifierText;
    UIFont *_titleFont;
    UIFont *_detailFont;
    UIColor *_titleColor;
    UIColor *_detailColor;
    UIColor *_accessoryColor;
    int _itemType;
    UIViewController *_viewController;
    Class _viewControllerClass;
    NSURL *_urlToOpen;
    int _tag;
    id _actionBlock;
    id _trackingBlock;
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
    NSNumber *_minimumSpan;
    NSNumber *_startValue;
    NSNumber *_endValue;
    NSNumber *_startValueSave;
    NSNumber *_endValueSave;
    NSNumber *_maxRangeValue;
}

+ (id)defaultSettingsItem;
- (void)setMaxRangeValue:(id)fp8;
- (id)maxRangeValue;
- (void)setMaxIsRange:(BOOL)fp8;
- (BOOL)maxIsRange;
- (void)setEndValueSave:(id)fp8;
- (id)endValueSave;
- (void)setStartValueSave:(id)fp8;
- (id)startValueSave;
- (void)setEndValue:(id)fp8;
- (id)endValue;
- (void)setStartValue:(id)fp8;
- (id)startValue;
- (void)setMinimumSpan:(id)fp8;
- (id)minimumSpan;
- (void)setMaximumValue:(id)fp8;
- (id)maximumValue;
- (void)setMinimumValue:(id)fp8;
- (id)minimumValue;
- (void)setTrackingBlock:(id)fp(null);
- (id)trackingBlock;
- (void)setActionBlock:(id)fp(null);
- (id)actionBlock;
- (void)setTag:(int)fp8;
- (int)tag;
- (void)setUrlToOpen:(id)fp8;
- (id)urlToOpen;
- (void)setViewControllerClass:(Class)fp8;
- (Class)viewControllerClass;
- (void)setViewController:(id)fp8;
- (id)viewController;
- (void)setItemType:(int)fp8;
- (int)itemType;
- (void)setAccessoryColor:(id)fp8;
- (id)accessoryColor;
- (void)setDetailColor:(id)fp8;
- (id)detailColor;
- (void)setTitleColor:(id)fp8;
- (id)titleColor;
- (void)setDetailFont:(id)fp8;
- (id)detailFont;
- (void)setTitleFont:(id)fp8;
- (id)titleFont;
- (void)setIdentifierText:(id)fp8;
- (id)identifierText;
- (void)setAccessoryView:(id)fp8;
- (id)accessoryView;
- (void)setAttributedDetailText:(id)fp8;
- (id)attributedDetailText;
- (void)setDetailText:(id)fp8;
- (id)detailText;
- (void)setItemTitle:(id)fp8;
- (id)itemTitle;
- (void).cxx_destruct;

@end

