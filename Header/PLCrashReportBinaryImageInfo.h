/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class PLCrashReportProcessorInfo, NSString;

@interface PLCrashReportBinaryImageInfo : XXUnknownSuperclass {
	PLCrashReportProcessorInfo* _processorInfo;
	unsigned long long _baseAddress;
	unsigned long long _imageSize;
	NSString* _imageName;
	BOOL _hasImageUUID;
	NSString* _imageUUID;
}
@property(readonly, assign, nonatomic) NSString* imageUUID;	// G=0xcb3451; 
@property(readonly, assign, nonatomic) BOOL hasImageUUID;	// G=0xcb3441; 
@property(readonly, assign, nonatomic) NSString* imageName;	// G=0xcb3431; 
@property(readonly, assign, nonatomic) unsigned long long imageSize;	// G=0xcb3419; 
@property(readonly, assign, nonatomic) unsigned long long imageBaseAddress;	// G=0xcb3401; 
@property(readonly, assign, nonatomic) PLCrashReportProcessorInfo* codeType;	// G=0xcb33f1; 
-(void)dealloc;	// 0xcb3379
-(id)initWithCodeType:(id)codeType baseAddress:(unsigned long long)address size:(unsigned long long)size name:(id)name uuid:(id)uuid;	// 0xcb3209
@end

