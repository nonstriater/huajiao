/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UPLineView, UIImageView, UPOrderView;
@protocol UPPullListViewDelegate;

@interface UPPullListView : XXUnknownSuperclass {
	float _keyValueHeight;
	float _orderViewHeight;
	int _style;
	BOOL _hidden;
	BOOL _expand;
	BOOL _animationDidStop;
	BOOL _touchable;
	CGSize _arrowSize;
	CGRect _originFrame;
	float _viewHeight;
	UIImageView* _arrowView;
	id<UPPullListViewDelegate> _delegate;
	UPOrderView* _orderView;
	float _arrowOriginYOffset;
	UPLineView* _bottomLine;
	int _pullListStyle;
	float _visibleHeiht;
}
-(void).cxx_destruct;	// 0xc5d695
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0xc5d3c1
-(void)touchesEnded:(id)ended withEvent:(id)event;	// 0xc5d219
-(void)animationWithDlegate:(id)dlegate OnFrame:(CGRect)frame;	// 0xc5cf3d
-(void)changeViewFrame:(CGRect)frame;	// 0xc5cd25
-(void)addOrderInfo;	// 0xc5c881
-(void)addBtnArrow;	// 0xc5c699
-(float)arrowWidth;	// 0xc5c60d
-(void)addLines;	// 0xc5c3e9
-(id)initWithFrame:(CGRect)frame delegate:(id)delegate style:(int)style;	// 0xc5c1ad
@end
