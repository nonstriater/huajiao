/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MJRefreshBackFooter.h"

@class NSMutableDictionary, UILabel;

@interface MJRefreshBackStateFooter : MJRefreshBackFooter {
	UILabel* _stateLabel;
	NSMutableDictionary* _stateTitles;
}
@property(retain, nonatomic) NSMutableDictionary* stateTitles;	// G=0x4251ad; S=0x4256b1; 
@property(readonly, assign, nonatomic) __weak UILabel* stateLabel;	// G=0x42520d; 
-(void).cxx_destruct;	// 0x4256d9
-(void)setState:(int)state;	// 0x4255bd
-(void)placeSubviews;	// 0x4254c5
-(void)prepare;	// 0x425429
-(id)titleForState:(int)state;	// 0x4253b1
-(void)setTitle:(id)title forState:(int)state;	// 0x425271
@end
