/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class JQHeart;
@protocol HJHeartViewDelegate;

__attribute__((visibility("hidden")))
@interface HJHeartView : XXUnknownSuperclass {
	CGPathRef _path;
	JQHeart* _heart;
	id<HJHeartViewDelegate> _delegate;
}
@property(assign, nonatomic) __weak id<HJHeartViewDelegate> delegate;	// G=0x30030d; S=0x30032d; 
@property(retain, nonatomic) JQHeart* heart;	// G=0x3002d5; S=0x3002e5; 
@property(assign, nonatomic) CGPathRef path;	// G=0x3002b5; S=0x3002c5; 
-(void).cxx_destruct;	// 0x300341
-(void)dealloc;	// 0x300251
-(void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x300111
-(void)stopPathAnimation;	// 0x300099
-(void)startPathAnimation;	// 0x2ffd79
@end

