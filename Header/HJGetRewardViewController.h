/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIScrollViewDelegate.h"
#import "living-Structs.h"
#import "UITextFieldDelegate.h"

@class rewardMoneyView, NSString, UITextField, NSMutableDictionary, NSLayoutConstraint, NSTimer, NSNumber, UILabel, UIButton, UIScrollView;

__attribute__((visibility("hidden")))
@interface HJGetRewardViewController : XXUnknownSuperclass <UITextFieldDelegate, UIScrollViewDelegate> {
	NSTimer* _countdownTimer;
	NSString* _tid;
	NSString* _deadLine;
	NSNumber* _money;
	UILabel* _deadLineAlert;
	UILabel* _activityTitle;
	NSLayoutConstraint* tailHeight;
	NSLayoutConstraint* headH;
	NSLayoutConstraint* codeR;
	NSLayoutConstraint* inputT;
	NSLayoutConstraint* bottomButton;
	NSLayoutConstraint* title_money_margin;
	NSLayoutConstraint* title_top;
	NSLayoutConstraint* hupi_top;
	NSLayoutConstraint* deadline_top;
	NSLayoutConstraint* deadline_H;
	NSLayoutConstraint* tail_hupi_H;
	NSLayoutConstraint* input_top;
	NSLayoutConstraint* hupi_L;
	NSLayoutConstraint* phone_L;
	NSLayoutConstraint* code_L;
	NSMutableDictionary* _mutableSessions;
	rewardMoneyView* _rewardMoneyView;
	UITextField* _phoneNum;
	UITextField* _passcode;
	UIButton* _getPasscodeButton;
	UIButton* _commitButton;
	UIScrollView* _scrollView;
	unsigned _passcodeState;
	unsigned _commitbuttonState;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned commitbuttonState;	// G=0x409685; S=0x408acd; 
@property(assign, nonatomic) unsigned passcodeState;	// G=0x409675; S=0x408769; 
@property(retain, nonatomic) UIScrollView* scrollView;	// G=0x40963d; S=0x40964d; 
@property(retain, nonatomic) UIButton* commitButton;	// G=0x409605; S=0x409615; 
@property(retain, nonatomic) UIButton* getPasscodeButton;	// G=0x4095cd; S=0x4095dd; 
@property(retain, nonatomic) UITextField* passcode;	// G=0x409595; S=0x4095a5; 
@property(retain, nonatomic) UITextField* phoneNum;	// G=0x40955d; S=0x40956d; 
@property(retain, nonatomic) rewardMoneyView* rewardMoneyView;	// G=0x409525; S=0x409535; 
@property(retain, nonatomic) NSMutableDictionary* mutableSessions;	// G=0x4094ed; S=0x4094fd; 
-(void).cxx_destruct;	// 0x409695
-(void)didReceiveMemoryWarning;	// 0x4094c1
-(void)buttonAction:(id)action;	// 0x409109
-(void)lchtest_buttonaction;	// 0x409099
-(void)prepareForSegue:(id)segue sender:(id)sender;	// 0x408ff1
-(void)textFieldTextDidChangeNotification:(id)textFieldText;	// 0x408ed9
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;	// 0x408e6d
-(void)countdownFinished;	// 0x408e19
-(void)countdown;	// 0x408d49
-(void)countdownBegin;	// 0x408b99
-(int)preferredStatusBarStyle;	// 0x408765
-(id)deadLineFormated;	// 0x4085ed
-(void)lchtest;	// 0x4085e9
-(void)viewDidLoad;	// 0x407fd1
-(void)viewWillDisappear:(BOOL)view;	// 0x407eed
-(void)viewWillAppear:(BOOL)view;	// 0x407df1
-(void)scrollViewWillBeginDragging:(id)scrollView;	// 0x407de1
-(void)dismissKeyboard;	// 0x407d55
-(void)tapGesture:(id)gesture;	// 0x407d45
-(void)textFieldDidBeginEditing:(id)textField;	// 0x407c49
-(void)textFieldDidEndEditing:(id)textField;	// 0x407bd1
-(BOOL)textFieldShouldReturn:(id)textField;	// 0x407ba9
-(void)viewDidLayoutSubviews;	// 0x407501
@end

