/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, UIImageView, NSMutableArray;

__attribute__((visibility("hidden")))
@interface HJAnimView : XXUnknownSuperclass {
	UIImageView* _gifView;
	UILabel* _loadLabel;
	NSMutableArray* giftFrames;
}
-(void).cxx_destruct;	// 0x304db9
-(void)stopAnim;	// 0x304d21
-(void)startAnimWithType:(int)type loadText:(id)text;	// 0x3046f5
-(void)startAnimWithType:(int)type;	// 0x304195
-(id)initWithMyFrame:(CGRect)myFrame;	// 0x304139
-(id)loadLabel;	// 0x303ff1
-(id)gifView;	// 0x303f69
@end

