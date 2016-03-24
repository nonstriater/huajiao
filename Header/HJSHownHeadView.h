/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "living-Structs.h"
#import "HJResizeViewDelegate.h"

@class NSString, HJResizeView, UIView, UIWindow;
@protocol HJSHownHeadViewDelegate;

__attribute__((visibility("hidden")))
@interface HJSHownHeadView : XXUnknownSuperclass <HJResizeViewDelegate> {
	UIWindow* window;
	id<HJSHownHeadViewDelegate> _delegate;
	UIView* _maskView;
	HJResizeView* _resizingView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) HJResizeView* resizingView;	// G=0x361ab9; S=0x361ac9; 
@property(retain, nonatomic) UIView* maskView;	// G=0x361a81; S=0x361a91; 
@property(assign, nonatomic) __weak id<HJSHownHeadViewDelegate> delegate;	// G=0x361a4d; S=0x361a6d; 
-(void).cxx_destruct;	// 0x361af1
-(void)dealloc;	// 0x361a21
-(void)tapImageViewTappedWithObject:(id)object;	// 0x361a11
-(void)showHeadImage;	// 0x3618a1
-(void)dismissHeadImage;	// 0x3615a9
-(void)show;	// 0x3613e5
-(void)layoutSubviews;	// 0x3613b9
-(void)loadView;	// 0x360f89
-(id)initWithFrame:(CGRect)frame;	// 0x360f51
@end
