/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface HJMusicSearchResponse : XXUnknownSuperclass {
	int _totalNum;
	int _totalPage;
	NSArray* _musicList;
}
@property(retain, nonatomic) NSArray* musicList;	// G=0xfe9d5; S=0xfe9e5; 
@property(assign, nonatomic) int totalPage;	// G=0xfe9b5; S=0xfe9c5; 
@property(assign, nonatomic) int totalNum;	// G=0xfe995; S=0xfe9a5; 
+(id)responseWithUserInfo:(id)userInfo;	// 0xfe6c9
-(void).cxx_destruct;	// 0xfea0d
@end

