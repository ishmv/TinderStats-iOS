/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class ABKDevice, ABKLocationManager, ABKServerConfig, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSObject, NSOperationQueue, NSString;

@interface ABKPersistentData : _ABCreateStringWithAddressDictionary
{
    NSString *_userID;
    BOOL _shouldRequestConfigInNextRequest;
    BOOL _placeIQDeviceIDUpdated;
    NSString *_serverUrl;
    NSString *_deviceIdentifier;
    NSString *_pushToken;
    NSString *_placeIQID;
    NSString *_watchModel;
    ABKDevice *_lastSentDevice;
    NSArray *_feedArray;
    NSDate *_feedArrayUpdateTime;
    NSMutableDictionary *_userInfoPerUser;
    NSDictionary *_dictionarySentToServerForCurrentUser;
    ABKServerConfig *_serverConfig;
    ABKLocationManager *_locationManager;
    int _sessionTimeout;
    NSMutableDictionary *_sessionsPerUser;
    NSString *_userDefaultsKey;
    NSOperationQueue *_userDefaultsSynchronousOperationQueue;
    NSObject *_persistentDataLock;
}

+ (id)getKeyForUserWithID:(id)fp8;
- (void)setPersistentDataLock:(id)fp8;
- (id)persistentDataLock;
- (void)setUserDefaultsSynchronousOperationQueue:(id)fp8;
- (id)userDefaultsSynchronousOperationQueue;
- (void)setUserDefaultsKey:(id)fp8;
- (id)userDefaultsKey;
- (void)setSessionsPerUser:(id)fp8;
- (id)sessionsPerUser;
- (void)setPlaceIQDeviceIDUpdated:(BOOL)fp8;
- (BOOL)placeIQDeviceIDUpdated;
- (void)setSessionTimeout:(int)fp8;
- (int)sessionTimeout;
- (void)setLocationManager:(id)fp8;
- (id)locationManager;
- (BOOL)shouldRequestConfigInNextRequest;
- (void)setServerConfig:(id)fp8;
- (id)serverConfig;
- (void)setDictionarySentToServerForCurrentUser:(id)fp8;
- (id)dictionarySentToServerForCurrentUser;
- (void)setUserInfoPerUser:(id)fp8;
- (id)userInfoPerUser;
- (void)setFeedArrayUpdateTime:(id)fp8;
- (id)feedArrayUpdateTime;
- (void)setFeedArray:(id)fp8;
- (id)feedArray;
- (void)setLastSentDevice:(id)fp8;
- (id)lastSentDevice;
- (void)setWatchModel:(id)fp8;
- (id)watchModel;
- (id)placeIQID;
- (void)setPushToken:(id)fp8;
- (id)pushToken;
- (void)setDeviceIdentifier:(id)fp8;
- (id)serverUrl;
- (void).cxx_destruct;
- (void)addPlaceIQIDToCurrentUserDictionary;
- (void)setPlaceIQID:(id)fp8;
- (void)markConfigRequested;
- (void)removeSentSessionsFromPersistentData:(id)fp8 forUserWithID:(id)fp12;
- (void)markCardViewed:(id)fp8;
- (void)waitUntilAllOperationsAreFinished;
- (unsigned int)indexOfObjectWithGuid:(id)fp8 inArray:(id)fp12;
- (id)getUserDictionaryForUserWithID:(id)fp8;
- (id)getUserDictionaryForCurrentUser;
- (void)setSessionListForCurrentUser:(id)fp8;
- (id)getSessionListForUserWithID:(id)fp8;
- (id)getSessionListForCurrentUser;
- (BOOL)changeCurrentUserID:(id)fp8;
- (id)currentUserID;
- (void)processUserDictionarySentToServer:(id)fp8 forUserWithID:(id)fp12;
- (void)persistDiffOfUserAgainstLastSentToServer:(id)fp8;
- (void)setPlistOverrides;
- (void)synchronizeDataToUserDefaults:(id)fp8;
- (id)dataDictionaryForOperationQueueFromPersistentData:(id)fp8;
- (void)addUserDefaultSynchronizationOperationToQueue;
- (void)addSessionEndTime:(id)fp8 forGuid:(id)fp12;
- (BOOL)addNewSessionForCurrentUserWithIgnoreSessionTimeout:(BOOL)fp8;
- (id)deviceToSendToServer;
- (id)grabInfoFromUserDefaultsWithKey:(id)fp8;
- (void)updateConfigValues:(id)fp8;
- (void)updateFeedArray:(id)fp8;
- (id)deviceIdentifier;
- (void)dealloc;
- (id)initFromUserDefaultsWithUserDefaultsKey:(id)fp8;
- (id)initWithAppboyOptions:(id)fp8;
- (id)init;
- (id)initFromUserDefaultsWithUserDefaultsKey:(id)fp8 andAppboyOptions:(id)fp12;

@end

