/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface HJDiscoveryV3Model : XXUnknownSuperclass {
	NSMutableArray* _commandCards;
}
@property(retain, nonatomic) NSMutableArray* commandCards;	// G=0x117879; S=0x117889; 
-(void).cxx_destruct;	// 0x1178b1
-(void)parseCommandCardsData:(id)data;	// 0x117571
-(void)requestCommandCardsSuccess:(id)success failure:(id)failure;	// 0x1173f5
@end

