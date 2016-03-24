/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UITapGestureRecognizer, UIButton;
@protocol HJLiveConfirmFinishViewDelegate;

__attribute__((visibility("hidden")))
@interface HJLiveConfirmFinishView : XXUnknownSuperclass {
	UITapGestureRecognizer* tap;
	id<HJLiveConfirmFinishViewDelegate> _delegate;
	UIButton* _confirmButton;
	UIButton* _cancelButton;
}
@property(retain, nonatomic) UIButton* cancelButton;	// G=0x3052e5; S=0x3052f5; 
@property(retain, nonatomic) UIButton* confirmButton;	// G=0x3052ad; S=0x3052bd; 
@property(assign, nonatomic) __weak id<HJLiveConfirmFinishViewDelegate> delegate;	// G=0x305279; S=0x305299; 
+(id)createFinishView;	// 0x304e2d
-(void).cxx_destruct;	// 0x30531d
-(void)handleAction:(id)action;	// 0x3051e1
-(void)dismissView;	// 0x3051a5
-(void)showInView:(id)view;	// 0x3050cd
-(void)awakeFromNib;	// 0x304e01
@end
