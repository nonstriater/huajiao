/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface HJVerifiedInfo : XXUnknownSuperclass {
	BOOL _official;
	NSString* _label;
	NSString* _credentials;
	NSString* _realname;
	int _type;
}
@property(assign, nonatomic) BOOL official;	// G=0x12b6d9; S=0x12b6e9; 
@property(assign, nonatomic) int type;	// G=0x12b6b9; S=0x12b6c9; 
@property(retain, nonatomic) NSString* realname;	// G=0x12b681; S=0x12b691; 
@property(retain, nonatomic) NSString* credentials;	// G=0x12b649; S=0x12b659; 
@property(retain, nonatomic) NSString* label;	// G=0x12b611; S=0x12b621; 
+(id)userVerifiedWithInfo:(id)info;	// 0x12aff9
-(void).cxx_destruct;	// 0x12b6f9
-(id)dictionary;	// 0x12b46d
-(void)modifyFromVerifiedinfo:(id)verifiedinfo;	// 0x12b355
@end

