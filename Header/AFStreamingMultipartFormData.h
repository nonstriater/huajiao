/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AFMultipartFormData.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableURLRequest, AFMultipartBodyStream;

__attribute__((visibility("hidden")))
@interface AFStreamingMultipartFormData : XXUnknownSuperclass <AFMultipartFormData> {
	NSMutableURLRequest* _request;
	unsigned _stringEncoding;
	NSString* _boundary;
	AFMultipartBodyStream* _bodyStream;
}
@property(retain, nonatomic) AFMultipartBodyStream* bodyStream;	// G=0x238c6d; S=0x238c7d; 
@property(copy, nonatomic) NSString* boundary;	// G=0x238c49; S=0x238c5d; 
@property(assign, nonatomic) unsigned stringEncoding;	// G=0x238c29; S=0x238c39; 
@property(copy, nonatomic) NSMutableURLRequest* request;	// G=0x238c05; S=0x238c19; 
-(void).cxx_destruct;	// 0x238ca5
-(id)requestByFinalizingMultipartFormData;	// 0x238a01
-(void)throttleBandwidthWithPacketSize:(unsigned)packetSize delay:(double)delay;	// 0x238989
-(void)appendPartWithHeaders:(id)headers body:(id)body;	// 0x238841
-(void)appendPartWithFormData:(id)formData name:(id)name;	// 0x238775
-(void)appendPartWithFileData:(id)fileData name:(id)name fileName:(id)name3 mimeType:(id)type;	// 0x238669
-(void)appendPartWithInputStream:(id)inputStream name:(id)name fileName:(id)name3 length:(long long)length mimeType:(id)type;	// 0x238471
-(BOOL)appendPartWithFileURL:(id)fileURL name:(id)name fileName:(id)name3 mimeType:(id)type error:(id*)error;	// 0x237fc9
-(BOOL)appendPartWithFileURL:(id)fileURL name:(id)name error:(id*)error;	// 0x237ee5
-(id)initWithURLRequest:(id)urlrequest stringEncoding:(unsigned)encoding;	// 0x237db9
@end
