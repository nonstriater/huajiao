/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import "MJRefreshHeader.h"

@class UILabel, NSMutableDictionary;

@interface MJRefreshStateHeader : MJRefreshHeader {
	UILabel* _lastUpdatedTimeLabel;
	UILabel* _stateLabel;
	id _lastUpdatedTimeText;
	NSMutableDictionary* _stateTitles;
}
@property(retain, nonatomic) NSMutableDictionary* stateTitles;	// G=0x42875d; S=0x4292e9; 
@property(readonly, assign, nonatomic) __weak UILabel* stateLabel;	// G=0x4287bd; 
@property(readonly, assign, nonatomic) __weak UILabel* lastUpdatedTimeLabel;	// G=0x428821; 
@property(copy, nonatomic) id lastUpdatedTimeText;	// G=0x4292c5; S=0x4292d9; 
-(void).cxx_destruct;	// 0x429311
-(void)setState:(int)state;	// 0x42919d
-(void)placeSubviews;	// 0x428e0d
-(void)prepare;	// 0x428d89
-(void)setLastUpdatedTimeKey:(id)key;	// 0x428a35
-(id)currentCalendar;	// 0x4289c5
-(void)setTitle:(id)title forState:(int)state;	// 0x428885
@end
