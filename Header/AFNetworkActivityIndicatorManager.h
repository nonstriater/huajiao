/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer;

__attribute__((visibility("hidden")))
@interface AFNetworkActivityIndicatorManager : XXUnknownSuperclass {
	BOOL _enabled;
	int _activityCount;
	NSTimer* _activityIndicatorVisibilityTimer;
}
@property(readonly, assign, nonatomic, getter=isNetworkActivityIndicatorVisible) BOOL networkActivityIndicatorVisible;	// G=0x161881; 
@property(retain, nonatomic) NSTimer* activityIndicatorVisibilityTimer;	// G=0x161d21; S=0x161d31; 
@property(assign, nonatomic) int activityCount;	// G=0x161d11; S=0x1618fd; 
@property(readonly, assign, nonatomic) BOOL isNetworkActivityIndicatorVisible;
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x161cf1; S=0x161d01; 
+(id)keyPathsForValuesAffectingIsNetworkActivityIndicatorVisible;	// 0x161481
+(id)sharedManager;	// 0x1613c1
-(void).cxx_destruct;	// 0x161d59
-(void)networkRequestDidFinish:(id)networkRequest;	// 0x161c9d
-(void)networkRequestDidStart:(id)networkRequest;	// 0x161b45
-(void)decrementActivityCount;	// 0x161a6d
-(void)incrementActivityCount;	// 0x161999
-(void)updateNetworkActivityIndicatorVisibility;	// 0x1618a1
-(void)updateNetworkActivityIndicatorVisibilityDelayed;	// 0x1616d9
-(void)dealloc;	// 0x16164d
-(id)init;	// 0x1614a9
@end

