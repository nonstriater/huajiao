/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage;

__attribute__((visibility("hidden")))
@interface WXSlider : XXUnknownSuperclass {
	float centerX;
	float centerY;
	float smallImageWidth;
	float smallImageHeight;
	float bigImageWidth;
	float bigImageHeight;
	UIImage* smallImage;
	UIImage* bigImage;
	float _space;
	float _minValue;
	int _currentValue;
}
@property(assign, nonatomic) int currentValue;	// G=0x3a1001; S=0x3a0d51; 
@property(assign, nonatomic) float minValue;	// G=0x3a0fe1; S=0x3a0ff1; 
@property(assign, nonatomic) float space;	// G=0x3a0fd1; S=0x3a0d71; 
-(void).cxx_destruct;	// 0x3a1011
-(id)initWithFrame:(CGRect)frame;	// 0x3a0d91
-(void)drawRect:(CGRect)rect;	// 0x3a00b9
@end

