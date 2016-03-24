/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSString, NSURLConnection, NSMutableData;
@protocol WBHttpRequestDelegate;

@interface WBHttpRequest : XXUnknownSuperclass {
	NSURLConnection* connection;
	NSMutableData* responseData;
	NSString* url;
	NSString* httpMethod;
	NSDictionary* params;
	id<WBHttpRequestDelegate> delegate;
	NSString* tag;
}
@property(retain, nonatomic) NSString* tag;	// G=0xd3e225; S=0xd3e235; 
@property(assign, nonatomic) __weak id<WBHttpRequestDelegate> delegate;	// G=0xd3e1f1; S=0xd3e211; 
@property(retain, nonatomic) NSDictionary* params;	// G=0xd3e1b9; S=0xd3e1c9; 
@property(retain, nonatomic) NSString* httpMethod;	// G=0xd3e181; S=0xd3e191; 
@property(retain, nonatomic) NSString* url;	// G=0xd3e149; S=0xd3e159; 
+(void)cleanSubCookies;	// 0xd3dc3d
+(id)serializeURL:(id)url params:(id)params httpMethod:(id)method;	// 0xd3d305
+(id)requestWithAccessToken:(id)accessToken url:(id)url httpMethod:(id)method params:(id)params queue:(id)queue withCompletionHandler:(id)completionHandler isGuest:(BOOL)guest;	// 0xd3c97d
+(id)requestWithAccessToken:(id)accessToken url:(id)url httpMethod:(id)method params:(id)params delegate:(id)delegate withTag:(id)tag isGuest:(BOOL)guest;	// 0xd3c70d
+(id)requestWithAccessToken:(id)accessToken url:(id)url httpMethod:(id)method params:(id)params queue:(id)queue withCompletionHandler:(id)completionHandler;	// 0xd3c669
+(id)requestWithAccessToken:(id)accessToken url:(id)url httpMethod:(id)method params:(id)params delegate:(id)delegate withTag:(id)tag;	// 0xd3c5d9
+(id)requestWithURL:(id)url httpMethod:(id)method params:(id)params queue:(id)queue withCompletionHandler:(id)completionHandler;	// 0xd3c489
+(id)requestWithURL:(id)url httpMethod:(id)method params:(id)params delegate:(id)delegate withTag:(id)tag;	// 0xd3bf31
+(id)requestForGameAchievementGain:(id)gameAchievementGain withAccessToken:(id)accessToken andOtherProperties:(id)properties queue:(id)queue withCompletionHandler:(id)completionHandler;	// 0xd26945
+(id)requestForFriendsGameScore:(id)friendsGameScore withAccessToken:(id)accessToken andOtherProperties:(id)properties queue:(id)queue withCompletionHandler:(id)completionHandler;	// 0xd26791
+(id)requestForGameScore:(id)gameScore withAccessToken:(id)accessToken andOtherProperties:(id)properties queue:(id)queue withCompletionHandler:(id)completionHandler;	// 0xd265dd
+(id)addGameScoreGain:(id)gain withAccessToken:(id)accessToken andOtherProperties:(id)properties queue:(id)queue withCompletionHandler:(id)completionHandler;	// 0xd26429
+(id)addGameAchievementGain:(id)gain withAccessToken:(id)accessToken andOtherProperties:(id)properties queue:(id)queue withCompletionHandler:(id)completionHandler;	// 0xd26275
+(id)addGameAchievementObject:(id)object withAccessToken:(id)accessToken andOtherProperties:(id)properties queue:(id)queue withCompletionHandler:(id)completionHandler;	// 0xd260c1
+(id)addGameObject:(id)object withAccessToken:(id)accessToken andOtherProperties:(id)properties queue:(id)queue withCompletionHandler:(id)completionHandler;	// 0xd25f0d
+(id)requestForShareAStatus:(id)shareAStatus contatinsAPicture:(id)picture orPictureUrl:(id)url withAccessToken:(id)accessToken andOtherProperties:(id)properties queue:(id)queue withCompletionHandler:(id)completionHandler;	// 0xd3408d
+(id)requestForStatusIDsFromCurrentUser:(id)currentUser withAccessToken:(id)accessToken andOtherProperties:(id)properties queue:(id)queue withCompletionHandler:(id)completionHandler;	// 0xd33ed9
+(id)requestForRepostAStatus:(id)repostAStatus repostText:(id)text withAccessToken:(id)accessToken andOtherProperties:(id)properties queue:(id)queue withCompletionHandler:(id)completionHandler;	// 0xd33cf5
+(id)requestForUserProfile:(id)userProfile withAccessToken:(id)accessToken andOtherProperties:(id)properties queue:(id)queue withCompletionHandler:(id)completionHandler;	// 0xd48e25
+(id)requestForInviteBilateralFriend:(id)inviteBilateralFriend withAccessToken:(id)accessToken inviteText:(id)text inviteUrl:(id)url inviteLogoUrl:(id)url5 queue:(id)queue withCompletionHandler:(id)completionHandler;	// 0xd489c5
+(id)requestForRemoveFollowerUser:(id)removeFollowerUser withAccessToken:(id)accessToken andOtherProperties:(id)properties queue:(id)queue withCompletionHandler:(id)completionHandler;	// 0xd4879d
+(id)requestForCancelFollowAUser:(id)cancelFollowAUser withAccessToken:(id)accessToken andOtherProperties:(id)properties queue:(id)queue withCompletionHandler:(id)completionHandler;	// 0xd48575
+(id)requestForFollowAUser:(id)followAUser withAccessToken:(id)accessToken andOtherProperties:(id)properties queue:(id)queue withCompletionHandler:(id)completionHandler;	// 0xd4834d
+(id)requestForFriendshipDetailBetweenTargetUser:(id)friendshipDetailBetweenTargetUser andSourceUser:(id)user withAccessToken:(id)accessToken andOtherProperties:(id)properties queue:(id)queue withCompletionHandler:(id)completionHandler;	// 0xd48169
+(id)requestForBilateralFollowersListOfUser:(id)user withAccessToken:(id)accessToken andOtherProperties:(id)properties queue:(id)queue withCompletionHandler:(id)completionHandler;	// 0xd47f41
+(id)requestForActiveFollowersListOfUser:(id)user withAccessToken:(id)accessToken andOtherProperties:(id)properties queue:(id)queue withCompletionHandler:(id)completionHandler;	// 0xd47d19
+(id)requestForFollowersUserIDListOfUser:(id)user withAccessToken:(id)accessToken andOtherProperties:(id)properties queue:(id)queue withCompletionHandler:(id)completionHandler;	// 0xd47b65
+(id)requestForFollowersListOfUser:(id)user withAccessToken:(id)accessToken andOtherProperties:(id)properties queue:(id)queue withCompletionHandler:(id)completionHandler;	// 0xd4793d
+(id)requestForBilateralFriendsListOfUser:(id)user withAccessToken:(id)accessToken andOtherProperties:(id)properties queue:(id)queue withCompletionHandler:(id)completionHandler;	// 0xd47715
+(id)requestForCommonFriendsListBetweenUser:(id)commonFriendsListBetweenUser andUser:(id)user withAccessToken:(id)accessToken andOtherProperties:(id)properties queue:(id)queue withCompletionHandler:(id)completionHandler;	// 0xd474b9
+(id)requestForFriendsUserIDListOfUser:(id)user withAccessToken:(id)accessToken andOtherProperties:(id)properties queue:(id)queue withCompletionHandler:(id)completionHandler;	// 0xd47305
+(id)requestForFriendsListOfUser:(id)user withAccessToken:(id)accessToken andOtherProperties:(id)properties queue:(id)queue withCompletionHandler:(id)completionHandler;	// 0xd470dd
+(id)parseWeiboUserFromResponseDict:(id)responseDict;	// 0xd46f01
+(id)requestForRenewAccessTokenWithRefreshToken:(id)refreshToken queue:(id)queue withCompletionHandler:(id)completionHandler;	// 0xd550e1
-(void).cxx_destruct;	// 0xd3e25d
-(void)handleResponseData:(id)data;	// 0xd3e041
-(void)failedWithError:(id)error;	// 0xd3dfc1
-(void)connection:(id)connection didFailWithError:(id)error;	// 0xd3df2d
-(void)connectionDidFinishLoading:(id)connection;	// 0xd3ded1
-(id)connection:(id)connection willCacheResponse:(id)response;	// 0xd3decd
-(void)connection:(id)connection didReceiveData:(id)data;	// 0xd3dead
-(void)connection:(id)connection didReceiveResponse:(id)response;	// 0xd3ddcd
-(id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;	// 0xd3dc29
-(void)appendUTF8Body:(id)body dataString:(id)string;	// 0xd3dbd9
-(id)postBodyHasRawData:(BOOL*)data;	// 0xd3d675
-(void)disconnect;	// 0xd3d2bd
-(void)setHttpHeaderForRequest:(id)request;	// 0xd3d2b9
-(void)connectOnQueue:(id)queue withCompletionHandler:(id)completionHandler;	// 0xd3ce4d
-(void)connect;	// 0xd3cc01
-(id)initWithURL:(id)url httpMethod:(id)method params:(id)params queue:(id)queue withCompletionHandler:(id)completionHandler;	// 0xd3bde5
-(id)initWithURL:(id)url httpMethod:(id)method params:(id)params delegate:(id)delegate withTag:(id)tag;	// 0xd3bc79
-(void)dealloc;	// 0xd3bc0d
@end

