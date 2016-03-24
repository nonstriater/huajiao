/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSOperationQueue, CMMotionManager;

__attribute__((visibility("hidden")))
@interface SSAccelerometerInfo : XXUnknownSuperclass {
	CMMotionManager* motionManager;
	NSOperationQueue* deviceMotionQueue;
	NSOperationQueue* accelQueue;
	NSOperationQueue* gyroQueue;
	NSString* attitudeString;
	NSString* gravityString;
	NSString* magneticFieldString;
	NSString* rotationRateString;
	NSString* userAccelerationString;
	NSString* rawGyroscopeString;
	NSString* rawAccelerometerString;
}
@property(readonly, assign, nonatomic) NSString* rawAccelerometerString;	// G=0x30d815; 
@property(readonly, assign, nonatomic) NSString* rawGyroscopeString;	// G=0x30d805; 
@property(readonly, assign, nonatomic) NSString* userAccelerationString;	// G=0x30d7f5; 
@property(readonly, assign, nonatomic) NSString* rotationRateString;	// G=0x30d7e5; 
@property(readonly, assign, nonatomic) NSString* magneticFieldString;	// G=0x30d7d5; 
@property(readonly, assign, nonatomic) NSString* gravityString;	// G=0x30d7c5; 
@property(readonly, assign, nonatomic) NSString* attitudeString;	// G=0x30d7b5; 
+(int)deviceOrientation;	// 0x30cc49
-(void).cxx_destruct;	// 0x30d825
-(void)processMotion:(id)motion withError:(id)error;	// 0x30d325
-(void)processGyro:(id)gyro withError:(id)error;	// 0x30d215
-(void)processAccel:(id)accel withError:(id)error;	// 0x30d105
-(void)stopLoggingMotionData;	// 0x30d071
-(void)startLoggingMotionData;	// 0x30cd31
@end
