/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface QHADataUtil : XXUnknownSuperclass {
}
+(id)urlDecodeString:(id)string;	// 0x471c31
+(id)urlEncodeString:(id)string;	// 0x471ba9
+(id)dictionaryToGZipBase64CompressedJsonString:(id)gzipBase64CompressedJsonString;	// 0x471b5d
+(id)dictionaryToJsonData:(id)jsonData;	// 0x471ae1
+(id)decompressGZipData:(id)data;	// 0x471a79
+(id)decompressGZipBase64String:(id)string;	// 0x4719dd
+(id)compressDataToGZipBase64String:(id)gzipBase64String;	// 0x471941
+(id)compressDataToGZipBase64Data:(id)gzipBase64Data;	// 0x4718f9
+(id)data:(id)data byGZipDecompressingWithWindowSize:(int)windowSize error:(id*)error;	// 0x47156d
+(id)data:(id)data byGZipDecompressingWithError:(id*)error;	// 0x47154d
+(id)data:(id)data byGZipCompressingAtLevel:(int)level windowSize:(int)size memoryLevel:(int)level4 strategy:(int)strategy error:(id*)error;	// 0x4711c5
+(id)data:(id)data byGZipCompressingWithError:(id*)error;	// 0x47118d
+(id)base64EncodedStringWithData:(id)data;	// 0x471111
+(id)dataWithBase64EncodedString:(id)base64EncodedString;	// 0x470ff9
+(id)md5:(id)a5;	// 0x470ee1
@end

