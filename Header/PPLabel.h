/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "living-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSSet;
@protocol PPLabelDelegate;

__attribute__((visibility("hidden")))
@interface PPLabel : XXUnknownSuperclass {
	id<PPLabelDelegate> _delegate;
	NSSet* _lastTouches;
}
@property(retain, nonatomic) NSSet* lastTouches;	// G=0x25f23d; S=0x25f24d; 
@property(assign, nonatomic) __weak id<PPLabelDelegate> delegate;	// G=0x25f209; S=0x25f229; 
-(void).cxx_destruct;	// 0x25f275
-(void)cancelCurrentTouch;	// 0x25f14d
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x25f061
-(void)touchesEnded:(id)ended withEvent:(id)event;	// 0x25ef31
-(void)touchesMoved:(id)moved withEvent:(id)event;	// 0x25ee25
-(void)touchesBegan:(id)began withEvent:(id)event;	// 0x25ed19
-(CGRect)textRect;	// 0x25eb9d
-(long)characterIndexAtPoint:(CGPoint)point;	// 0x25e4ad
-(id)initWithCoder:(id)coder;	// 0x25e465
-(id)initWithFrame:(CGRect)frame;	// 0x25e409
@end

