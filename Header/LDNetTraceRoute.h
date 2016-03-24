/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;
@protocol LDNetTraceRouteDelegate;

__attribute__((visibility("hidden")))
@interface LDNetTraceRoute : XXUnknownSuperclass {
	int udpPort;
	int maxTTL;
	int readTimeout;
	int maxAttempts;
	NSString* running;
	bool isrunning;
	id<LDNetTraceRouteDelegate> _delegate;
}
@property(assign, nonatomic) __weak id<LDNetTraceRouteDelegate> delegate;	// G=0x134c41; S=0x134c61; 
-(void).cxx_destruct;	// 0x134c75
-(bool)isRunning;	// 0x134c31
-(void)stopTrace;	// 0x134bfd
-(unsigned char)doTraceRoute:(id)route;	// 0x134589
-(id)initWithMaxTTL:(int)maxTTL timeout:(int)timeout maxAttempts:(int)attempts port:(int)port;	// 0x134515
@end
