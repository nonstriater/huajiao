/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, UIImageView;

__attribute__((visibility("hidden")))
@interface IQSongsCell : XXUnknownSuperclass {
	BOOL _isSelected;
	UIImageView* _imageViewSong;
	UILabel* _labelTitle;
	UILabel* _labelSubTitle;
	UILabel* _labelDuration;
}
@property(assign, nonatomic) BOOL isSelected;	// G=0x26e619; S=0x26e32d; 
@property(retain, nonatomic) UILabel* labelDuration;	// G=0x26e5e1; S=0x26e5f1; 
@property(retain, nonatomic) UILabel* labelSubTitle;	// G=0x26e5a9; S=0x26e5b9; 
@property(retain, nonatomic) UILabel* labelTitle;	// G=0x26e571; S=0x26e581; 
@property(retain, nonatomic) UIImageView* imageViewSong;	// G=0x26e539; S=0x26e549; 
-(void).cxx_destruct;	// 0x26e629
-(void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x26e509
-(void)awakeFromNib;	// 0x26e505
-(void)layoutSubviews;	// 0x26e2cd
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;	// 0x26dcb9
@end

