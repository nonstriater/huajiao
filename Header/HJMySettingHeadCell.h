/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, UIImageView, UIButton, HJUserProfilesResponse;

__attribute__((visibility("hidden")))
@interface HJMySettingHeadCell : XXUnknownSuperclass {
	UIButton* ModifyButton;
	UILabel* signatureLabel;
	UILabel* nickNameLabel;
	UIImageView* avatarImage;
	HJUserProfilesResponse* _userInfo;
}
@property(retain, nonatomic) HJUserProfilesResponse* userInfo;	// G=0x2ffcf5; S=0x2ff981; 
+(id)identifier;	// 0x2ff969
+(void)registerCellWithTableView:(id)tableView;	// 0x2ff8f5
-(void).cxx_destruct;	// 0x2ffd05
-(void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x2ffcc5
-(void)awakeFromNib;	// 0x2ff8f1
@end
