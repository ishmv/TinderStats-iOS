/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "ABKEvent.h"

@class NSDictionary, NSString;

@interface ABKCustomEvent : ABKEvent
{
    NSString *_name;
    NSDictionary *_properties;
}

- (void)setProperties:(id)fp8;
- (id)properties;
- (void)setName:(id)fp8;
- (id)name;
- (void).cxx_destruct;
- (id)getDataAsJson;
- (id)getType;
- (id)initWithName:(id)fp8 properties:(id)fp12;
- (id)initWithCoder:(id)fp8;
- (void)encodeWithCoder:(id)fp8;

@end

