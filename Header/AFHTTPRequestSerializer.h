/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AFURLRequestSerialization.h"
#import "living-Structs.h"

@class NSString, NSMutableDictionary, NSMutableSet, NSSet, NSDictionary;

__attribute__((visibility("hidden")))
@interface AFHTTPRequestSerializer : XXUnknownSuperclass <AFURLRequestSerialization> {
	BOOL _allowsCellularAccess;
	BOOL _HTTPShouldHandleCookies;
	BOOL _HTTPShouldUsePipelining;
	unsigned _stringEncoding;
	unsigned _cachePolicy;
	unsigned _networkServiceType;
	NSSet* _HTTPMethodsEncodingParametersInURI;
	NSMutableSet* _mutableObservedChangedKeyPaths;
	NSMutableDictionary* _mutableHTTPRequestHeaders;
	unsigned _queryStringSerializationStyle;
	id _queryStringSerialization;
	double _timeoutInterval;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(copy, nonatomic) id queryStringSerialization;	// G=0x237d39; S=0x237d4d; 
@property(assign, nonatomic) unsigned queryStringSerializationStyle;	// G=0x237d19; S=0x237d29; 
@property(retain, nonatomic) NSMutableDictionary* mutableHTTPRequestHeaders;	// G=0x237ce1; S=0x237cf1; 
@property(retain, nonatomic) NSMutableSet* mutableObservedChangedKeyPaths;	// G=0x237ca9; S=0x237cb9; 
@property(retain, nonatomic) NSSet* HTTPMethodsEncodingParametersInURI;	// G=0x237c71; S=0x237c81; 
@property(readonly, assign, nonatomic) NSDictionary* HTTPRequestHeaders;	// G=0x236035; 
@property(assign, nonatomic) double timeoutInterval;	// G=0x237c59; S=0x235fad; 
@property(assign, nonatomic) unsigned networkServiceType;	// G=0x237c49; S=0x235f2d; 
@property(assign, nonatomic) BOOL HTTPShouldUsePipelining;	// G=0x237c39; S=0x235ead; 
@property(assign, nonatomic) BOOL HTTPShouldHandleCookies;	// G=0x237c29; S=0x235e2d; 
@property(assign, nonatomic) unsigned cachePolicy;	// G=0x237c19; S=0x235dad; 
@property(assign, nonatomic) BOOL allowsCellularAccess;	// G=0x237c09; S=0x235d2d; 
@property(assign, nonatomic) unsigned stringEncoding;	// G=0x237be9; S=0x237bf9; 
+(BOOL)supportsSecureCoding;	// 0x2378e9
+(BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x237781
+(id)serializer;	// 0x2354ed
-(void).cxx_destruct;	// 0x237d5d
-(id)copyWithZone:(NSZone*)zone;	// 0x237af5
-(void)encodeWithCoder:(id)coder;	// 0x237a45
-(id)initWithCoder:(id)coder;	// 0x2378ed
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;	// 0x237801
-(id)requestBySerializingRequest:(id)request withParameters:(id)parameters error:(id*)error;	// 0x237199
-(id)requestWithMultipartFormRequest:(id)multipartFormRequest writingStreamContentsToFile:(id)file completionHandler:(id)handler;	// 0x236c9d
-(id)multipartFormRequestWithMethod:(id)method URLString:(id)string parameters:(id)parameters constructingBodyWithBlock:(id)block error:(id*)error;	// 0x236789
-(id)multipartFormRequestWithMethod:(id)method URLString:(id)string parameters:(id)parameters constructingBodyWithBlock:(id)block;	// 0x236719
-(id)requestWithMethod:(id)method URLString:(id)string parameters:(id)parameters error:(id*)error;	// 0x2364e1
-(id)requestWithMethod:(id)method URLString:(id)string parameters:(id)parameters;	// 0x236489
-(void)setQueryStringSerializationWithBlock:(id)block;	// 0x236479
-(void)setQueryStringSerializationWithStyle:(unsigned)style;	// 0x236449
-(void)clearAuthorizationHeader;	// 0x236405
-(void)setAuthorizationHeaderFieldWithToken:(id)token;	// 0x2363a5
-(void)setAuthorizationHeaderFieldWithUsername:(id)username password:(id)password;	// 0x236155
-(id)valueForHTTPHeaderField:(id)httpheaderField;	// 0x2360f5
-(void)setValue:(id)value forHTTPHeaderField:(id)httpheaderField;	// 0x236089
-(void)dealloc;	// 0x235c05
-(id)init;	// 0x235519
@end

