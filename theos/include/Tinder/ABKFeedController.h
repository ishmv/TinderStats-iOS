/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class ABKPersistentData;

@interface ABKFeedController : _ABCreateStringWithAddressDictionary
{
    ABKPersistentData *_persistentData;
}

- (void)setPersistentData:(id)fp8;
- (id)persistentData;
- (void).cxx_destruct;
- (id)getCardsInCategories:(unsigned int)fp8;
- (id)lastUpdate;
- (id)getNewsFeedCards;
- (int)cardCountForCategories:(unsigned int)fp8;
- (int)unreadCardCountForCategories:(unsigned int)fp8;
- (id)initWithPersistentData:(id)fp8;

@end

