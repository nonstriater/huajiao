/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface MobClickLocation : XXUnknownSuperclass {
	double _latitude;
	double _longitude;
	double _gps_time;
}
@property(assign, nonatomic) double gps_time;	// G=0xb0a631; S=0xb0a649; 
@property(assign, nonatomic) double longitude;	// G=0xb0a605; S=0xb0a61d; 
@property(assign, nonatomic) double latitude;	// G=0xb0a5d9; S=0xb0a5f1; 
+(void)setLocation:(id)location;	// 0xb0a565
+(void)setLatitude:(double)latitude longitude:(double)longitude;	// 0xb0a47d
+(id)sharedInstance;	// 0xb0a31d
@end

