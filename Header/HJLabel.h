/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface HJLabel : XXUnknownSuperclass {
	int _textVerticalAlignment;
}
@property(assign, nonatomic) int textVerticalAlignment;	// G=0x164489; S=0x164499; 
-(void)drawTextInRect:(CGRect)rect;	// 0x1643f5
-(CGRect)textRectForBounds:(CGRect)bounds limitedToNumberOfLines:(int)lines;	// 0x164331
-(void)setVerticalAlignment:(int)alignment;	// 0x164311
-(id)initWithFrame:(CGRect)frame;	// 0x1642b5
@end

