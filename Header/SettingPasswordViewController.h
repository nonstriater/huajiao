/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "CustomViewController.h"
#import "UITextFieldDelegate.h"

@class NSString, CustomButton, RegisteTextField;

__attribute__((visibility("hidden")))
@interface SettingPasswordViewController : CustomViewController <UITextFieldDelegate> {
	RegisteTextField* _passwordTextField;
	CustomButton* _finishBtn;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak CustomButton* finishBtn;	// G=0x14ac51; S=0x14ac71; 
@property(assign, nonatomic) __weak RegisteTextField* passwordTextField;	// G=0x14ac1d; S=0x14ac3d; 
-(void).cxx_destruct;	// 0x14ac85
-(void)resignAllResponse:(id)response;	// 0x14abe1
-(void)refreshFinishButtonAppear;	// 0x14ab31
-(void)passwordChanged:(id)changed;	// 0x14ab21
-(void)finishButtonPressed:(id)pressed;	// 0x14a901
-(void)didReceiveMemoryWarning;	// 0x14a8d5
-(void)viewWillDisappear:(BOOL)view;	// 0x14a855
-(void)viewWillAppear:(BOOL)view;	// 0x14a79d
-(void)viewDidLoad;	// 0x14a6b1
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;	// 0x14a561
@end

