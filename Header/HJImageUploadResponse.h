/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HJImageUploadResponse : XXUnknownSuperclass {
	NSString* _URLString;
	NSString* _firstThumbURLString;
	NSDictionary* _thumbURLStrings;
}
@property(retain, nonatomic) NSDictionary* thumbURLStrings;	// G=0x1acc79; S=0x1acc89; 
@property(retain, nonatomic) NSString* firstThumbURLString;	// G=0x1acc41; S=0x1acc51; 
@property(retain, nonatomic) NSString* URLString;	// G=0x1acc09; S=0x1acc19; 
+(id)responseWithUserInfo:(id)userInfo;	// 0x1aca89
-(void).cxx_destruct;	// 0x1accb1
@end
