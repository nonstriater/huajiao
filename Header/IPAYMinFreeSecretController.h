/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "IPAYBaseController.h"

@class NSString, UILabel, IPAYStretchButton, UIView;

@interface IPAYMinFreeSecretController : IPAYBaseController {
	UIView* promptView;
	UILabel* promptLabel;
	IPAYStretchButton* mOptionView;
	UILabel* optionLabel;
	NSString* _limitCode;
}
@property(retain, nonatomic) NSString* limitCode;	// G=0xbd2bc5; S=0xbd2bd5; 
-(void).cxx_destruct;	// 0xbd2bfd
-(void)dismissMySelfViewController;	// 0xbd2bb1
-(void)makeRequestChangeLimitAmount:(id)amount;	// 0xbd27a1
-(void)refreshMinLimitMethod:(id)method;	// 0xbd26cd
-(void)removeMinFreeSecretNotiNameObserver;	// 0xbd2671
-(void)addMinFreeSecretNotiNameObserver;	// 0xbd2605
-(void)changeMinFreeScrectMethod:(id)method;	// 0xbd24f9
-(void)backButtonMethod:(id)method;	// 0xbd24a5
-(void)resetCurrentViewLayoutMethod;	// 0xbd1ecd
-(void)createMinFreeSecretView;	// 0xbd0f89
-(void)createPromptView;	// 0xbd048d
-(void)createNavigationBarView;	// 0xbd02b9
-(void)dealloc;	// 0xbd0279
-(void)didReceiveMemoryWarning;	// 0xbd024d
-(void)viewWillAppear:(BOOL)view;	// 0xbd020d
-(void)viewDidLoad;	// 0xbd0139
@end
