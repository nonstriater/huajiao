/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PlayerGLView.h"
#import "living-Structs.h"


__attribute__((visibility("hidden")))
@interface HJPlayerGLView : PlayerGLView {
	unsigned heartTexture;
	unsigned program;
}
-(id)convertBitmapRGBA8ToUIImage:(char*)uiimage withWidth:(int)width withHeight:(int)height;	// 0x29d161
-(CGContextRef)newBitmapRGBA8ContextFromImage:(CGImageRef)image;	// 0x29d0ed
-(char*)convertUIImageToBitmapRGBA8:(id)bitmapRGBA8;	// 0x29d015
@end

