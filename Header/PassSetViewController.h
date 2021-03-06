/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "DSViewController.h"
#import "UITextFieldDelegate.h"

@class NSString, CustomButton, RegisteTextField;

__attribute__((visibility("hidden")))
@interface PassSetViewController : DSViewController <UITextFieldDelegate> {
	CustomButton* _finishiButton;
	RegisteTextField* _passwordTextField;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) RegisteTextField* passwordTextField;	// G=0x1146a5; S=0x1146b5; 
@property(retain, nonatomic) CustomButton* finishiButton;	// G=0x11466d; S=0x11467d; 
-(void).cxx_destruct;	// 0x1146dd
-(void)passwordChanged:(id)changed;	// 0x11465d
-(void)finishBtnPressed:(id)pressed;	// 0x11425d
-(void)resignAllEditing:(id)editing;	// 0x114221
-(void)buttonAction:(id)action;	// 0x1141dd
-(void)viewWillDisappear:(BOOL)view;	// 0x11415d
-(void)viewWillAppear:(BOOL)view;	// 0x1140b1
-(void)refreshFinishButtonAppear;	// 0x114001
-(void)viewDidLoad;	// 0x113cad
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;	// 0x113b5d
@end

