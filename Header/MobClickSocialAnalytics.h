/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSOperationQueue;

@interface MobClickSocialAnalytics : XXUnknownSuperclass {
	id _completion;
	NSOperationQueue* _operationQueue;
}
@property(copy, nonatomic) id completion;	// G=0xb1c9d9; S=0xb1c9f1; 
@property(retain, nonatomic) NSOperationQueue* operationQueue;	// G=0xb1c9a5; S=0xb1c9b5; 
+(void)postWeiboCounts:(id)counts appKey:(id)key topic:(id)topic completion:(id)completion;	// 0xb1c27d
+(id)sharedInstance;	// 0xb1bac5
-(void)dealloc;	// 0xb1c959
-(void)MobClickOperate_Finish:(id)finish data:(id)data error:(id)error;	// 0xb1c719
-(void)postPlatform:(id)platform appKey:(id)key users:(id)users weiboId:(id)anId topic:(id)topic paramData:(id)data completion:(id)completion;	// 0xb1c321
-(void)postWeiboCounts:(id)counts appKey:(id)key topic:(id)topic completion:(id)completion;	// 0xb1be59
-(id)init;	// 0xb1bdc9
-(id)convertArrayToString:(id)string;	// 0xb1bba9
@end

