/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class MGSwipeAnimation;

__attribute__((visibility("hidden")))
@interface MGSwipeSettings : XXUnknownSuperclass {
	BOOL _keepButtonsSwiped;
	BOOL _onlySwipeButtons;
	int _transition;
	float _threshold;
	float _offset;
	MGSwipeAnimation* _showAnimation;
	MGSwipeAnimation* _hideAnimation;
	MGSwipeAnimation* _stretchAnimation;
}
@property(assign, nonatomic) BOOL onlySwipeButtons;	// G=0x249a79; S=0x249a89; 
@property(assign, nonatomic) BOOL keepButtonsSwiped;	// G=0x249a59; S=0x249a69; 
@property(assign, nonatomic) float animationDuration;	// G=0x249931; S=0x2498d9; 
@property(retain, nonatomic) MGSwipeAnimation* stretchAnimation;	// G=0x249a21; S=0x249a31; 
@property(retain, nonatomic) MGSwipeAnimation* hideAnimation;	// G=0x2499e9; S=0x2499f9; 
@property(retain, nonatomic) MGSwipeAnimation* showAnimation;	// G=0x2499b1; S=0x2499c1; 
@property(assign, nonatomic) float offset;	// G=0x249991; S=0x2499a1; 
@property(assign, nonatomic) float threshold;	// G=0x249971; S=0x249981; 
@property(assign, nonatomic) int transition;	// G=0x249951; S=0x249961; 
-(void).cxx_destruct;	// 0x249a99
-(id)init;	// 0x2497ad
@end
