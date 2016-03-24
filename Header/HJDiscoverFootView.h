/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UILabel, HJCategoryUsers;
@protocol HJDiscoverFootViewDelegate;

__attribute__((visibility("hidden")))
@interface HJDiscoverFootView : XXUnknownSuperclass {
	HJCategoryUsers* _user;
	NSString* _categoryID;
	id<HJDiscoverFootViewDelegate> _delegate;
	UILabel* _footerLabel;
}
@property(assign, nonatomic) __weak UILabel* footerLabel;	// G=0x2f1785; S=0x2f17a5; 
@property(assign, nonatomic) __weak id<HJDiscoverFootViewDelegate> delegate;	// G=0x2f1751; S=0x2f1771; 
@property(retain, nonatomic) NSString* categoryID;	// G=0x2f1719; S=0x2f1729; 
@property(retain, nonatomic) HJCategoryUsers* user;	// G=0x2f1709; S=0x2f159d; 
+(id)identifier;	// 0x2f1585
+(void)registerCellWithTableView:(id)tableView;	// 0x2f150d
-(void).cxx_destruct;	// 0x2f17b9
-(void)moreButtonDidClick:(id)moreButton;	// 0x2f1665
@end

