/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class CLGeocoder, NSArray;

@interface TNDRPassportMapSearchCoordinateViewModel : _ABCreateStringWithAddressDictionary
{
    NSArray *_mapSearchResults;
    CLGeocoder *_geocoder;
}

- (void)setGeocoder:(id)fp8;
- (id)geocoder;
- (id)mapSearchResults;
- (void).cxx_destruct;
- (void)performSearchWithLocation:(id)fp8 completion:(id)fp(null);
- (void)performSearchWithLocation:(id)fp8;
- (id)init;

@end
