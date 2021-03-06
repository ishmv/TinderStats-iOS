/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSFetchedResultsController;

@interface TNDRDataInspector : _ABCreateStringWithAddressDictionary
{
    NSFetchedResultsController *_frcGroups;
    NSFetchedResultsController *_frcUsers;
    NSFetchedResultsController *_frcMatchesNew;
    NSFetchedResultsController *_frcMatchesMessages;
}

+ (id)di;
- (void)setFrcMatchesMessages:(id)fp8;
- (id)frcMatchesMessages;
- (void)setFrcMatchesNew:(id)fp8;
- (id)frcMatchesNew;
- (void)setFrcUsers:(id)fp8;
- (id)frcUsers;
- (void)setFrcGroups:(id)fp8;
- (id)frcGroups;
- (void).cxx_destruct;
- (void)faultAllMatches:(id)fp8 inContext:(id)fp12;
- (void)faultAllUsers:(id)fp8 inContext:(id)fp12;
- (void)faultAllGroups:(id)fp8 inContext:(id)fp12;
- (id)groupRecommendationsInContext:(id)fp8;
- (id)userRecommendationsInContext:(id)fp8;
- (id)groupsWithID:(id)fp8 inContext:(id)fp12;
- (id)usersWithID:(id)fp8 inContext:(id)fp12;
- (id)allCurrentUserGroupsInContext:(id)fp8;
- (id)allGroupIDsInContext:(id)fp8;
- (id)allGroupsInContext:(id)fp8;
- (id)myGroupInContext:(id)fp8;
- (id)groupRecsInContext:(id)fp8;
- (id)userRecsInContext:(id)fp8;
- (id)matchesMessagesInContext:(id)fp8;
- (id)matchesMessages;
- (id)matchesNewInContext:(id)fp8;
- (id)matchesNew;
- (unsigned int)countTotalRecs;
- (unsigned int)countGroupRecs;
- (unsigned int)countUserRecs;
- (void)setupMatchesFRC;
- (void)setupGroupFRC;
- (void)setupUserFRC;
- (id)defaultContext;
- (id)dm;
- (void)setup;
- (id)init;

@end

