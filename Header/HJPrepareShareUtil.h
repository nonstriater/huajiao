/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "living-Structs.h"


__attribute__((visibility("hidden")))
@interface HJPrepareShareUtil : XXUnknownSuperclass {
	BOOL _commentaryPage;
}
@property(assign, nonatomic, setter=isCommentaryPage:) BOOL commentaryPage;	// G=0x1778ad; S=0x1778bd; 
+(id)defaultShare;	// 0x177799
+(void)onQZoneShare:(id)share ShareTitle:(id)title shareThumbnial:(id)thumbnial;	// 0x175b79
+(void)onWeiboShare:(id)share title:(id)title shareThumbnial:(id)thumbnial;	// 0x175af1
+(void)onWeixinShare:(id)share title:(id)title shareThumbnial:(id)thumbnial;	// 0x175a69
+(void)onFriendsCircleShare:(id)share title:(id)title shareThumbnial:(id)thumbnial;	// 0x1759e1
+(void)onQQShare:(id)share ShareTitle:(id)title shareThumbnial:(id)thumbnial;	// 0x175959
-(id)thumbnailWithImageWithoutScale:(id)imageWithoutScale size:(CGSize)size;	// 0x177645
-(void)onWeiboShare:(id)share title:(id)title shareThumbnial:(id)thumbnial;	// 0x176fe9
-(void)onWeixinShare:(id)share title:(id)title shareThumbnial:(id)thumbnial;	// 0x176acd
-(void)onQZoneShare:(id)share title:(id)title shareThumbnial:(id)thumbnial;	// 0x1765b5
-(void)onQQShare:(id)share title:(id)title shareThumbnial:(id)thumbnial;	// 0x17609d
-(void)onFriendsCircleShare:(id)share title:(id)title shareThumbnial:(id)thumbnial;	// 0x175c01
@end

