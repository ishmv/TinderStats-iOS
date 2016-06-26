/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSData, NSString;

@interface FABIcon : _ABCreateStringWithAddressDictionary
{
    BOOL _prerendered;
    NSData *_data;
    NSString *_dataHash;
    struct CGSize _size;
}

+ (BOOL)isWithinMaxSurfaceAreaWithImage:(id)fp8;
- (void)setPrerendered:(BOOL)fp8;
- (BOOL)prerendered;
- (void)setSize:(struct CGSize)fp8;
- (struct CGSize)size;
- (void)setDataHash:(id)fp8;
- (id)dataHash;
- (void)setData:(id)fp8;
- (id)data;
- (void).cxx_destruct;
- (BOOL)largerThanSize:(struct CGSize)fp8;
- (BOOL)isWithinMaxSurfaceArea;
- (float)surfaceArea;
- (id)initWithPNGImageAtPath:(id)fp8 size:(struct CGSize)fp12 prerendered:(BOOL)fp20;
- (id)initWithData:(id)fp8 size:(struct CGSize)fp12;
- (id)initWithData:(id)fp8 size:(struct CGSize)fp12 prerendered:(BOOL)fp20;
- (id)initWithData:(id)fp8 dataHash:(id)fp12 size:(struct CGSize)fp16 prerendered:(BOOL)fp24;

@end
