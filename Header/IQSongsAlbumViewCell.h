/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, UIImageView;

__attribute__((visibility("hidden")))
@interface IQSongsAlbumViewCell : XXUnknownSuperclass {
	UIImageView* _imageViewAlbum;
	UILabel* _labelTitle;
	UILabel* _labelSubTitle;
	UILabel* _labelSubSubTitle;
}
@property(retain, nonatomic) UILabel* labelSubSubTitle;	// G=0x66cd9; S=0x66ce9; 
@property(retain, nonatomic) UILabel* labelSubTitle;	// G=0x66ca1; S=0x66cb1; 
@property(retain, nonatomic) UILabel* labelTitle;	// G=0x66c69; S=0x66c79; 
@property(retain, nonatomic) UIImageView* imageViewAlbum;	// G=0x66c31; S=0x66c41; 
-(void).cxx_destruct;	// 0x66d11
-(void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x66c01
-(void)awakeFromNib;	// 0x66bfd
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;	// 0x665d5
@end
