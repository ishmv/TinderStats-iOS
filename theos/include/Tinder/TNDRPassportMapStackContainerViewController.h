/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "TNDRPassportMapSearchViewControllerDelegate-Protocol.h"
#import "TNDRPassportPaywallDelegate-Protocol.h"
#import "TNDRURLNavigableProtocol-Protocol.h"

@class CLLocation, MKPlacemark, NSURLSessionDataTask, TNDRPassportStackContainerView, TNDRPassportStackViewController;

@interface TNDRPassportMapStackContainerViewController : _ABCreateStringWithAddressDictionary <TNDRPassportMapSearchViewControllerDelegate, TNDRPassportPaywallDelegate, TNDRURLNavigableProtocol>
{
    TNDRPassportStackContainerView *_containerView;
    TNDRPassportStackViewController *_stackViewController;
    CLLocation *_selectedLocation;
    MKPlacemark *_selectedPlacemark;
    NSURLSessionDataTask *_queuedTravelDataTask;
}

+ (id)viewControllerNavigationKey;
- (void)setQueuedTravelDataTask:(id)fp8;
- (id)queuedTravelDataTask;
- (void)setSelectedPlacemark:(id)fp8;
- (id)selectedPlacemark;
- (void)setSelectedLocation:(id)fp8;
- (id)selectedLocation;
- (void)setStackViewController:(id)fp8;
- (id)stackViewController;
- (void)setContainerView:(id)fp8;
- (id)containerView;
- (void).cxx_destruct;
- (void)didSelectLocationToTravelTo:(id)fp8 placemark:(id)fp12 predeterminedTitle:(id)fp16 predeterminedDescription:(id)fp20 completion:(id)fp(null);
- (void)didSelectToStopTravelingCompletion:(id)fp(null);
- (void)didSelectToCloseMapView;
- (void)willEndSearching;
- (void)didStartSearching;
- (void)viewDidLoad;

@end

