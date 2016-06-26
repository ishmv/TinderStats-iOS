/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "TNDRSettingsCell.h"

@class NSString, UILabel, UISwitch;

@interface TNDRSwitchCell : TNDRSettingsCell
{
    id <TNDRSwitchCellDelegate> _delegate;
    UILabel *_titleLabel;
    UISwitch *_settingSwitch;
    int _itemType;
    id _actionBlock;
    NSString *_JSONKey;
}

- (void)setJSONKey:(id)fp8;
- (id)JSONKey;
- (void)setActionBlock:(id)fp(null);
- (id)actionBlock;
- (void)setItemType:(int)fp8;
- (int)itemType;
- (void)setSettingSwitch:(id)fp8;
- (id)settingSwitch;
- (void)setTitleLabel:(id)fp8;
- (id)titleLabel;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void).cxx_destruct;
- (void)switchChanged:(id)fp8;
- (void)configureCellForItem:(id)fp8;
- (void)setup;
- (id)initWithStyle:(int)fp8 reuseIdentifier:(id)fp12;

@end

