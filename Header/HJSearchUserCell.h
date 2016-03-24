/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, UIImageView, UIButton, HJUserProfilesResponse;

__attribute__((visibility("hidden")))
@interface HJSearchUserCell : XXUnknownSuperclass {
	HJUserProfilesResponse* _data;
	UIButton* _iconView;
	UILabel* _nickNameLabel;
	UILabel* _contentLabel;
	UILabel* _fansCountLabel;
	UILabel* _praiseCountLabel;
	UIImageView* _VImageView;
}
@property(assign, nonatomic) __weak UIImageView* VImageView;	// G=0x24f169; S=0x24f189; 
@property(assign, nonatomic) __weak UILabel* praiseCountLabel;	// G=0x24f135; S=0x24f155; 
@property(assign, nonatomic) __weak UILabel* fansCountLabel;	// G=0x24f101; S=0x24f121; 
@property(assign, nonatomic) __weak UILabel* contentLabel;	// G=0x24f0cd; S=0x24f0ed; 
@property(assign, nonatomic) __weak UILabel* nickNameLabel;	// G=0x24f099; S=0x24f0b9; 
@property(assign, nonatomic) __weak UIButton* iconView;	// G=0x24f065; S=0x24f085; 
@property(retain, nonatomic) HJUserProfilesResponse* data;	// G=0x24f055; S=0x24e751; 
+(id)identifier;	// 0x24e739
+(void)registerCellWithTableView:(id)tableView;	// 0x24e6c1
-(void).cxx_destruct;	// 0x24f19d
-(BOOL)isFloat:(float)aFloat;	// 0x24f02d
-(id)minusFansCount:(id)count;	// 0x24ef01
-(id)incFansCount:(id)count;	// 0x24edd9
-(void)layoutSubviews;	// 0x24ec05
@end
