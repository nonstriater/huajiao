/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIGestureRecognizerDelegate.h"
#import "HJBaseUserInfoViewDelegate.h"
#import "HJUserDetailListViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, HJUserInfoView, UIView, HJUserDetailView;

__attribute__((visibility("hidden")))
@interface HJUserProfileView : XXUnknownSuperclass <HJBaseUserInfoViewDelegate, HJUserDetailListViewDelegate, UIGestureRecognizerDelegate> {
	UIView* _containerView;
	HJUserInfoView* _userInfoView;
	BOOL _shown;
	UIView* _maskView;
	HJUserDetailView* _detailView;
	NSString* _uid;
	BOOL _isAnchor;
	BOOL _hasPunished;
	id _mainPageActionBlock;
	id _punishmentActionBlock;
	id _tellHimActionBlock;
	id _sendGiftAction;
	NSString* _location;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign) BOOL hasPunished;	// G=0x36d4d1; S=0x36d4e5; 
@property(assign) BOOL isAnchor;	// G=0x36d4ad; S=0x36d4c1; 
@property(retain, nonatomic) NSString* location;	// G=0x36d475; S=0x36d485; 
@property(copy, nonatomic) id sendGiftAction;	// G=0x36d451; S=0x36d465; 
@property(copy, nonatomic) id tellHimActionBlock;	// G=0x36d42d; S=0x36d441; 
@property(copy, nonatomic) id punishmentActionBlock;	// G=0x36d409; S=0x36d41d; 
@property(copy, nonatomic) id mainPageActionBlock;	// G=0x36d3e5; S=0x36d3f9; 
+(void)dismissWithoutAnimation;	// 0x36b5ed
+(void)dismiss;	// 0x36b33d
+(void)show:(id)show isAnchor:(BOOL)anchor hasPunished:(BOOL)punished punishmentAction:(id)action tellHimAction:(id)action5;	// 0x36b2dd
+(void)show:(id)show isAnchor:(BOOL)anchor location:(id)location hasPunished:(BOOL)punished punishmentAction:(id)action tellHimAction:(id)action6;	// 0x36b169
+(void)show:(id)show isAnchor:(BOOL)anchor hasPunished:(BOOL)punished mainPageAction:(id)action punishmentAction:(id)action5 tellHimAction:(id)action6 sendGiftAction:(id)action7;	// 0x36afb9
+(void)show:(id)show mainPageAction:(id)action tellHimAction:(id)action3 sendGiftAction:(id)action4;	// 0x36af51
+(void)show:(id)show;	// 0x36ae49
+(id)sharedInstance;	// 0x36ad89
-(void).cxx_destruct;	// 0x36d4f5
-(BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0x36d391
-(void)listView:(id)view didSelectUserID:(id)anId;	// 0x36d255
-(void)updateArrowWithPageIndex:(int)pageIndex;	// 0x36d19d
-(void)listView:(id)view didScrollToPageIndex:(int)pageIndex;	// 0x36d13d
-(void)showProfile:(id)profile;	// 0x36c7dd
-(void)dealloc;	// 0x36c75d
-(void)onTapDetailMask;	// 0x36c6a9
-(void)_removeProfile;	// 0x36c641
-(void)_dismissProfile;	// 0x36c601
-(void)applicationDidEnterBackground;	// 0x36c5f1
-(void)dismissProfile:(id)profile;	// 0x36c3c1
-(void)_dismissDetail;	// 0x36c381
-(void)dismissDetail:(id)detail;	// 0x36c151
-(void)showDetailWithUser:(id)user type:(unsigned)type complete:(id)complete;	// 0x36b839
-(void)removeProfile;	// 0x36b641
-(void)removeProfileWithoutAnimation;	// 0x36b631
-(id)init;	// 0x36b551
-(void)onTapTellHimButton:(id)button user:(id)user;	// 0x36b4fd
-(void)onTapMainPageAction:(id)action user:(id)user;	// 0x36b4a9
-(void)onPunishmentAction:(id)action user:(id)user;	// 0x36b435
-(void)onSendGiftButtonClick:(id)click user:(id)user;	// 0x36b3bd
-(void)onClickCloseButonInUserInfoView:(id)userInfoView;	// 0x36b381
@end

