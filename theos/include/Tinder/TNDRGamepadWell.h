/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@interface TNDRGamepadWell : _ABCreateStringWithAddressDictionary
{
    float _relativeRadius;
    float _renderedGamepadWidth;
    unsigned int _gamepadType;
    float _optimalButtonRadius;
    struct CGPoint _relativeCenter;
}

- (void)setOptimalButtonRadius:(float)fp8;
- (float)optimalButtonRadius;
- (void)setGamepadType:(unsigned int)fp8;
- (unsigned int)gamepadType;
- (void)setRenderedGamepadWidth:(float)fp8;
- (float)renderedGamepadWidth;
- (void)setRelativeRadius:(float)fp8;
- (float)relativeRadius;
- (void)setRelativeCenter:(struct CGPoint)fp8;
- (struct CGPoint)relativeCenter;
- (struct CGPoint)renderedCenter;
- (float)renderedRadius;
- (id)initWithRelativeCenter:(struct CGPoint)fp8 relativeRadius:(float)fp16 renderedGamepadWidth:(float)fp20;

@end

