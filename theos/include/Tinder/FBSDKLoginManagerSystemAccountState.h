/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@interface FBSDKLoginManagerSystemAccountState : _ABCreateStringWithAddressDictionary
{
    BOOL _didShowDialog;
    BOOL _reauthorize;
    BOOL _unTOSedDevice;
}

- (void)setUnTOSedDevice:(BOOL)fp8;
- (BOOL)isUnTOSedDevice;
- (void)setReauthorize:(BOOL)fp8;
- (BOOL)isReauthorize;
- (void)setDidShowDialog:(BOOL)fp8;
- (BOOL)didShowDialog;

@end

