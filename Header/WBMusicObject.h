/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WBBaseMediaObject.h"

@class NSString;

@interface WBMusicObject : WBBaseMediaObject {
	NSString* musicUrl;
	NSString* musicLowBandUrl;
	NSString* musicStreamUrl;
	NSString* musicLowBandStreamUrl;
}
@property(retain, nonatomic) NSString* musicLowBandStreamUrl;	// G=0xd45b89; S=0xd45b99; 
@property(retain, nonatomic) NSString* musicStreamUrl;	// G=0xd45b51; S=0xd45b61; 
@property(retain, nonatomic) NSString* musicLowBandUrl;	// G=0xd45b19; S=0xd45b29; 
@property(retain, nonatomic) NSString* musicUrl;	// G=0xd45ae1; S=0xd45af1; 
-(void).cxx_destruct;	// 0xd45bc1
-(void)loadFromDictionary:(id)dictionary;	// 0xd459b5
-(void)storeToDictionary:(id)dictionary;	// 0xd45815
-(id)validate;	// 0xd4570d
@end
