/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "NSCoding-Protocol.h"

@class NSData, NSNumber, NSString;

@interface MatchData : _ABCreateStringWithAddressDictionary <NSCoding>
{
    NSString *_matchID;
    NSString *_name;
    NSString *_lastActiveTimeString;
    NSNumber *_hasNewMessage;
    NSString *_photoPath;
    NSData *_groupPhotoData;
}

- (void)setGroupPhotoData:(id)fp8;
- (id)groupPhotoData;
- (void)setPhotoPath:(id)fp8;
- (id)photoPath;
- (void)setHasNewMessage:(id)fp8;
- (id)hasNewMessage;
- (void)setLastActiveTimeString:(id)fp8;
- (id)lastActiveTimeString;
- (void)setName:(id)fp8;
- (id)name;
- (void)setMatchID:(id)fp8;
- (id)matchID;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;

@end
