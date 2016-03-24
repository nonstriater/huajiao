/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class LJButton, UIButton;
@protocol toneViewDelegate;

__attribute__((visibility("hidden")))
@interface WXToneView : XXUnknownSuperclass {
	id<toneViewDelegate> _delegate;
	LJButton* _originalBtn;
	LJButton* _yellowBtn;
	LJButton* _orangeBtn;
	LJButton* _redBtn;
	LJButton* _pinkBtn;
	LJButton* _purpleBtn;
	LJButton* _blueBtn;
	LJButton* _cyanBtn;
	LJButton* _greenBtn;
	UIButton* _cancleBtn;
	UIButton* _sureBtn;
}
@property(assign, nonatomic) __weak UIButton* sureBtn;	// G=0x3f84f1; S=0x3f8511; 
@property(assign, nonatomic) __weak UIButton* cancleBtn;	// G=0x3f84bd; S=0x3f84dd; 
@property(assign, nonatomic) __weak LJButton* greenBtn;	// G=0x3f8489; S=0x3f84a9; 
@property(assign, nonatomic) __weak LJButton* cyanBtn;	// G=0x3f8455; S=0x3f8475; 
@property(assign, nonatomic) __weak LJButton* blueBtn;	// G=0x3f8421; S=0x3f8441; 
@property(assign, nonatomic) __weak LJButton* purpleBtn;	// G=0x3f83ed; S=0x3f840d; 
@property(assign, nonatomic) __weak LJButton* pinkBtn;	// G=0x3f83b9; S=0x3f83d9; 
@property(assign, nonatomic) __weak LJButton* redBtn;	// G=0x3f8385; S=0x3f83a5; 
@property(assign, nonatomic) __weak LJButton* orangeBtn;	// G=0x3f8351; S=0x3f8371; 
@property(assign, nonatomic) __weak LJButton* yellowBtn;	// G=0x3f831d; S=0x3f833d; 
@property(assign, nonatomic) __weak LJButton* originalBtn;	// G=0x3f82e9; S=0x3f8309; 
@property(assign, nonatomic) __weak id<toneViewDelegate> delegate;	// G=0x3f82b5; S=0x3f82d5; 
-(void).cxx_destruct;	// 0x3f8525
-(void)layoutSubviews;	// 0x3f7df1
-(void)greenWithBtn:(id)btn;	// 0x3f7d11
-(void)cyanWithBtn:(id)btn;	// 0x3f7c31
-(void)blueWithBtn:(id)btn;	// 0x3f7b51
-(void)purpleWithBtn:(id)btn;	// 0x3f7a71
-(void)pinkWithBtn:(id)btn;	// 0x3f7991
-(void)redWithBtn:(id)btn;	// 0x3f78b1
-(void)orangeWithBtn:(id)btn;	// 0x3f77d1
-(void)yellowWithBtn:(id)btn;	// 0x3f76f1
-(void)originalWithBtn:(id)btn;	// 0x3f7611
-(void)sureWithBtn:(id)btn;	// 0x3f7555
-(void)cancleWithBtn:(id)btn;	// 0x3f7499
-(void)selectedWith:(int)with;	// 0x3f72a5
-(id)initWithCoder:(id)coder;	// 0x3f6739
@end

