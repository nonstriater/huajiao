/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, UIImageView, UIButton, HJUserIntf, UIView, HJUserProfilesResponse, HJUserDetailListView;

__attribute__((visibility("hidden")))
@interface HJUserDetailView : XXUnknownSuperclass {
	HJUserIntf* _userIntf;
	UIView* _listContainer;
	HJUserDetailListView* _listView;
	UILabel* _nickLabel;
	UIView* _countContainer;
	UILabel* _watchTitle;
	UILabel* _watchCount;
	UILabel* _fansTitle;
	UILabel* _fansCount;
	UIButton* _closeButton;
	UIImageView* _watchArrow;
	UIImageView* _fansArrow;
	UIView* _watchView;
	UIView* _fansView;
	HJUserProfilesResponse* _user;
	unsigned _listType;
}
@property(assign, nonatomic) unsigned listType;	// G=0x193c91; S=0x193ca1; 
@property(retain, nonatomic) HJUserProfilesResponse* user;	// G=0x193c59; S=0x193c69; 
@property(assign, nonatomic) __weak UIView* fansView;	// G=0x193c25; S=0x193c45; 
@property(assign, nonatomic) __weak UIView* watchView;	// G=0x193bf1; S=0x193c11; 
@property(assign, nonatomic) __weak UIImageView* fansArrow;	// G=0x193bbd; S=0x193bdd; 
@property(assign, nonatomic) __weak UIImageView* watchArrow;	// G=0x193b89; S=0x193ba9; 
@property(assign, nonatomic) __weak UIButton* closeButton;	// G=0x193b55; S=0x193b75; 
@property(assign, nonatomic) __weak UILabel* fansCount;	// G=0x193b21; S=0x193b41; 
@property(assign, nonatomic) __weak UILabel* fansTitle;	// G=0x193aed; S=0x193b0d; 
@property(assign, nonatomic) __weak UILabel* watchCount;	// G=0x193ab9; S=0x193ad9; 
@property(assign, nonatomic) __weak UILabel* watchTitle;	// G=0x193a85; S=0x193aa5; 
@property(assign, nonatomic) __weak UIView* countContainer;	// G=0x193a51; S=0x193a71; 
@property(assign, nonatomic) __weak UILabel* nickLabel;	// G=0x193a1d; S=0x193a3d; 
@property(retain, nonatomic) HJUserDetailListView* listView;	// G=0x1939e5; S=0x1939f5; 
@property(assign, nonatomic) __weak UIView* listContainer;	// G=0x1939b1; S=0x1939d1; 
-(void).cxx_destruct;	// 0x193cb1
-(void)doFetch;	// 0x1936ed
-(void)reloadData;	// 0x1935ad
-(void)layoutSubviews;	// 0x193501
-(void)onTapFans;	// 0x1934dd
-(void)onTapWatch;	// 0x1934b9
-(void)awakeFromNib;	// 0x193299
@end
