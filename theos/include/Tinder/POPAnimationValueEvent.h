/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "POPAnimationEvent.h"

@interface POPAnimationValueEvent : POPAnimationEvent
{
    id _value;
    id _velocity;
}

- (void)setVelocity:(id)fp8;
- (id)velocity;
- (id)value;
- (void).cxx_destruct;
- (void)_appendDescription:(id)fp8;
- (id)initWithType:(unsigned int)fp8 time:(double)fp12 value:(id)fp20;

@end
