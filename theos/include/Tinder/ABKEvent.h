/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "NSCoding-Protocol.h"

@class NSDate;

@interface ABKEvent : _ABCreateStringWithAddressDictionary <NSCoding>
{
    NSDate *_date;
}

- (void)setDate:(id)fp8;
- (id)date;
- (void).cxx_destruct;
- (id)getDataAsJson;
- (id)getType;
- (id)proxyForJson;
- (id)init;
- (id)initWithCoder:(id)fp8;
- (void)encodeWithCoder:(id)fp8;

@end

