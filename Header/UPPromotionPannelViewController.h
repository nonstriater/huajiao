/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UPBaseViewController.h"
#import "UPPromotionTabBarViewDelegate.h"

@class NSString, UPPromotionTabBarViewController, UIButton, UIView, UPPromotionContentView, UITapGestureRecognizer, NSDictionary;
@protocol UPPromotionPannelViewDelegate;

@interface UPPromotionPannelViewController : UPBaseViewController <UPPromotionTabBarViewDelegate> {
	UIButton* closeButton;
	UIView* maskView;
	UITapGestureRecognizer* maskGesture;
	UIView* pannelView;
	NSDictionary* myContentDic;
	BOOL firstGetPoints;
	BOOL firstOpenPannel;
	float pannelHeight;
	int scoreRequestCount;
	UPPromotionTabBarViewController* _myTabBar;
	UPPromotionContentView* _myContentView;
	id<UPPromotionPannelViewDelegate> _myController;
	NSString* _uuid;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* uuid;	// G=0xc7659d; S=0xc765ad; 
@property(assign, nonatomic) __weak id<UPPromotionPannelViewDelegate> myController;	// G=0xc76569; S=0xc76589; 
@property(retain, nonatomic) UPPromotionContentView* myContentView;	// G=0xc76531; S=0xc76541; 
@property(retain, nonatomic) UPPromotionTabBarViewController* myTabBar;	// G=0xc764f9; S=0xc76509; 
-(void).cxx_destruct;	// 0xc765d5
-(void)comunicateToUPMPDidFailWithErrorType:(int)comunicateToUPMP error:(id)error;	// 0xc76451
-(void)comunicateToUPMPDidSucceedWithEvent:(int)comunicateToUPMP data:(id)data;	// 0xc75e19
-(void)couponFormatErr:(id)err;	// 0xc75dad
-(void)couponViewVerify:(id)verify;	// 0xc75cb9
-(void)panelViewSelectCoupon:(id)coupon;	// 0xc75bf5
-(void)promotionTabBarSelect:(unsigned)select;	// 0xc75909
-(void)getCoupon:(id)coupon andElement:(id)element;	// 0xc758b9
-(void)getScore:(id)score andUUID:(id)uuid;	// 0xc7583d
-(void)closeAction;	// 0xc75475
-(void)didReceiveMemoryWarning;	// 0xc75449
-(void)showPannel;	// 0xc751b1
-(void)viewDidLoad;	// 0xc747f5
-(void)dealloc;	// 0xc7475d
-(id)initWithContent:(id)content;	// 0xc745a9
@end

