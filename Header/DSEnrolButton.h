/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, NSDate;

__attribute__((visibility("hidden")))
@interface DSEnrolButton : XXUnknownSuperclass {
	int _second;
	int _totalSecond;
	NSTimer* _timer;
	NSDate* _startDate;
	id _didChangeBlock;
	id _didFinishedBlock;
	id _touchedDownBlock;
}
-(void).cxx_destruct;	// 0x3dafa9
-(void)didFinished:(id)finished;	// 0x3daf75
-(void)didChange:(id)change;	// 0x3daf41
-(void)stop;	// 0x3dad5d
-(void)timerStart:(id)start;	// 0x3dab6d
-(void)startWithSecond:(int)second;	// 0x3daa61
-(void)touched:(id)touched;	// 0x3daa09
-(void)addToucheHandler:(id)handler;	// 0x3da9b1
@end

