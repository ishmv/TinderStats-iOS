/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSData, NSString;

@interface FBSDKGraphRequestDataAttachment : _ABCreateStringWithAddressDictionary
{
    NSString *_contentType;
    NSData *_data;
    NSString *_filename;
}

- (id)filename;
- (id)data;
- (id)contentType;
- (void).cxx_destruct;
- (id)init;
- (id)initWithData:(id)fp8 filename:(id)fp12 contentType:(id)fp16;

@end
