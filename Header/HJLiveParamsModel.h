/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage, NSString;

__attribute__((visibility("hidden")))
@interface HJLiveParamsModel : XXUnknownSuperclass {
	BOOL _live_open_location;
	BOOL _live_open_weiboShare;
	BOOL _is_skip_prepare;
	BOOL _shouldScreenShot;
	NSString* _live_title;
	UIImage* _live_Image;
}
@property(assign, nonatomic) BOOL shouldScreenShot;	// G=0x3e7bc5; S=0x3e7bd5; 
@property(assign, nonatomic) BOOL is_skip_prepare;	// G=0x3e7ba5; S=0x3e7bb5; 
@property(assign, nonatomic) BOOL live_open_weiboShare;	// G=0x3e7b85; S=0x3e7b95; 
@property(assign, nonatomic) BOOL live_open_location;	// G=0x3e7b65; S=0x3e7b75; 
@property(retain, nonatomic) UIImage* live_Image;	// G=0x3e7b2d; S=0x3e7b3d; 
@property(retain, nonatomic) NSString* live_title;	// G=0x3e7af5; S=0x3e7b05; 
+(id)liveParamsModel;	// 0x3e79c5
+(id)liveParamsModelWithTitle:(id)title Image:(id)image isLocation:(BOOL)location isweibo:(BOOL)isweibo;	// 0x3e78e5
-(void).cxx_destruct;	// 0x3e7be5
-(void)clearModel;	// 0x3e7ac5
@end

