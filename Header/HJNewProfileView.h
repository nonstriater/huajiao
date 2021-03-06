/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIGestureRecognizerDelegate.h"
#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIView, HJUserProfilesResponse, HJProfileView;

__attribute__((visibility("hidden")))
@interface HJNewProfileView : XXUnknownSuperclass <UIGestureRecognizerDelegate> {
	UIView* _mask0;
	HJProfileView* _profileView;
	id _closeBlock;
	id _enterBlock;
	HJUserProfilesResponse* _profile;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) HJUserProfilesResponse* profile;	// G=0x138341; S=0x138351; 
@property(copy, nonatomic) id enterBlock;	// G=0x13831d; S=0x138331; 
@property(copy, nonatomic) id closeBlock;	// G=0x1382f9; S=0x13830d; 
@property(retain, nonatomic) HJProfileView* profileView;	// G=0x1382c1; S=0x1382d1; 
@property(retain, nonatomic) UIView* mask0;	// G=0x138289; S=0x138299; 
+(void)dismissWithAnimated:(BOOL)animated complete:(id)complete;	// 0x136a81
+(void)showProfile:(id)profile inView:(id)view onClose:(id)close enterDetail:(id)detail;	// 0x136761
+(void)destory;	// 0x13667d
+(id)instance;	// 0x1364f9
-(void).cxx_destruct;	// 0x138379
-(BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0x138239
-(void)onTap:(id)tap;	// 0x13820d
-(void)onClickEnterDetail;	// 0x13819d
-(void)onClickFollow;	// 0x137d61
-(void)onClickClose;	// 0x137c91
-(void)updateFollowButton;	// 0x137bb1
-(void)updateUI;	// 0x1372ad
-(void)fetchUserInfo;	// 0x1370b5
-(id)initWithFrame:(CGRect)frame;	// 0x136c7d
@end

