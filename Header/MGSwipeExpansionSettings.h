/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class MGSwipeAnimation, UIColor;

__attribute__((visibility("hidden")))
@interface MGSwipeExpansionSettings : XXUnknownSuperclass {
	BOOL _fillOnTrigger;
	int _buttonIndex;
	float _threshold;
	UIColor* _expansionColor;
	int _expansionLayout;
	MGSwipeAnimation* _triggerAnimation;
	float _animationDuration;
}
@property(assign, nonatomic) float animationDuration;	// G=0x249c91; S=0x249ca1; 
@property(retain, nonatomic) MGSwipeAnimation* triggerAnimation;	// G=0x249c59; S=0x249c69; 
@property(assign, nonatomic) int expansionLayout;	// G=0x249c39; S=0x249c49; 
@property(retain, nonatomic) UIColor* expansionColor;	// G=0x249c01; S=0x249c11; 
@property(assign, nonatomic) float threshold;	// G=0x249be1; S=0x249bf1; 
@property(assign, nonatomic) BOOL fillOnTrigger;	// G=0x249bc1; S=0x249bd1; 
@property(assign, nonatomic) int buttonIndex;	// G=0x249ba1; S=0x249bb1; 
-(void).cxx_destruct;	// 0x249cb1
-(id)init;	// 0x249ae1
@end

