/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIColor;

__attribute__((visibility("hidden")))
@interface MBBarProgressView : XXUnknownSuperclass {
	float _progress;
	UIColor* _lineColor;
	UIColor* _progressRemainingColor;
	UIColor* _progressColor;
}
@property(retain, nonatomic) UIColor* progressColor;	// G=0x66555; S=0x66565; 
@property(retain, nonatomic) UIColor* progressRemainingColor;	// G=0x6651d; S=0x6652d; 
@property(retain, nonatomic) UIColor* lineColor;	// G=0x664e5; S=0x664f5; 
@property(assign, nonatomic) float progress;	// G=0x664c5; S=0x664d5; 
-(void).cxx_destruct;	// 0x6658d
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;	// 0x664b5
-(id)observableKeypaths;	// 0x6645d
-(void)unregisterFromKVO;	// 0x6637d
-(void)registerForKVO;	// 0x66295
-(void)drawRect:(CGRect)rect;	// 0x65de1
-(void)dealloc;	// 0x65da1
-(id)initWithFrame:(CGRect)frame;	// 0x65c75
-(id)init;	// 0x65c45
@end

