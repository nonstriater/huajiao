/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class HJChatUser, UILabel, UIImageView;

__attribute__((visibility("hidden")))
@interface HJFeiPingView : XXUnknownSuperclass {
	BOOL _isAvailable;
	HJChatUser* _chatUser;
	UIImageView* _userImageView;
	UILabel* _userNameLabel;
	UIImageView* _bgView;
	UILabel* _feiPingMsgLabel;
	UIImageView* _levelImageView;
}
@property(assign, nonatomic) BOOL isAvailable;	// G=0xa4455; S=0xa4465; 
@property(retain, nonatomic) UIImageView* levelImageView;	// G=0xa441d; S=0xa442d; 
@property(retain, nonatomic) UILabel* feiPingMsgLabel;	// G=0xa43e5; S=0xa43f5; 
@property(retain, nonatomic) UIImageView* bgView;	// G=0xa43ad; S=0xa43bd; 
@property(retain, nonatomic) UILabel* userNameLabel;	// G=0xa4375; S=0xa4385; 
@property(retain, nonatomic) UIImageView* userImageView;	// G=0xa433d; S=0xa434d; 
@property(retain, nonatomic) HJChatUser* chatUser;	// G=0xa4305; S=0xa4315; 
-(void).cxx_destruct;	// 0xa4475
-(void)awakeFromNib;	// 0xa3fe9
@end
