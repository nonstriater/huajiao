/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IMProtoHelper.h"

@class NSString;

@interface IMProtoUserInfo : IMProtoHelper {
	NSString* _userId;
	NSString* _userType;
	int _status;
	NSString* _jid;
	NSString* _platform;
	NSString* _mobileType;
	int _appId;
	int _clientVersion;
}
@property(assign) int clientVersion;	// G=0xa0c0ad; S=0xa0c0bd; 
@property(assign) int appId;	// G=0xa0c08d; S=0xa0c09d; 
@property(retain) NSString* mobileType;	// G=0xa0c069; S=0xa0c07d; 
@property(retain) NSString* platform;	// G=0xa0c045; S=0xa0c059; 
@property(retain) NSString* jid;	// G=0xa0c021; S=0xa0c035; 
@property(assign) int status;	// G=0xa0c001; S=0xa0c011; 
@property(retain) NSString* userType;	// G=0xa0bfdd; S=0xa0bff1; 
@property(retain) NSString* userId;	// G=0xa0bfb9; S=0xa0bfcd; 
-(void).cxx_destruct;	// 0xa0c0cd
-(id)description;	// 0xa0bd75
-(id)init;	// 0xa0bbb1
@end
