/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "ABKInAppMessage.h"

@class NSURL;

@interface ABKInAppMessageHTML : ABKInAppMessage
{
    NSURL *_assetsZipRemoteUrl;
    NSURL *_assetsLocalDirectoryPath;
}

- (void)setAssetsLocalDirectoryPath:(id)fp8;
- (id)assetsLocalDirectoryPath;
- (void)setAssetsZipRemoteUrl:(id)fp8;
- (id)assetsZipRemoteUrl;
- (void).cxx_destruct;
- (void)logInAppMessageHTMLClickWithButtonID:(id)fp8;
- (id)imageURI;
- (id)proxyForJson;
- (id)description;
- (void)setValue:(id)fp8 forKey:(id)fp12;
- (id)init;

@end
