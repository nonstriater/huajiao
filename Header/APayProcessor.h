/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface APayProcessor : XXUnknownSuperclass {
	id _routeBlock;
}
@property(copy, nonatomic) id routeBlock;	// G=0xce2e3d; S=0xce2e51; 
-(void).cxx_destruct;	// 0xce2e61
-(void)processAuthInfo:(id)info callback:(id)callback;	// 0xce291d
-(id)gentidActionDic;	// 0xce2855
-(id)mainActionDic;	// 0xce278d
-(id)netUtilDic;	// 0xce26f5
-(id)fetchFormWithJson:(id)json;	// 0xce24a1
-(id)processJSCommand:(id)command;	// 0xce1ce9
-(id)analyseJSCommand:(id)command;	// 0xce1901
-(BOOL)needUpdatePublicKeyWithJson:(id)json;	// 0xce1835
-(id)processDataWithJson:(id)json;	// 0xce1785
-(void)postRouteRequestWithUrl:(id)url requestInfo:(id)info externParams:(id)params success:(id)success fail:(id)fail;	// 0xce15c9
-(void)setDeviceInfo:(id)info;	// 0xce1475
-(id)utdid;	// 0xce134d
-(id)requestInfoWithParams:(id)params andAction:(id)action;	// 0xce10f5
-(void)processOrder:(id)order callbackRoute:(id)route;	// 0xce0c11
-(void)processGenTid:(id)tid;	// 0xce0901
@end

