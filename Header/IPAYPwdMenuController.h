/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "IPAYMenuController.h"

@class NSString, NSMutableArray;

@interface IPAYPwdMenuController : IPAYMenuController {
	BOOL _isForceRegister;
	BOOL _isNeedShowPaySuccess;
	NSString* _phoneNumber;
	NSString* _regiSMSCode;
	id _callBackBlock;
	int _menuType;
	NSString* _verifyPassword;
	NSString* _lastPassword;
	NSMutableArray* _classArray;
}
@property(retain, nonatomic) NSMutableArray* classArray;	// G=0xba785d; S=0xba786d; 
@property(retain, nonatomic) NSString* lastPassword;	// G=0xba7825; S=0xba7835; 
@property(retain, nonatomic) NSString* verifyPassword;	// G=0xba77ed; S=0xba77fd; 
@property(assign, nonatomic) int menuType;	// G=0xba77dd; S=0xba71ad; 
@property(copy, nonatomic) id callBackBlock;	// G=0xba77b9; S=0xba77cd; 
@property(retain, nonatomic) NSString* regiSMSCode;	// G=0xba7781; S=0xba7791; 
@property(retain, nonatomic) NSString* phoneNumber;	// G=0xba7749; S=0xba7759; 
@property(assign, nonatomic) BOOL isNeedShowPaySuccess;	// G=0xba7729; S=0xba7739; 
@property(assign, nonatomic) BOOL isForceRegister;	// G=0xba7709; S=0xba7719; 
-(void).cxx_destruct;	// 0xba7895
-(void)gotoBackController:(BOOL)controller;	// 0xba7649
-(void)gotoNextController:(BOOL)controller;	// 0xba754d
-(void)setSelectedControllerClass:(Class)aClass;	// 0xba74f5
-(BOOL)judgeIsRegisterPaymentPasswordType;	// 0xba74b1
-(void)didReceiveMemoryWarning;	// 0xba7485
-(void)viewDidLoad;	// 0xba7429
-(id)init;	// 0xba73e5
-(void)createBindingCardMenuControllers;	// 0xba6efd
@end

