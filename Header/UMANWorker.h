/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

@interface UMANWorker : XXUnknownSuperclass {
	NSMutableArray* _envelopeFilePaths;
}
@property(retain, nonatomic) NSMutableArray* envelopeFilePaths;	// G=0xaee4a9; S=0xaee4b9; 
-(id)setupRequest:(id)request;	// 0xaee241
-(BOOL)postDataToServer:(id)server withFile:(id)file;	// 0xaedf11
-(BOOL)postDataWithFile:(id)file;	// 0xaedd19
-(void)main;	// 0xaedc01
-(void)dealloc;	// 0xaedbb1
@end
