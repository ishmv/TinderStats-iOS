/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "POPAnimatableProperty.h"

@class NSString;

@interface POPConcreteAnimatableProperty : POPAnimatableProperty
{
    NSString *name;
    id readBlock;
    id writeBlock;
    float threshold;
}

- (float)threshold;
- (id)writeBlock;
- (id)readBlock;
- (id)name;
- (void).cxx_destruct;
- (id)initWithName:(id)fp8 readBlock:(id)fp(null) writeBlock:(void)fp12 threshold:(id)fp(null);

@end
