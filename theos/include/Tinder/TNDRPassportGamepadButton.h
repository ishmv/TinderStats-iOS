/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "TNDRGamepadButton.h"

@interface TNDRPassportGamepadButton : TNDRGamepadButton
{
    unsigned int _buttonState;
}

- (unsigned int)buttonState;
- (void)updateIcon;
- (void)travelingStateChanged:(id)fp8;
- (void)setButtonState:(unsigned int)fp8;
- (id)initWithGamepadWell:(id)fp8 gamepadType:(unsigned int)fp12;

@end
