/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSDictionary, NSString;

@interface TNDRCommonConnectionData : _ABCreateStringWithAddressDictionary
{
    int _degree;
    NSString *_degreeString;
    NSString *_connectionID;
    NSString *_name;
    NSDictionary *_imagesBySize;
}

- (void)setImagesBySize:(id)fp8;
- (id)imagesBySize;
- (void)setName:(id)fp8;
- (id)name;
- (void)setConnectionID:(id)fp8;
- (id)connectionID;
- (void)setDegreeString:(id)fp8;
- (id)degreeString;
- (void)setDegree:(int)fp8;
- (int)degree;
- (void).cxx_destruct;
- (id)stringForSize:(int)fp8;
- (id)avatarURLForSize:(int)fp8;
- (void)parseJSONValues:(id)fp8;
- (id)initWithCommonConnectionJSON:(id)fp8;

@end

