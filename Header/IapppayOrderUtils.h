/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface IapppayOrderUtils : XXUnknownSuperclass {
	NSString* _appId;
	NSString* _cpPrivateKey;
	NSString* _notifyUrl;
	NSString* _cpOrderId;
	NSString* _waresId;
	NSString* _price;
	NSString* _appUserId;
	NSString* _waresName;
	NSString* _cpPrivateInfo;
}
@property(copy, nonatomic) NSString* cpPrivateInfo;	// G=0xb7d9d1; S=0xb7e9c9; 
@property(copy, nonatomic) NSString* waresName;	// G=0xb7d911; S=0xb7e9b9; 
@property(copy, nonatomic) NSString* appUserId;	// G=0xb7d851; S=0xb7e9a9; 
@property(copy, nonatomic) NSString* price;	// G=0xb7d791; S=0xb7e999; 
@property(copy, nonatomic) NSString* waresId;	// G=0xb7d6d1; S=0xb7e989; 
@property(copy, nonatomic) NSString* cpOrderId;	// G=0xb7d611; S=0xb7e979; 
@property(copy, nonatomic) NSString* notifyUrl;	// G=0xb7da91; S=0xb7e969; 
@property(copy, nonatomic) NSString* cpPrivateKey;	// G=0xb7d551; S=0xb7e959; 
@property(copy, nonatomic) NSString* appId;	// G=0xb7d491; S=0xb7e949; 
+(BOOL)checkPayResult:(id)result withAppKey:(id)appKey;	// 0xb7e479
-(void).cxx_destruct;	// 0xb7e9d9
-(id)getTrandIdDataWith:(id)with;	// 0xb7e315
-(id)getTrandData;	// 0xb7df5d
-(id)getSelfOrderInfo;	// 0xb7db51
@end

