/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, UPPromotionCouponView, UIView, NSMutableDictionary;

@interface UPPromotionContentView : XXUnknownSuperclass {
	NSMutableDictionary* myListControllers;
	NSArray* myContentDics;
	UPPromotionCouponView* couponView;
	UIView* loadingView;
}
-(void).cxx_destruct;	// 0xc4da11
-(void)showWalletMessage:(id)message atTabIndex:(int)tabIndex;	// 0xc4d751
-(void)hideMessage;	// 0xc4d719
-(void)showMessage:(id)message;	// 0xc4d485
-(void)selectListViewDefaultCell:(id)cell;	// 0xc4d429
-(void)deselectAllListView;	// 0xc4d309
-(void)showNoCoupon:(id)coupon;	// 0xc4d0b1
-(void)refreshCouponViewWithData:(id)data;	// 0xc4d065
-(void)refreshScoreListWithData:(id)data;	// 0xc4cfed
-(void)addSubviews;	// 0xc4c921
-(id)initWithFrame:(CGRect)frame andContent:(id)content;	// 0xc4c865
@end

