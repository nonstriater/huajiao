/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, UIImageView, UIViewController, NSLayoutConstraint, HJMessageCenterBaseMessage;

__attribute__((visibility("hidden")))
@interface HJMessageCenterBaseMessageTableViewCell : XXUnknownSuperclass {
	HJMessageCenterBaseMessage* _theMessage;
	UIImageView* _headerImageView;
	UILabel* _mainTitle;
	UILabel* _timeLabel;
	NSLayoutConstraint* _lineWidthConstraint;
	UIViewController* _parentVC;
}
@property(retain, nonatomic) UIViewController* parentVC;	// G=0x121189; S=0x121199; 
@property(retain, nonatomic) HJMessageCenterBaseMessage* theMessage;	// G=0x121179; S=0x120b65; 
@property(assign, nonatomic) __weak NSLayoutConstraint* lineWidthConstraint;	// G=0x121145; S=0x121165; 
@property(assign, nonatomic) __weak UILabel* timeLabel;	// G=0x121111; S=0x121131; 
@property(assign, nonatomic) __weak UILabel* mainTitle;	// G=0x1210dd; S=0x1210fd; 
@property(assign, nonatomic) __weak UIImageView* headerImageView;	// G=0x1210a9; S=0x1210c9; 
+(float)heightForStringWith:(id)with maxWidth:(float)width;	// 0x120ffd
+(float)getCellHeightWithAttributedString:(id)attributedString maxWidth:(int)width;	// 0x120f6d
+(float)getCellHeightWithContent:(id)content maxWidth:(int)width;	// 0x120e4d
-(void).cxx_destruct;	// 0x1211c1
-(void)prepareForReuse;	// 0x120e49
-(void)headerTappedAction:(id)action;	// 0x120d35
-(void)awakeFromNib;	// 0x1209d9
@end

