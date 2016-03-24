/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class APayLoadView, NSOperationQueue, UIView;

@interface APNetwork : XXUnknownSuperclass {
	NSOperationQueue* _operationQueue;
	APayLoadView* _loadView;
	UIView* _maskView;
}
@property(retain, nonatomic) UIView* maskView;	// G=0xce6ca9; S=0xce6cb9; 
@property(retain, nonatomic) APayLoadView* loadView;	// G=0xce6c71; S=0xce6c81; 
@property(retain, nonatomic) NSOperationQueue* operationQueue;	// G=0xce6c39; S=0xce6c49; 
+(id)defaultClient;	// 0xce6795
-(void).cxx_destruct;	// 0xce6ce1
-(id)requestWithUrl:(id)url parameters:(id)parameters action:(id)action;	// 0xce6b31
-(void)postWithUrl:(id)url parameter:(id)parameter externParams:(id)params action:(id)action success:(id)success failure:(id)failure;	// 0xce68cd
-(void)setUrl:(id)url;	// 0xce68c9
-(id)init;	// 0xce6821
@end

