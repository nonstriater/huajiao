/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class HJForetellDetailResponse, HJForetellAuthorResponse, HJForetellForwardResponse;

__attribute__((visibility("hidden")))
@interface HJForetellListItemResponse : XXUnknownSuperclass {
	HJForetellDetailResponse* _detail;
	HJForetellForwardResponse* _repost;
	HJForetellAuthorResponse* _author;
}
@property(retain, nonatomic) HJForetellAuthorResponse* author;	// G=0x302359; S=0x302369; 
@property(retain, nonatomic) HJForetellForwardResponse* repost;	// G=0x302321; S=0x302331; 
@property(retain, nonatomic) HJForetellDetailResponse* detail;	// G=0x3022e9; S=0x3022f9; 
+(id)responseWithUserInfo:(id)userInfo;	// 0x30214d
-(void).cxx_destruct;	// 0x302391
@end

