/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSArray;

@interface TNDRPassportLocationsListViewModel : _ABCreateStringWithAddressDictionary
{
    BOOL _popupMode;
    NSArray *_locations;
}

- (void)setLocations:(id)fp8;
- (id)locations;
- (void)setPopupMode:(BOOL)fp8;
- (BOOL)isPopupMode;
- (void).cxx_destruct;
- (id)locationForIndexPath:(id)fp8;
- (CDAnonymousStruct8)locationCoordinatesForIndexPath:(id)fp8;
- (BOOL)_isStaticCellAtIndexPath:(id)fp8;
- (int)cellStyleForIndexPath:(id)fp8;
- (int)accessoryTypeForIndexPath:(id)fp8;
- (id)cellIdentifierForIndexPath:(id)fp8;
- (id)locationIconAtIndexPath:(id)fp8;
- (id)locationDetailTextAtIndexPath:(id)fp8;
- (id)locationTitleTextAtIndexPath:(id)fp8;
- (int)numberOfMyLocations;
- (id)initWithLocations:(id)fp8 popupMode:(BOOL)fp12;

@end

