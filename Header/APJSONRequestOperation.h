/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "APHTTPRequestOperation.h"

@class NSRecursiveLock, NSError;

@interface APJSONRequestOperation : APHTTPRequestOperation {
	id _responseJSON;
	unsigned _JSONReadingOptions;
	NSError* _JSONError;
}
@property(retain, nonatomic) NSRecursiveLock* lock;
@property(retain, nonatomic) NSError* JSONError;	// G=0xcf0b65; S=0xcf0b75; 
@property(assign, nonatomic) unsigned JSONReadingOptions;	// G=0xcf0b45; S=0xcf0b55; 
@property(retain, nonatomic) id responseJSON;	// G=0xcf00c9; S=0xcf0b31; 
+(BOOL)canProcessRequest:(id)request;	// 0xcf049d
+(id)acceptableContentTypes;	// 0xcf0445
+(id)JSONRequestOperationWithRequest:(id)request success:(id)success failure:(id)failure;	// 0xcefe7d
-(void).cxx_destruct;	// 0xcf0b9d
-(void)setCompletionBlockWithSuccess:(id)success failure:(id)failure;	// 0xcf0555
-(id)error;	// 0xcf03f5
@end

