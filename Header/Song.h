/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SongProtocol.h"

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface Song : XXUnknownSuperclass <SongProtocol> {
	NSURL* _url;
}
@property(readonly, assign, nonatomic) BOOL isSilence;	// G=0x1734d9; 
@property(assign, nonatomic) double quietTime;	// G=0x1734c9; S=0x1734d5; 
@property(retain, nonatomic) NSURL* ipodSongURL;	// G=0x1734c1; S=0x1734c5; 
@property(retain, nonatomic) NSURL* fileURL;	// G=0x17349d; S=0x1734b1; 
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSURL* url;	// G=0x1734dd; S=0x1734ed; 
-(void).cxx_destruct;	// 0x173515
-(id)copy;	// 0x173459
-(id)initWithURL:(id)url;	// 0x173405
@end

