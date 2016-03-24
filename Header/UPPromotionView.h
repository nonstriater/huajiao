/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UPListViewDelegate.h"
#import "UPPromotionPannelViewDelegate.h"

@class UPLineView, NSDictionary, UPToggleView, UPPromotionPannelViewController, UPListView, NSString, UIViewController, UPLabel, UPDefaultCardView, UIView, NSMutableArray;
@protocol UPPromotionViewDelegate;

@interface UPPromotionView : XXUnknownSuperclass <UPListViewDelegate, UPPromotionPannelViewDelegate> {
	UPListView* _promotionListView;
	UPListView* _instalmentListView;
	UPDefaultCardView* _promotionView;
	UPDefaultCardView* _instalmentView;
	UPLabel* _promotionAmountLabel;
	int _selectIndex;
	NSMutableArray* _promotionLabels;
	float _hideHeight;
	float _totalHeight;
	float _leftMargin;
	UIView* amountLabelBg;
	UPLineView* bottomLine;
	NSString* selectValue;
	BOOL didSelected;
	BOOL isAvailable;
	UIViewController<UPPromotionViewDelegate>* delegate;
	NSDictionary* promotionContent;
	UPToggleView* checkBox;
	unsigned promotionViewType;
	UPPromotionPannelViewController* myPannel;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSDictionary* promotionContent;	// G=0xc97e45; S=0xc97e55; 
@property(retain, nonatomic) UPPromotionPannelViewController* myPannel;	// G=0xc97f15; S=0xc97f25; 
@property(retain, nonatomic) UPToggleView* checkBox;	// G=0xc97ebd; S=0xc97ecd; 
@property(assign, nonatomic) unsigned promotionViewType;	// G=0xc97ef5; S=0xc97f05; 
@property(assign, nonatomic) BOOL isAvailable;	// G=0xc97e9d; S=0xc97ead; 
@property(assign, nonatomic) BOOL didSelected;	// G=0xc97e7d; S=0xc97e8d; 
@property(assign, nonatomic) __weak UIViewController<UPPromotionViewDelegate>* delegate;	// G=0xc97e11; S=0xc97e31; 
-(void).cxx_destruct;	// 0xc97f4d
-(void)panelViewWithCoupon:(id)coupon;	// 0xc979b5
-(void)listViewDidSelectedAtIndex:(int)listView;	// 0xc978c5
-(void)showPromotionListView;	// 0xc97541
-(id)attributedStringFromInfo:(id)info;	// 0xc970d1
-(float)makePromotionAndInstalment;	// 0xc95ed9
-(void)checheAvailableWithContent:(id)content;	// 0xc95e4d
-(void)animationWithStatus:(BOOL)status;	// 0xc95b41
-(id)optionParams;	// 0xc95831
-(id)initWithFrame:(CGRect)frame promotion:(id)promotion leftMargin:(float)margin andType:(unsigned)type;	// 0xc955d1
-(void)dealloc;	// 0xc95565
@end
