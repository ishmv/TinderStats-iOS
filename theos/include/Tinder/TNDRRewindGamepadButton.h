/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "TNDRGamepadButton.h"

@interface TNDRRewindGamepadButton : TNDRGamepadButton
{
    BOOL _pseudoEnabled;
}

- (BOOL)pseudoEnabled;
- (void)animateIcon;
- (void)setPseudoEnabled:(BOOL)fp8 animated:(BOOL)fp12;
- (void)setPseudoEnabled:(BOOL)fp8;
- (void)setEnabled:(BOOL)fp8 forDuration:(double)fp12 completion:(id)fp(null);
- (void)setEnabled:(BOOL)fp8;
- (id)iconLayerForSnapshot;
- (void)setupIconLayer;
- (id)initWithGamepadWell:(id)fp8 gamepadType:(unsigned int)fp12;

@end

