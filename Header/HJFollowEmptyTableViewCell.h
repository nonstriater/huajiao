/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSLayoutConstraint, UIButton;
@protocol HJFollowEmptyTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface HJFollowEmptyTableViewCell : XXUnknownSuperclass {
	NSLayoutConstraint* cardT;
	unsigned _buttonState;
	id<HJFollowEmptyTableViewCellDelegate> _delegate;
	UIButton* _defaultButton;
}
@property(retain, nonatomic) UIButton* defaultButton;	// G=0x29cf99; S=0x29cfa9; 
@property(assign, nonatomic) __weak id<HJFollowEmptyTableViewCellDelegate> delegate;	// G=0x29cf65; S=0x29cf85; 
@property(assign, nonatomic) unsigned buttonState;	// G=0x29cf55; S=0x29cd91; 
+(id)identifier;	// 0x29ce5d
+(void)registerCellWithTableView:(id)tableView;	// 0x29cde9
-(void).cxx_destruct;	// 0x29cfd1
-(void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x29cf25
-(void)layoutSubviews;	// 0x29cef9
-(void)onClick;	// 0x29ce75
-(void)awakeFromNib;	// 0x29ccc1
@end

