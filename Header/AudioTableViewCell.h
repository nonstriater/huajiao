/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, UIImageView, UIButton;

__attribute__((visibility("hidden")))
@interface AudioTableViewCell : XXUnknownSuperclass {
	UIImageView* _imageViewAudio;
	UILabel* _labelTitle;
	UILabel* _labelSubtitle;
	UIButton* _buttonPlay;
}
@property(retain, nonatomic) UIButton* buttonPlay;	// G=0x1b4e8d; S=0x1b4e9d; 
@property(retain, nonatomic) UILabel* labelSubtitle;	// G=0x1b4e55; S=0x1b4e65; 
@property(retain, nonatomic) UILabel* labelTitle;	// G=0x1b4e1d; S=0x1b4e2d; 
@property(retain, nonatomic) UIImageView* imageViewAudio;	// G=0x1b4de5; S=0x1b4df5; 
-(void).cxx_destruct;	// 0x1b4ec5
-(void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x1b4db5
-(void)awakeFromNib;	// 0x1b4db1
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;	// 0x1b4d81
@end

