/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UINavigationController, IPAYUserSchema;
@protocol IapppayKitPayRetDelegate;

@interface IapppayObject : XXUnknownSuperclass {
	NSString* _mAppID;
	NSString* _mChannelID;
	NSString* _appAlipayScheme;
	id<IapppayKitPayRetDelegate> _payDelegate;
	NSString* _mAESKey;
	NSString* _mABSKey;
	NSString* _mPWDKey;
	int _mPayType;
	UINavigationController* _myNavigationCtr;
	IPAYUserSchema* _userAuth;
	unsigned _ipayOrientationMask;
	unsigned _ipayAppOrientationMask;
}
@property(assign, nonatomic) unsigned ipayAppOrientationMask;	// G=0xbb5359; S=0xbb5369; 
@property(assign, nonatomic) unsigned ipayOrientationMask;	// G=0xbb5349; S=0xbb4919; 
@property(retain, nonatomic) IPAYUserSchema* userAuth;	// G=0xbb5311; S=0xbb5321; 
@property(retain, nonatomic) UINavigationController* myNavigationCtr;	// G=0xbb52d9; S=0xbb52e9; 
@property(assign, nonatomic) int mPayType;	// G=0xbb52b9; S=0xbb52c9; 
@property(retain, nonatomic) NSString* mPWDKey;	// G=0xbb5281; S=0xbb5291; 
@property(retain, nonatomic) NSString* mABSKey;	// G=0xbb4885; S=0xbb5259; 
@property(retain, nonatomic) NSString* mAESKey;	// G=0xbb5221; S=0xbb5231; 
@property(retain, nonatomic) id<IapppayKitPayRetDelegate> payDelegate;	// G=0xbb51fd; S=0xbb520d; 
@property(copy, nonatomic) NSString* appAlipayScheme;	// G=0xbb51d9; S=0xbb51ed; 
@property(copy, nonatomic) NSString* mChannelID;	// G=0xbb51b5; S=0xbb51c9; 
@property(copy, nonatomic) NSString* mAppID;	// G=0xbb5191; S=0xbb51a5; 
+(void)blockMerchantStatusCode:(int)code resultInfo:(id)info;	// 0xbb50e5
+(void)blockMerchantPaymentSuccess:(id)success;	// 0xbb5041
+(void)blockMerchantPaymentFail:(id)fail;	// 0xbb501d
+(void)blockMerchantUserCancelPayment;	// 0xbb4f85
+(void)blockMerchantNetException;	// 0xbb4eed
+(id)sharedInstance;	// 0xbb4605
+(unsigned)getIPAYApplicationOrientation;	// 0xbb4205
-(void).cxx_destruct;	// 0xbb5379
-(double)getDelayForNextPayResultQuery;	// 0xbb5185
-(void)dismissFastPayWindow;	// 0xbb4d65
-(void)makeNavigationWith:(id)with;	// 0xbb4a15
-(BOOL)checkSetInfoOKWithLog:(BOOL)log;	// 0xbb494d
-(void)resetIPAYAppOrientationMask;	// 0xbb4845
-(void)settingUPPayIPAYAppOrientationMask;	// 0xbb4831
-(BOOL)judageisValidAppSupportedOrientation:(int)orientation;	// 0xbb4465
-(BOOL)isValidAppSupportedInterfaceOrientationsForMask:(unsigned)mask;	// 0xbb43a9
@end
