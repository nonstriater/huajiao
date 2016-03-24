/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UMTBase.h"
#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface UMTMiscInfo : XXUnknownSuperclass <UMTBase, NSCoding> {
	int __time_zone;
	NSString* __language;
	NSString* __country;
	double __latitude;
	double __longitude;
	NSString* __carrier;
	int __latency;
	NSString* __display_name;
	int __access_type;
	NSString* __access_subtype;
	BOOL __time_zone_isset;
	BOOL __language_isset;
	BOOL __country_isset;
	BOOL __latitude_isset;
	BOOL __longitude_isset;
	BOOL __carrier_isset;
	BOOL __latency_isset;
	BOOL __display_name_isset;
	BOOL __access_type_isset;
	BOOL __access_subtype_isset;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;	// G=0xb010e1; 
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic, getter=access_subtype, setter=setAccess_subtype:) NSString* access_subtype;	// G=0xb00941; S=0xb00975; 
@property(assign, nonatomic, getter=access_type, setter=setAccess_type:) int access_type;	// G=0xb008ed; S=0xb008fd; 
@property(retain, nonatomic, getter=display_name, setter=setDisplay_name:) NSString* display_name;	// G=0xb00825; S=0xb00859; 
@property(assign, nonatomic, getter=latency, setter=setLatency:) int latency;	// G=0xb007d1; S=0xb007e1; 
@property(retain, nonatomic, getter=carrier, setter=setCarrier:) NSString* carrier;	// G=0xb00709; S=0xb0073d; 
@property(assign, nonatomic, getter=longitude, setter=setLongitude:) double longitude;	// G=0xb006a5; S=0xb006bd; 
@property(assign, nonatomic, getter=latitude, setter=setLatitude:) double latitude;	// G=0xb00641; S=0xb00659; 
@property(retain, nonatomic, getter=country, setter=setCountry:) NSString* country;	// G=0xb00579; S=0xb005ad; 
@property(retain, nonatomic, getter=language, setter=setLanguage:) NSString* language;	// G=0xb004b1; S=0xb004e5; 
@property(assign, nonatomic, getter=time_zone, setter=setTime_zone:) int time_zone;	// G=0xb0045d; S=0xb0046d; 
-(void)validate;	// 0xb010dd
-(void)write:(id)write;	// 0xb00c81
-(void)read:(id)read;	// 0xb00a09
-(void)unsetAccess_subtype;	// 0xb009d1
-(BOOL)access_subtypeIsSet;	// 0xb009c1
-(void)unsetAccess_type;	// 0xb0092d
-(BOOL)access_typeIsSet;	// 0xb0091d
-(void)unsetDisplay_name;	// 0xb008b5
-(BOOL)display_nameIsSet;	// 0xb008a5
-(void)unsetLatency;	// 0xb00811
-(BOOL)latencyIsSet;	// 0xb00801
-(void)unsetCarrier;	// 0xb00799
-(BOOL)carrierIsSet;	// 0xb00789
-(void)unsetLongitude;	// 0xb006f5
-(BOOL)longitudeIsSet;	// 0xb006e5
-(void)unsetLatitude;	// 0xb00691
-(BOOL)latitudeIsSet;	// 0xb00681
-(void)unsetCountry;	// 0xb00609
-(BOOL)countryIsSet;	// 0xb005f9
-(void)unsetLanguage;	// 0xb00541
-(BOOL)languageIsSet;	// 0xb00531
-(void)unsetTime_zone;	// 0xb0049d
-(BOOL)time_zoneIsSet;	// 0xb0048d
-(void)dealloc;	// 0xb003bd
-(void)encodeWithCoder:(id)coder;	// 0xb00155
-(id)initWithCoder:(id)coder;	// 0xaffd89
-(id)initWithTime_zone:(int)time_zone language:(id)language country:(id)country latitude:(double)latitude longitude:(double)longitude carrier:(id)carrier latency:(int)latency display_name:(id)name access_type:(int)type access_subtype:(id)subtype;	// 0xaffbe9
-(id)init;	// 0xaffbbd
@end

