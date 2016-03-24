/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SongProtocol.h"

@class NSString, NSURL;

@interface SSong : XXUnknownSuperclass <SongProtocol> {
	NSURL* _url;
}
@property(readonly, assign, nonatomic) BOOL isSilence;	// G=0x495009; 
@property(assign, nonatomic) double quietTime;	// G=0x494ff9; S=0x495005; 
@property(retain, nonatomic) NSURL* ipodSongURL;	// G=0x494fe9; S=0x494ff5; 
@property(retain, nonatomic) NSURL* fileURL;	// G=0x494fc9; S=0x494fd9; 
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSURL* url;	// G=0x495051; S=0x495061; 
-(void)dealloc;	// 0x49500d
-(id)uid;	// 0x494ff1
-(void)setUid:(id)uid;	// 0x494fed
-(id)copy;	// 0x494f85
-(id)initWithURL:(id)url;	// 0x494f3d
@end

