/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface TLProperties : _ABCreateStringWithAddressDictionary
{
    NSString *_appName;
    NSString *_sessionID;
    NSString *_lastSessionID;
    NSDictionary *_appUser;
    NSString *_themeName;
    NSString *_clientID;
    NSDictionary *_project;
    NSDictionary *_views;
    NSDictionary *_elements;
    NSDictionary *_initializeElements;
    NSDictionary *_cellElements;
    NSDictionary *_styles;
    NSDictionary *_theme;
    NSDictionary *_propertyTypes;
    NSDictionary *_releaseInfo;
    NSDictionary *_analyticsSettings;
    NSDictionary *_images;
    NSDictionary *_emitClasses;
    NSDictionary *_codeExperiments;
    NSDictionary *_namedExperiments;
    NSDictionary *_pushAnalyticsSources;
    NSDictionary *_dynamicVariables;
    NSArray *_flows;
    NSArray *_experiments;
    NSArray *_hotfixes;
    NSArray *_experimentIDs;
    NSArray *_experimentAndVariationNames;
    NSArray *_variationIDs;
    NSArray *_regions;
    NSArray *_pushCampaigns;
    NSDictionary *_disabledEvents;
    NSNumber *_isFuzzyMatchingEnabled;
    id <TLPropertiesDelegate> _delegate;
    NSMutableDictionary *_sortedElementDic;
}

- (void)setSortedElementDic:(id)fp8;
- (id)sortedElementDic;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setIsFuzzyMatchingEnabled:(id)fp8;
- (id)isFuzzyMatchingEnabled;
- (void)setDisabledEvents:(id)fp8;
- (id)disabledEvents;
- (void)setPushCampaigns:(id)fp8;
- (id)pushCampaigns;
- (void)setRegions:(id)fp8;
- (id)regions;
- (void)setVariationIDs:(id)fp8;
- (id)variationIDs;
- (void)setExperimentAndVariationNames:(id)fp8;
- (id)experimentAndVariationNames;
- (void)setExperimentIDs:(id)fp8;
- (id)experimentIDs;
- (void)setHotfixes:(id)fp8;
- (id)hotfixes;
- (void)setExperiments:(id)fp8;
- (id)experiments;
- (void)setFlows:(id)fp8;
- (id)flows;
- (void)setDynamicVariables:(id)fp8;
- (id)dynamicVariables;
- (void)setPushAnalyticsSources:(id)fp8;
- (id)pushAnalyticsSources;
- (void)setNamedExperiments:(id)fp8;
- (id)namedExperiments;
- (void)setCodeExperiments:(id)fp8;
- (id)codeExperiments;
- (void)setEmitClasses:(id)fp8;
- (id)emitClasses;
- (void)setImages:(id)fp8;
- (id)images;
- (void)setAnalyticsSettings:(id)fp8;
- (id)analyticsSettings;
- (void)setReleaseInfo:(id)fp8;
- (id)releaseInfo;
- (void)setPropertyTypes:(id)fp8;
- (id)propertyTypes;
- (void)setTheme:(id)fp8;
- (id)theme;
- (void)setStyles:(id)fp8;
- (id)styles;
- (void)setCellElements:(id)fp8;
- (id)cellElements;
- (void)setInitializeElements:(id)fp8;
- (id)initializeElements;
- (id)elements;
- (void)setViews:(id)fp8;
- (id)views;
- (void)setProject:(id)fp8;
- (id)project;
- (void)setClientID:(id)fp8;
- (id)clientID;
- (void)setThemeName:(id)fp8;
- (id)themeName;
- (void)setAppUser:(id)fp8;
- (id)appUser;
- (void)setLastSessionID:(id)fp8;
- (id)lastSessionID;
- (void)setSessionID:(id)fp8;
- (id)sessionID;
- (void)setAppName:(id)fp8;
- (id)appName;
- (void).cxx_destruct;
- (void)removeSortedElementForDataType:(id)fp8 key:(id)fp12;
- (void)updateDataWithDictionary:(id)fp8;
- (id)getAnalyticsPropertiesForElement:(id)fp8 analyticsSource:(id)fp12;
- (id)propertyTypeForPropertyName:(id)fp8;
- (id)styleKeyForElementKey:(id)fp8;
- (id)getPropertiesForElementKey:(id)fp8 styleKey:(id)fp12 state:(id)fp16;
- (id)getPropertiesForElement:(id)fp8;
- (BOOL)checkPropertyDicIsValid:(id)fp8;
- (id)mergeNestedElementProperties:(id)fp8 styleProperties:(id)fp12;
- (void)findInitElements;
- (void)setElements:(id)fp8;
- (id)initWithJSONDic:(id)fp8;

@end

