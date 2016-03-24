/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "UITableViewDataSource.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDelegate.h"
#import "UPPayPluginDelegate.h"
#import "IPAYPopupPanelViewDelegate.h"
#import "IPAYCDBaseController.h"

@class IPAYSimpleCDController, UITableView, IPAYMarqueeLabel, IPAYStretchButton, NSString, NSArray, UILabel, UIImageView, UIButton, UIView;

@interface IPAYNormalCDController : IPAYCDBaseController <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate, IPAYPopupPanelViewDelegate, UPPayPluginDelegate> {
	UIView* headView;
	UIView* waresView;
	UILabel* waresNameTypeLabel;
	UILabel* waresNameLabel;
	UIView* priceView;
	UILabel* priceTypeLabel;
	UILabel* priceLabel;
	UIView* actualPriceView;
	UILabel* actualPriceTypeLabel;
	UILabel* actualPriceLabel;
	UIView* balanceView;
	UILabel* balanceTypeLabel;
	UILabel* balanceLabel;
	IPAYStretchButton* rechargeButton;
	UIView* footLineView;
	UITableView* myTableView;
	UIView* messageView;
	UIImageView* messageIconView;
	IPAYMarqueeLabel* messageLabel;
	UIButton* messageCloseButton;
	BOOL isOptionPopViewOpen;
	UIButton* _rigthButton;
	NSArray* _payTypeList;
	IPAYSimpleCDController* _childSimpleCDCtr;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) IPAYSimpleCDController* childSimpleCDCtr;	// G=0xbc3129; S=0xbc3139; 
@property(retain, nonatomic) NSArray* payTypeList;	// G=0xbc30f1; S=0xbc3101; 
@property(retain, nonatomic) UIButton* rigthButton;	// G=0xbc30b9; S=0xbc30c9; 
-(void).cxx_destruct;	// 0xbc3161
-(void)setPortraitConstraints;	// 0xbbffed
-(void)setLandscapeConstraints;	// 0xbbcf29
-(void)anywayScreenPersonalityMethod:(int)method;	// 0xbbcee1
-(BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0xbbce29
-(void)gotoPointPayController:(id)controller;	// 0xbbcc3d
-(void)gotoServiceCenterCtr;	// 0xbbcabd
-(void)gotoSwitchAccountCtr;	// 0xbbc8e5
-(void)gotoSettingPayPwdCtr;	// 0xbbc709
-(void)gotoMinFreeSecretCtr;	// 0xbbc611
-(void)gotoModifyPwdCtr;	// 0xbbc439
-(void)popViewBtnAction:(int)action;	// 0xbbc305
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0xbbbc89
-(id)tableView:(id)view viewForHeaderInSection:(int)section;	// 0xbbb7bd
-(float)tableView:(id)view heightForHeaderInSection:(int)section;	// 0xbbb7b5
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0xbbb671
-(int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0xbbb611
-(int)numberOfSectionsInTableView:(id)tableView;	// 0xbbb5d5
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0xbbb5cd
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;	// 0xbbb52d
-(void)UPPayPluginResult:(id)result;	// 0xbbb441
-(void)appHandleOpenUrlRetMethod:(id)method;	// 0xbbb309
-(void)iapppayVirtualCoinPayWithPayTypeInfo:(id)payTypeInfo;	// 0xbbaee9
-(void)normalCDHandlePayOrderWithPayTypeInfo:(id)payTypeInfo;	// 0xbbae29
-(id)getActualPriceAttributedString:(id)string;	// 0xbbabb1
-(void)popViewTapPopPanelBGView:(id)view;	// 0xbbab9d
-(void)messageTapGestureMethod:(id)method;	// 0xbbaa21
-(void)messageCloseButtonMethod:(id)method;	// 0xbba365
-(void)rechargeButtonMethod:(id)method;	// 0xbba2bd
-(void)normalCDRightButtonMethod:(id)method;	// 0xbb9edd
-(void)normalCDBackMethod:(id)method;	// 0xbb9e5d
-(void)handleLongpressGestureMethod:(id)method;	// 0xbb9e09
-(void)hidePopupPaneViewAnimated:(BOOL)animated;	// 0xbb9cf5
-(void)showPopupView:(id)view;	// 0xbb984d
-(void)resetCurrentUILayout;	// 0xbb94f9
-(void)addLongGestureRecognizerMethod;	// 0xbb940d
-(void)createNormalCDSystemMessageView;	// 0xbb8e09
-(void)createNormalCDTableView;	// 0xbb8c29
-(void)createIapppayCoinAreaView;	// 0xbb85c9
-(void)createNormalCDHeadView;	// 0xbb7a75
-(void)createNavigationView;	// 0xbb76b5
-(void)startRequestPayTypeParamsWithPayType:(id)payType;	// 0xbb6129
-(void)loadAllPayTypeMethodList;	// 0xbb5c71
-(void)initializeAllUIDataMethod;	// 0xbb591d
-(void)didReceiveMemoryWarning;	// 0xbb58f1
-(void)viewWillAppear:(BOOL)view;	// 0xbb57cd
-(void)viewDidLoad;	// 0xbb571d
-(void)refreshCurrentUIMethod:(id)method;	// 0xbb5501
-(void)removeNotificationName;	// 0xbb54a5
-(void)registerNotificationName;	// 0xbb5439
@end
