/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "HJChatControllerDelegate.h"
#import "HJUserListViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITextFieldDelegate.h"
#import "DSViewController.h"
#import "HJChatRoomDelegate.h"
#import "LCActionSheetDelegate.h"
#import "living-Structs.h"
#import "HJIconViewDelegate.h"

@class UIImage, HJUserListView, UITextField, HJIconView, HJChatingHeadView, HJSeedAnchorResponse, HJBlurView, HJChatController_v2, NSString, UILabel, UIImageView, HJEnterLiveRoomViewController, UIButton, UIView, HJChattingRoomReplayViewController, HJChatUser, NSMutableArray;

__attribute__((visibility("hidden")))
@interface HJChatRoomViewController : DSViewController <HJUserListViewDelegate, HJChatControllerDelegate, HJChatRoomDelegate, UITextFieldDelegate, LCActionSheetDelegate, HJIconViewDelegate, UIGestureRecognizerDelegate> {
	UIView* _showView;
	UIView* _contentView;
	UIButton* _closeButton;
	UIView* _titleView;
	HJUserListView* _userListView;
	UITextField* _inputTextfield;
	HJChatController_v2* _chatController;
	UIButton* _sendButton;
	NSMutableArray* _allPunished;
	HJChattingRoomReplayViewController* _replayController;
	HJEnterLiveRoomViewController* _liveController;
	HJBlurView* _blurView;
	HJChatingHeadView* _headView;
	UIButton* _reportButton;
	NSString* _liveID;
	HJSeedAnchorResponse* _anchor;
	NSString* _roomID;
	NSString* _replayID;
	id _onClickCloseButtonBlock;
	NSString* _lastTitle;
	UIImage* _lastSnap;
	HJChatUser* _userForActionSheet;
	HJIconView* _iconView;
	UILabel* _nickNameLabel;
	UIImageView* _topMaskView;
	UIImageView* _bottomMaskView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIImageView* bottomMaskView;	// G=0xe66ed; S=0xe66fd; 
@property(retain, nonatomic) UIImageView* topMaskView;	// G=0xe66b5; S=0xe66c5; 
@property(retain, nonatomic) UILabel* nickNameLabel;	// G=0xe667d; S=0xe668d; 
@property(retain, nonatomic) HJIconView* iconView;	// G=0xe6645; S=0xe6655; 
@property(retain, nonatomic) HJChatUser* userForActionSheet;	// G=0xe660d; S=0xe661d; 
@property(retain, nonatomic) UIImage* lastSnap;	// G=0xe65d5; S=0xe65e5; 
@property(retain, nonatomic) NSString* lastTitle;	// G=0xe659d; S=0xe65ad; 
@property(copy, nonatomic) id onClickCloseButtonBlock;	// G=0xe6579; S=0xe658d; 
@property(retain, nonatomic) NSString* replayID;	// G=0xe6541; S=0xe6551; 
@property(retain, nonatomic) NSString* roomID;	// G=0xe6509; S=0xe6519; 
@property(retain, nonatomic) HJSeedAnchorResponse* anchor;	// G=0xe64d1; S=0xe64e1; 
-(void).cxx_destruct;	// 0xe6725
-(BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0xe6491
-(void)iconViewDidClick:(id)iconView uid:(id)uid;	// 0xe5dd5
-(void)actionSheet:(id)sheet didClickedButtonAtIndex:(int)index;	// 0xe5ab1
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;	// 0xe578d
-(BOOL)textFieldShouldReturn:(id)textField;	// 0xe5775
-(BOOL)textFieldShouldClear:(id)textField;	// 0xe5771
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;	// 0xe56e5
-(void)textFieldDidEndEditing:(id)textField;	// 0xe5681
-(BOOL)textFieldShouldEndEditing:(id)textField;	// 0xe567d
-(void)textFieldDidBeginEditing:(id)textField;	// 0xe5625
-(BOOL)textFieldShouldBeginEditing:(id)textField;	// 0xe5621
-(void)room:(id)room didRecieveLiveEnd:(id)end anchorUserID:(id)anId;	// 0xe54a1
-(void)room:(id)room didRecieveNewLive:(id)live anchorUserID:(id)anId;	// 0xe52d1
-(void)room:(id)room handleError:(int)error;	// 0xe5181
-(void)didSeedEnd:(id)end;	// 0xe517d
-(void)didChatRoomLostConnection:(id)connection;	// 0xe5179
-(void)didJoinRoomSucceedWithInfo:(id)info;	// 0xe5159
-(void)didJoinRoomSucceed:(id)succeed;	// 0xe5139
-(void)room:(id)room didNumberOfAllUsersChanged:(int)allUsersChanged;	// 0xe5119
-(void)room:(id)room didRecieveUserQuit:(id)quit membersCount:(unsigned)count;	// 0xe50d5
-(void)room:(id)room didRecieveGuestJoin:(id)join membersCount:(unsigned)count watches:(unsigned)watches;	// 0xe5059
-(void)room:(id)room didReceiveFollowOwnerMessage:(id)message;	// 0xe4f59
-(void)room:(id)room didReceivePunishment:(id)punishment;	// 0xe4e59
-(void)room:(id)room didRecieveUserJoin:(id)join membersCount:(unsigned)count watches:(unsigned)watches;	// 0xe4db5
-(void)room:(id)room didRecieveAchievement:(int)achievement;	// 0xe4db1
-(void)room:(id)room didRecieveMessage:(id)message;	// 0xe4cb5
-(void)room:(id)room didRecievePraise:(id)praise;	// 0xe4cb1
-(void)chatController:(id)controller didClickUser:(id)user;	// 0xe4911
-(void)userListView:(id)view didClickUser:(id)user;	// 0xe4571
-(void)updateFramesWithKeyboardNotification:(id)keyboardNotification;	// 0xe39d9
-(void)onClickSendButton;	// 0xe3629
-(void)onClickCloseButton;	// 0xe3611
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0xe339d
-(void)onClickReportButton:(id)button;	// 0xe3245
-(void)setupUI;	// 0xe1635
-(void)onKeyboardNotification:(id)notification;	// 0xe13c9
-(void)onTap;	// 0xe13a9
-(void)setupData;	// 0xe1301
-(void)joinRoom;	// 0xe1241
-(void)viewDidAppear:(BOOL)view;	// 0xe11c5
-(void)viewDidLoad;	// 0xe0d8d
-(void)preRelease;	// 0xe0c79
@end
