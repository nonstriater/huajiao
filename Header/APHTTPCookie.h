/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary;

@interface APHTTPCookie : XXUnknownSuperclass {
	NSDictionary* _properties;
}
@property(retain, nonatomic) NSDictionary* properties;	// G=0xd1536d; S=0xd1537d; 
+(id)cookiesWithResponseHeaderFields:(id)responseHeaderFields forURL:(id)url;	// 0xd14dbd
-(void).cxx_destruct;	// 0xd153a5
-(id)copy;	// 0xd152fd
-(id)requestHeaderField;	// 0xd15275
-(id)description;	// 0xd150f5
-(BOOL)isEqual:(id)equal;	// 0xd14fe9
-(id)path;	// 0xd14f99
-(id)value;	// 0xd14f49
-(id)name;	// 0xd14ef9
-(id)expiresDate;	// 0xd14ef5
-(id)domain;	// 0xd14ea5
-(id)initWithProperties:(id)properties;	// 0xd14e4d
@end

