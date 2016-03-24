/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, WXRulerView, UIButton, UIView, UIScrollView;
@protocol rotationViewDelegate;

__attribute__((visibility("hidden")))
@interface WXRotatingView : XXUnknownSuperclass {
	float _rotationAngle;
	id<rotationViewDelegate> _delegate;
	UILabel* _label;
	UIScrollView* _rotationMiddleView;
	UIButton* _cancleBtn;
	UIButton* _sureBtn;
	WXRulerView* _rulerview;
	UIView* _markView;
	float _offset;
}
@property(assign, nonatomic) float offset;	// G=0x3fdb0d; S=0x3fdb1d; 
@property(retain, nonatomic) UIView* markView;	// G=0x3fdad5; S=0x3fdae5; 
@property(retain, nonatomic) WXRulerView* rulerview;	// G=0x3fda9d; S=0x3fdaad; 
@property(retain, nonatomic) UIButton* sureBtn;	// G=0x3fda65; S=0x3fda75; 
@property(retain, nonatomic) UIButton* cancleBtn;	// G=0x3fda2d; S=0x3fda3d; 
@property(retain, nonatomic) UIScrollView* rotationMiddleView;	// G=0x3fd9f5; S=0x3fda05; 
@property(retain, nonatomic) UILabel* label;	// G=0x3fd9bd; S=0x3fd9cd; 
@property(assign, nonatomic) __weak id<rotationViewDelegate> delegate;	// G=0x3fd989; S=0x3fd9a9; 
@property(assign, nonatomic) float rotationAngle;	// G=0x3fd979; S=0x3fd129; 
-(void).cxx_destruct;	// 0x3fdb2d
-(void)layoutSubviews;	// 0x3fd489
-(void)sureWithBtn:(id)btn;	// 0x3fd3dd
-(void)cancleWithBtn:(id)btn;	// 0x3fd335
-(void)rotation:(id)rotation;	// 0x3fd269
-(id)initWithCoder:(id)coder;	// 0x3fcc49
@end
