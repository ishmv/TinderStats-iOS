/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "POPPropertyAnimation.h"

@interface POPBasicAnimation : POPPropertyAnimation
{
}

+ (id)defaultAnimation;
+ (id)easeInEaseOutAnimation;
+ (id)easeOutAnimation;
+ (id)easeInAnimation;
+ (id)linearAnimation;
+ (id)animationWithPropertyNamed:(id)fp8;
+ (id)animation;
- (void)_appendDescription:(id)fp8 debug:(BOOL)fp12;
- (void)setTimingFunction:(id)fp8;
- (id)timingFunction;
- (void)setDuration:(double)fp8;
- (double)duration;
- (id)init;
- (void)_initState;
- (id)copyWithZone:(struct _NSZone *)fp8;

@end

