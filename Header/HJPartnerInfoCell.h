/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "HJTableViewCell.h"

@class NSString, UIImage, UILabel, UIImageView;

__attribute__((visibility("hidden")))
@interface HJPartnerInfoCell : HJTableViewCell {
	NSString* _title;
	NSString* _content;
	NSString* _avatarUrl;
	UIImage* _avatarImage;
	int _type;
	int _CellTitleVerticalAlignMode;
	UILabel* _titleLabel;
	UILabel* _contentLabel;
	UIImageView* _avatarView;
}
@property(retain, nonatomic) UIImageView* avatarView;	// G=0x3f07c9; S=0x3f1395; 
@property(retain, nonatomic) UILabel* contentLabel;	// G=0x3f09d9; S=0x3f136d; 
@property(retain, nonatomic) UILabel* titleLabel;	// G=0x3f08d1; S=0x3f1345; 
@property(assign, nonatomic) int CellTitleVerticalAlignMode;	// G=0x3f1335; S=0x3ef52d; 
@property(assign, nonatomic) int type;	// G=0x3f1315; S=0x3f1325; 
@property(copy, nonatomic) UIImage* avatarImage;	// G=0x3f1301; S=0x3f05c9; 
@property(copy, nonatomic) NSString* avatarUrl;	// G=0x3f12ed; S=0x3f04a9; 
@property(copy, nonatomic) NSString* content;	// G=0x3f12d9; S=0x3f0b71; 
@property(copy, nonatomic) NSString* title;	// G=0x3f12c5; S=0x3f0b09; 
-(void).cxx_destruct;	// 0x3f13bd
-(void)setVMark;	// 0x3f114d
-(void)setAuthenticatedMark;	// 0x3f0f6d
-(void)setAuthenticatedMarkWithType:(int)type;	// 0x3f0bd9
-(void)prepareForReuse;	// 0x3f069d
-(void)layoutSubviews;	// 0x3ef615
-(void)setUpTitleVerticalAlign;	// 0x3ef54d
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;	// 0x3ef485
@end

