/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, UIImageView, UIButton, HJLeadingRoleInfo;

__attribute__((visibility("hidden")))
@interface HJLeadingRoleClipCell : XXUnknownSuperclass {
	id liveInfo;
	HJLeadingRoleInfo* roleInfo;
	BOOL bIsLive;
	UIButton* _coverImage;
	UILabel* _videoTitle;
	UIImageView* _titleMask;
	UIImageView* _videoType;
	UIImageView* _coverImageView;
}
@property(retain, nonatomic) UIImageView* coverImageView;	// G=0xc14ad; S=0xc14bd; 
@property(retain, nonatomic) UIImageView* videoType;	// G=0xc1475; S=0xc1485; 
@property(retain, nonatomic) UIImageView* titleMask;	// G=0xc143d; S=0xc144d; 
@property(retain, nonatomic) UILabel* videoTitle;	// G=0xc1405; S=0xc1415; 
@property(retain, nonatomic) UIButton* coverImage;	// G=0xc13cd; S=0xc13dd; 
+(id)identifier;	// 0xc0d69
+(void)registerCellWithTableView:(id)tableView;	// 0xc0cf5
-(void).cxx_destruct;	// 0xc14e5
-(void)setData:(id)data leadingRoleInfo:(id)info isLive:(BOOL)live;	// 0xc1065
-(void)reset;	// 0xc0f4d
-(void)onVideoClipClicked:(id)clicked;	// 0xc0db5
-(void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0xc0d85
-(void)awakeFromNib;	// 0xc0d81
@end

