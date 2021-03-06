/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MJRefreshAutoFooter.h"

@class NSMutableDictionary, UILabel;

@interface MJRefreshAutoStateFooter : MJRefreshAutoFooter {
	UILabel* _stateLabel;
	BOOL _refreshingTitleHidden;
	NSMutableDictionary* _stateTitles;
}
@property(retain, nonatomic) NSMutableDictionary* stateTitles;	// G=0x42292d; S=0x422ec9; 
@property(assign, nonatomic, getter=isRefreshingTitleHidden) BOOL refreshingTitleHidden;	// G=0x422ea9; S=0x422eb9; 
@property(readonly, assign, nonatomic) __weak UILabel* stateLabel;	// G=0x42298d; 
-(void).cxx_destruct;	// 0x422ef1
-(void)setState:(int)state;	// 0x422d81
-(void)placeSubviews;	// 0x422c89
-(void)prepare;	// 0x422b65
-(void)stateLabelClick;	// 0x422b31
-(void)setTitle:(id)title forState:(int)state;	// 0x4229f1
@end

