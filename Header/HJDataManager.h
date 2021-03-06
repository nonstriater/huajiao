/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface HJDataManager : XXUnknownSuperclass {
	NSMutableArray* _recomUserArray;
	NSMutableArray* _randomRecomUserArray;
}
@property(retain, nonatomic) NSMutableArray* randomRecomUserArray;	// G=0x33cbc1; S=0x33cbd1; 
@property(retain, nonatomic) NSMutableArray* recomUserArray;	// G=0x33cb89; S=0x33cb99; 
+(id)shared;	// 0x33bd95
-(void).cxx_destruct;	// 0x33cbf9
-(void)_refreshRandomRecomUserArray;	// 0x33c869
-(void)refreshRandomRecomUserArray;	// 0x33c7d5
-(void)updateRecomUsers:(id)users;	// 0x33c2f1
-(void)generateRandomRecomUserArray;	// 0x33c00d
-(void)onLogout;	// 0x33bfcd
-(void)dealloc;	// 0x33bf61
-(id)init;	// 0x33be55
@end

