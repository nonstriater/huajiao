/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView;

__attribute__((visibility("hidden")))
@interface HJBlurView : XXUnknownSuperclass {
	UIImageView* _blurImageView;
}
@property(retain, nonatomic) UIImageView* blurImageView;	// G=0x174171; S=0x174181; 
+(id)blurImageWithImage:(id)image;	// 0x173d61
+(id)rotateImage:(id)image fromOrientation:(int)orientation;	// 0x17389d
+(id)scaleImage:(id)image toSize:(CGSize)size;	// 0x173839
+(id)scaleImage:(id)image toScale:(double)scale;	// 0x17371d
-(void).cxx_destruct;	// 0x1741a9
-(void)blurViewWithImageUrl:(id)imageUrl;	// 0x173e81
-(void)blurViewWithImage:(id)image;	// 0x173c11
-(void)layoutSubviews;	// 0x173689
-(id)initWithCoder:(id)coder;	// 0x1735d9
-(id)initWithFrame:(CGRect)frame;	// 0x173529
@end

