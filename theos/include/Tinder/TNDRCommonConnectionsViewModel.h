/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "TNDRThumbnailViewModel.h"

@class NSArray;

@interface TNDRCommonConnectionsViewModel : TNDRThumbnailViewModel
{
    BOOL _currentUser;
    int _currentUserConnectionCount;
    int _firstDegreesCount;
    int _secondDegreesCount;
    int _thirdDegreesCount;
    NSArray *_connectionsArray;
}

- (void)setConnectionsArray:(id)fp8;
- (id)connectionsArray;
- (int)thirdDegreesCount;
- (int)secondDegreesCount;
- (int)firstDegreesCount;
- (void)setCurrentUserConnectionCount:(int)fp8;
- (int)currentUserConnectionCount;
- (void)setCurrentUser:(BOOL)fp8;
- (BOOL)isCurrentUser;
- (void).cxx_destruct;
- (id)sortedArrayFromJSON:(id)fp8;
- (BOOL)isJSONFullyValidData:(id)fp8;
- (void)parseDataFromJSON:(id)fp8;
- (id)connectionDataForIndexPath:(id)fp8;
- (int)count;
- (id)initWithTNDRUser:(id)fp8;

@end

