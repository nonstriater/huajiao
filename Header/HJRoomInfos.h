/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, HJPartnerInfo, NSArray;

__attribute__((visibility("hidden")))
@interface HJRoomInfos : XXUnknownSuperclass {
	NSString* _roomid;
	unsigned _memcount;
	unsigned _regmemcount;
	HJPartnerInfo* _partnerInfo;
	NSArray* _members;
	long long _version;
}
@property(retain, nonatomic) NSArray* members;	// G=0x33dfad; S=0x33dfbd; 
@property(retain, nonatomic) HJPartnerInfo* partnerInfo;	// G=0x33df75; S=0x33df85; 
@property(assign, nonatomic) unsigned regmemcount;	// G=0x33df55; S=0x33df65; 
@property(assign, nonatomic) unsigned memcount;	// G=0x33df35; S=0x33df45; 
@property(assign, nonatomic) long long version;	// G=0x33df09; S=0x33df21; 
@property(retain, nonatomic) NSString* roomid;	// G=0x33ded1; S=0x33dee1; 
-(void).cxx_destruct;	// 0x33dfe5
-(id)initWithDictionary:(id)dictionary;	// 0x33d8e5
@end

