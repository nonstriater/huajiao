/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol WBHttpRequestDelegate <NSObject>
@optional
-(void)request:(id)request didReciveRedirectResponseWithURI:(id)uri;
-(void)request:(id)request didFinishLoadingWithDataResult:(id)dataResult;
-(void)request:(id)request didFinishLoadingWithResult:(id)result;
-(void)request:(id)request didFailWithError:(id)error;
-(void)request:(id)request didReceiveResponse:(id)response;
@end

