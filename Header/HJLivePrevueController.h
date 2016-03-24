/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "HJPrevueCellDelegate.h"
#import "HJSendPrevueViewControllerDelegate.h"
#import "UITextFieldDelegate.h"
#import "living-Structs.h"
#import "HJLiveBaseController.h"

@class NSString, HJPrevueHeaderCell, HJForetellIntf, NSTimer, UIView;

__attribute__((visibility("hidden")))
@interface HJLivePrevueController : HJLiveBaseController <HJPrevueCellDelegate, UITextFieldDelegate, HJSendPrevueViewControllerDelegate> {
	NSTimer* _refreshTimer;
	UIView* _maskView;
	HJForetellIntf* _refreshIntf;
	HJForetellIntf* _loadmoreIntf;
	UIView* _detailContainer;
	HJForetellIntf* _forwardIntf;
	HJPrevueHeaderCell* _headerCell;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;	// 0x276eb9
-(void)onDidSendInSendPrevueController:(id)on;	// 0x276ea9
-(BOOL)textFieldShouldReturn:(id)textField;	// 0x276e8d
-(BOOL)textFieldShouldClear:(id)textField;	// 0x276e89
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;	// 0x276ce5
-(void)textFieldDidEndEditing:(id)textField;	// 0x276c85
-(BOOL)textFieldShouldEndEditing:(id)textField;	// 0x276c81
-(void)textFieldDidBeginEditing:(id)textField;	// 0x276c21
-(BOOL)textFieldShouldBeginEditing:(id)textField;	// 0x276c1d
-(void)onClickPlayButtonWithCell:(id)cell;	// 0x276be1
-(void)onClickForwardButtonWithCell:(id)cell;	// 0x2763a9
-(void)doLoadmore;	// 0x275ef9
-(void)handleRefresh:(id)refresh;	// 0x2755d5
-(void)doRefresh;	// 0x2754e9
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x275419
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x2745bd
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x274515
-(void)doAutoRefreshing;	// 0x2743bd
-(void)stopAutoRefreshing;	// 0x274389
-(void)startAutoRefreshing;	// 0x274309
-(void)setupCells;	// 0x2741d5
-(void)onClickSendButton;	// 0x273f39
-(void)onTapTouchView;	// 0x273ed1
-(void)viewWillLayoutSubviews;	// 0x273d95
-(void)onTapMaskView;	// 0x273d2d
-(void)setupMaskView;	// 0x273bcd
-(void)showDetail:(id)detail;	// 0x273b75
-(void)viewDidLoad;	// 0x273b21
-(void)pageWillDisappear;	// 0x273a95
-(void)pageWillAppear;	// 0x273a41
-(id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x273969
-(id)emtpyView;	// 0x273965
-(void)checkError:(id)error;	// 0x2738c1
@end
