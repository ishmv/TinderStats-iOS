/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "BFAppLinkResolving-Protocol.h"

@class NSMutableDictionary;

@interface FBSDKAppLinkResolver : _ABCreateStringWithAddressDictionary <BFAppLinkResolving>
{
    NSMutableDictionary *_cachedLinks;
    int _userInterfaceIdiom;
}

+ (id)resolver;
+ (void)initialize;
- (void)setUserInterfaceIdiom:(int)fp8;
- (int)userInterfaceIdiom;
- (void)setCachedLinks:(id)fp8;
- (id)cachedLinks;
- (void).cxx_destruct;
- (id)appLinkFromURLInBackground:(id)fp8;
- (id)appLinksFromURLsInBackground:(id)fp8;
- (id)initWithUserInterfaceIdiom:(int)fp8;

@end

