/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "POPAnimatableProperty.h"

@class NSString;

@interface POPMutableAnimatableProperty : POPAnimatableProperty
{
    NSString *name;
    id readBlock;
    id writeBlock;
    float threshold;
}

- (void)setThreshold:(float)fp8;
- (float)threshold;
- (void)setWriteBlock:(id)fp(null);
- (id)writeBlock;
- (void)setReadBlock:(id)fp(null);
- (id)readBlock;
- (void)setName:(id)fp8;
- (id)name;
- (void).cxx_destruct;

@end

