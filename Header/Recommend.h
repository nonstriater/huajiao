/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableArray;

__attribute__((visibility("hidden")))
@interface Recommend : XXUnknownSuperclass {
	BOOL _more;
	BOOL _isEmpty;
	NSMutableArray* _videos;
	NSString* _offset;
	int _total;
}
@property(assign, nonatomic) BOOL isEmpty;	// G=0x1733b1; S=0x1733c1; 
@property(assign, nonatomic) int total;	// G=0x173391; S=0x1733a1; 
@property(assign, nonatomic) BOOL more;	// G=0x173371; S=0x173381; 
@property(retain, nonatomic) NSString* offset;	// G=0x173339; S=0x173349; 
@property(retain, nonatomic) NSMutableArray* videos;	// G=0x173301; S=0x173311; 
+(id)responseWithInfo:(id)info;	// 0x173035
-(void).cxx_destruct;	// 0x1733d1
@end

