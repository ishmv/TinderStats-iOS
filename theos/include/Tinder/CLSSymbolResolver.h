/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSMutableArray;

@interface CLSSymbolResolver : _ABCreateStringWithAddressDictionary
{
    NSMutableArray *_binaryImages;
}

- (void).cxx_destruct;
- (BOOL)updateStackFrame:(id)fp8;
- (id)frameForAddress:(unsigned long long)fp8;
- (BOOL)fillInImageDetails:(CDAnonymousStruct10 *)fp8 forUUID:(id)fp12;
- (id)loadedBinaryImageForPC:(unsigned long)fp8;
- (BOOL)loadBinaryImagesFromFile:(id)fp8;
- (id)init;

@end

