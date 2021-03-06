/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UPBaseViewController.h"
#import "UPPullListViewDelegate.h"

@class NSDictionary, NSString, UPCheckBoxView;

@interface UPEntrustViewController : UPBaseViewController <UPPullListViewDelegate> {
	BOOL _canGetFollowRules;
	UPCheckBoxView* _licenseBox;
	NSDictionary* _entrustActionButton;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;	// 0xc8b221
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0xc8b1ed
-(void)comunicateToUPMPDidFailWithErrorType:(int)comunicateToUPMP error:(id)error;	// 0xc8aea1
-(void)comunicateToUPMPDidSucceedWithEvent:(int)comunicateToUPMP;	// 0xc8ad15
-(void)pullListAnimationDidStart:(float)pullListAnimation;	// 0xc8aa11
-(void)buttonCancelClicked;	// 0xc8a9d1
-(void)buttonOKClicked;	// 0xc8a8ad
-(void)pushViewControllerToPayingViewController;	// 0xc8a74d
-(void)nextAction:(id)action;	// 0xc8a589
-(float)addEntrustElements:(float)elements;	// 0xc8a1cd
-(void)addSubViews;	// 0xc8a005
-(void)addNavigationBar;	// 0xc89d95
-(void)releaseActions;	// 0xc89d75
-(void)initActions;	// 0xc89bdd
-(void)viewDidUnload;	// 0xc89bb1
-(void)viewDidAppear:(BOOL)view;	// 0xc898c1
-(void)viewDidLoad;	// 0xc8986d
-(void)dealloc;	// 0xc8976d
@end

