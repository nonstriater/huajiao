/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIScrollView, NSString, UINavigationController;

__attribute__((visibility("hidden")))
@interface HJLiveSmallCell : XXUnknownSuperclass {
	UINavigationController* _nv;
	id _liveOverBlock;
	UIScrollView* _scrollView;
	NSString* _relateid;
}
@property(retain, nonatomic) NSString* relateid;	// G=0x178669; S=0x178679; 
@property(assign, nonatomic) __weak UIScrollView* scrollView;	// G=0x178635; S=0x178655; 
@property(copy, nonatomic) id liveOverBlock;	// G=0x178611; S=0x178625; 
@property(assign, nonatomic) __weak UINavigationController* nv;	// G=0x1785dd; S=0x1785fd; 
+(id)identifier;	// 0x178159
+(void)registerCellWithTableView:(id)tableView;	// 0x1780e1
-(void).cxx_destruct;	// 0x1786a1
-(void)liveHasOver;	// 0x1785c5
-(void)setData:(id)data andShowCount:(int)count;	// 0x17821d
-(void)awakeFromNib;	// 0x178171
@end

