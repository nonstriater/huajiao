/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableArray;

__attribute__((visibility("hidden")))
@interface HJDiscoverPeopleItem : XXUnknownSuperclass {
	BOOL _isFollowed;
	BOOL _isForbidden;
	NSString* _nickName;
	NSString* _signature;
	NSString* _headUrl;
	NSString* _uid;
	int _starType;
	NSMutableArray* _feedsArray;
}
@property(retain, nonatomic) NSMutableArray* feedsArray;	// G=0x406c79; S=0x406c89; 
@property(assign, nonatomic) int starType;	// G=0x406c59; S=0x406c69; 
@property(copy, nonatomic) NSString* uid;	// G=0x406c35; S=0x406c49; 
@property(assign, nonatomic) BOOL isForbidden;	// G=0x406c15; S=0x406c25; 
@property(assign, nonatomic) BOOL isFollowed;	// G=0x406bf5; S=0x406c05; 
@property(copy, nonatomic) NSString* headUrl;	// G=0x406bd1; S=0x406be5; 
@property(copy, nonatomic) NSString* signature;	// G=0x406bad; S=0x406bc1; 
@property(copy, nonatomic) NSString* nickName;	// G=0x406b89; S=0x406b9d; 
-(void).cxx_destruct;	// 0x406cb1
-(void)parseDiscoverPeopleFeeds:(id)feeds;	// 0x406881
-(void)parseDiscoverPeople:(id)people;	// 0x4065a5
-(void)parseDiscoverItem:(id)item;	// 0x40652d
@end

