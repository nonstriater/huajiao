/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView, NSURL;

__attribute__((visibility("hidden")))
@interface CollectionViewUserCell : XXUnknownSuperclass {
	NSURL* _imageUrl;
	int _showVType;
	UIImageView* _imageView;
}
@property(retain, nonatomic) UIImageView* imageView;	// G=0x271d4d; S=0x271d5d; 
@property(assign, nonatomic) int showVType;	// G=0x271d3d; S=0x271cd9; 
@property(retain, nonatomic) NSURL* imageUrl;	// G=0x271d2d; S=0x271c31; 
-(void).cxx_destruct;	// 0x271d85
-(void)prepareForReuse;	// 0x271be1
-(void)layoutSubviews;	// 0x2718d9
-(id)initWithFrame:(CGRect)frame;	// 0x27177d
@end

