/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "living-Structs.h"

@class UIColor, NSString, UPNavController, UPPointCell, NSArray, NSBundle, UIViewController, NSDictionary;
@protocol UPPayPluginDelegate;

@interface UPDataContainer : XXUnknownSuperclass {
	BOOL validUrlIndex;
	BOOL shouldSupportMedium;
	NSString* mTN;
	id<UPPayPluginDelegate> mDelegate;
	NSString* mMode;
	NSString* mAppId;
	NSString* mUrlIndex;
	NSArray* mOrderInfoArray;
	NSDictionary* mRiskInfo;
	NSArray* mBindCardArray;
	NSDictionary* mUpdateInfo;
	NSArray* mInputInfoItem;
	NSArray* mDebitBanksArray;
	NSArray* mCreditBanksArray;
	NSArray* mSavedBanskArray;
	NSString* mBanksFlags;
	NSArray* mPayElementArray;
	NSArray* mEntrustElementArray;
	NSArray* mPayResultArray;
	NSString* mDESKey;
	NSString* mSessionId;
	NSString* mCardType;
	NSString* mBankCode;
	NSString* mEntrustedCard;
	NSString* mBankUrl;
	NSString* mTemporaryFlag;
	NSString* mTemporaryInfo;
	NSString* mFailContinue;
	NSArray* mOpenRules;
	NSString* mOpenUpgradeFlag;
	NSString* mOpenInfo;
	NSString* mPan;
	NSString* mMobile;
	NSString* mSms;
	NSString* mFirstPayFlag;
	NSString* mCardId;
	NSString* mUser_id;
	NSDictionary* mAccount_info;
	NSArray* mLogRules;
	NSDictionary* mRegisterUrl;
	NSArray* mUserInfo;
	NSArray* mUserCards;
	NSDictionary* mOtherCard_info;
	NSArray* mUserRules;
	NSDictionary* UserBindUrl;
	NSDictionary* UserServiceUrl;
	NSString* viewControllerTitle;
	NSDictionary* actionButton;
	NSString* successInfo;
	NSString* preCmd;
	NSString* timeoutMsg;
	NSDictionary* serviceCheckBox;
	NSDictionary* bindCardCheckBox;
	NSString* mMessageBlock;
	NSString* upmpServiceName;
	NSString* mediumViewClassName;
	NSDictionary* kaLeFuInfo;
	NSString* kaLeFuBtnLabel;
	NSString* mediumMode;
	NSString* mediumTypes;
	NSString* noMediumMessage;
	NSBundle* resourceBundle;
	NSDictionary* BundleConfig;
	UIViewController* rootViewController;
	int rootViewControllerPresentationStyle;
	NSString* ADString;
	float maxCanUsePoint;
	UPPointCell* pointCell;
	NSString* userEmptyInfo;
	NSString* defaultPayMode;
	NSString* paySuccessMessage;
	NSString* promotionMessage;
	NSString* instalmentMessage;
	NSString* luckRrawFlag;
	NSDictionary* luckPromotions;
	NSDictionary* promotion;
	NSDictionary* instalment;
	NSDictionary* promotionInstalmentMsgbox;
	NSString* addCardTip;
	NSString* orderViewTitle;
	NSDictionary* orderViewAction;
	NSDictionary* findPwdUrl;
	NSDictionary* RegUrl;
	NSString* warningInfo;
	UPNavController* navigationController;
	int defaultOrientation;
	NSDictionary* tempAlertBox;
	NSDictionary* openAlertBox;
	NSDictionary* expiredAlertBox;
	UIColor* windowColor;
	NSArray* areaCodes;
	NSString* _mFrontUrl;
	NSString* _mFrontRequest;
	CGSize toRotationSize;
}
@property(retain, nonatomic) NSArray* areaCodes;	// G=0xc9c461; S=0xc9c471; 
@property(retain, nonatomic) UIColor* windowColor;	// G=0xc9c429; S=0xc9c439; 
@property(retain, nonatomic) NSDictionary* expiredAlertBox;	// G=0xc9c3f1; S=0xc9c401; 
@property(retain, nonatomic) NSDictionary* openAlertBox;	// G=0xc9c3b9; S=0xc9c3c9; 
@property(retain, nonatomic) NSDictionary* tempAlertBox;	// G=0xc9c381; S=0xc9c391; 
@property(copy, nonatomic) NSString* warningInfo;	// G=0xc9c2fd; S=0xc9c311; 
@property(assign, nonatomic) int defaultOrientation;	// G=0xc9c361; S=0xc9c371; 
@property(assign, nonatomic) UPNavController* navigationController;	// G=0xc9c341; S=0xc9c351; 
@property(copy, nonatomic) NSDictionary* RegUrl;	// G=0xc9c2b9; S=0xc9c2cd; 
@property(copy, nonatomic) NSDictionary* findPwdUrl;	// G=0xc9c275; S=0xc9c289; 
@property(copy, nonatomic) NSDictionary* orderViewAction;	// G=0xc9c231; S=0xc9c245; 
@property(copy, nonatomic) NSString* orderViewTitle;	// G=0xc9c1ed; S=0xc9c201; 
@property(copy, nonatomic) NSString* addCardTip;	// G=0xc9c1a9; S=0xc9c1bd; 
@property(retain, nonatomic) NSDictionary* promotionInstalmentMsgbox;	// G=0xc9c171; S=0xc9c181; 
@property(retain, nonatomic) NSDictionary* instalment;	// G=0xc9c139; S=0xc9c149; 
@property(retain, nonatomic) NSDictionary* promotion;	// G=0xc9c101; S=0xc9c111; 
@property(retain, nonatomic) NSDictionary* luckPromotions;	// G=0xc9c0c9; S=0xc9c0d9; 
@property(copy, nonatomic) NSString* luckRrawFlag;	// G=0xc9c085; S=0xc9c099; 
@property(copy, nonatomic) NSString* instalmentMessage;	// G=0xc9c041; S=0xc9c055; 
@property(copy, nonatomic) NSString* promotionMessage;	// G=0xc9bffd; S=0xc9c011; 
@property(copy, nonatomic) NSString* paySuccessMessage;	// G=0xc9bfb9; S=0xc9bfcd; 
@property(copy, nonatomic) NSString* defaultPayMode;	// G=0xc9bf75; S=0xc9bf89; 
@property(assign, nonatomic) CGSize toRotationSize;	// G=0xc9bf45; S=0xc9bf61; 
@property(retain, nonatomic) NSString* userEmptyInfo;	// G=0xc9bf0d; S=0xc9bf1d; 
@property(retain, nonatomic) UPPointCell* pointCell;	// G=0xc9bed5; S=0xc9bee5; 
@property(assign, nonatomic) float maxCanUsePoint;	// G=0xc9beb5; S=0xc9bec5; 
@property(retain, nonatomic) NSString* ADString;	// G=0xc9be7d; S=0xc9be8d; 
@property(assign, nonatomic) int rootViewControllerPresentationStyle;	// G=0xc9be5d; S=0xc9be6d; 
@property(assign, nonatomic) UIViewController* rootViewController;	// G=0xc9be3d; S=0xc9be4d; 
@property(retain, nonatomic) NSDictionary* BundleConfig;	// G=0xc9be05; S=0xc9be15; 
@property(retain, nonatomic) NSBundle* resourceBundle;	// G=0xc9bdcd; S=0xc9bddd; 
@property(retain, nonatomic) NSString* mMessageBlock;	// G=0xc9bbed; S=0xc9bbfd; 
@property(retain, nonatomic) NSDictionary* bindCardCheckBox;	// G=0xc9bbb5; S=0xc9bbc5; 
@property(retain, nonatomic) NSDictionary* serviceCheckBox;	// G=0xc9bb7d; S=0xc9bb8d; 
@property(copy, nonatomic) NSString* timeoutMsg;	// G=0xc9bb39; S=0xc9bb4d; 
@property(retain, nonatomic) NSString* preCmd;	// G=0xc9bb01; S=0xc9bb11; 
@property(copy, nonatomic) NSString* successInfo;	// G=0xc9babd; S=0xc9bad1; 
@property(retain, nonatomic) NSDictionary* actionButton;	// G=0xc9ba85; S=0xc9ba95; 
@property(copy, nonatomic) NSString* viewControllerTitle;	// G=0xc9ba41; S=0xc9ba55; 
@property(retain, nonatomic) NSString* noMediumMessage;	// G=0xc9bd95; S=0xc9bda5; 
@property(retain, nonatomic) NSString* mediumTypes;	// G=0xc9bd5d; S=0xc9bd6d; 
@property(retain, nonatomic) NSString* mediumMode;	// G=0xc9bd25; S=0xc9bd35; 
@property(retain, nonatomic) NSString* kaLeFuBtnLabel;	// G=0xc9bced; S=0xc9bcfd; 
@property(retain, nonatomic) NSDictionary* kaLeFuInfo;	// G=0xc9bcb5; S=0xc9bcc5; 
@property(assign, nonatomic) BOOL shouldSupportMedium;	// G=0xc9bc95; S=0xc9bca5; 
@property(retain, nonatomic) NSString* upmpServiceName;	// G=0xc9bc25; S=0xc9bc35; 
@property(retain, nonatomic) NSString* mediumViewClassName;	// G=0xc9bc5d; S=0xc9bc6d; 
@property(retain, nonatomic) NSDictionary* mOtherCard_info;	// G=0xc9b961; S=0xc9b971; 
@property(retain, nonatomic) NSDictionary* mAccount_info;	// G=0xc9b849; S=0xc9b859; 
@property(retain, nonatomic) NSDictionary* UserServiceUrl;	// G=0xc9ba09; S=0xc9ba19; 
@property(retain, nonatomic) NSDictionary* UserBindUrl;	// G=0xc9b9d1; S=0xc9b9e1; 
@property(retain, nonatomic) NSArray* mUserRules;	// G=0xc9b999; S=0xc9b9a9; 
@property(retain, nonatomic) NSArray* mUserCards;	// G=0xc9b929; S=0xc9b939; 
@property(retain, nonatomic) NSArray* mUserInfo;	// G=0xc9b8f1; S=0xc9b901; 
@property(retain, nonatomic) NSDictionary* mRegisterUrl;	// G=0xc9b8b9; S=0xc9b8c9; 
@property(retain, nonatomic) NSArray* mLogRules;	// G=0xc9b881; S=0xc9b891; 
@property(retain, nonatomic) NSString* mUser_id;	// G=0xc9b811; S=0xc9b821; 
@property(retain, nonatomic) NSString* mFrontRequest;	// G=0xc9c4d1; S=0xc9c4e1; 
@property(retain, nonatomic) NSString* mFrontUrl;	// G=0xc9c499; S=0xc9c4a9; 
@property(retain, nonatomic) NSString* mSms;	// G=0xc9b769; S=0xc9b779; 
@property(retain, nonatomic) NSString* mMobile;	// G=0xc9b731; S=0xc9b741; 
@property(retain, nonatomic) NSString* mPan;	// G=0xc9b6f9; S=0xc9b709; 
@property(retain, nonatomic) NSString* mOpenInfo;	// G=0xc9b6c1; S=0xc9b6d1; 
@property(retain, nonatomic) NSString* mOpenUpgradeFlag;	// G=0xc9b689; S=0xc9b699; 
@property(retain, nonatomic) NSArray* mOpenRules;	// G=0xc9b651; S=0xc9b661; 
@property(retain, nonatomic) NSString* mTemporaryInfo;	// G=0xc9b5e1; S=0xc9b5f1; 
@property(retain, nonatomic) NSString* mTemporaryFlag;	// G=0xc9b5a9; S=0xc9b5b9; 
@property(retain, nonatomic) NSString* mCardId;	// G=0xc9b7d9; S=0xc9b7e9; 
@property(retain, nonatomic) NSString* mFirstPayFlag;	// G=0xc9b7a1; S=0xc9b7b1; 
@property(retain, nonatomic) NSString* mFailContinue;	// G=0xc9b619; S=0xc9b629; 
@property(retain, nonatomic) NSString* mBankUrl;	// G=0xc9b571; S=0xc9b581; 
@property(retain, nonatomic) NSString* mEntrustedCard;	// G=0xc9b539; S=0xc9b549; 
@property(retain, nonatomic) NSString* mBankCode;	// G=0xc9b501; S=0xc9b511; 
@property(retain, nonatomic) NSString* mCardType;	// G=0xc9b4c9; S=0xc9b4d9; 
@property(retain, nonatomic) NSString* mSessionId;	// G=0xc9b491; S=0xc9b4a1; 
@property(retain, nonatomic) NSString* mDESKey;	// G=0xc9b459; S=0xc9b469; 
@property(retain, nonatomic) NSArray* mPayResultArray;	// G=0xc9b421; S=0xc9b431; 
@property(retain, nonatomic) NSArray* mEntrustElementArray;	// G=0xc9b3e9; S=0xc9b3f9; 
@property(retain, nonatomic) NSArray* mPayElementArray;	// G=0xc9b3b1; S=0xc9b3c1; 
@property(retain, nonatomic) NSString* mBanksFlags;	// G=0xc9b379; S=0xc9b389; 
@property(retain, nonatomic) NSArray* mSavedBanskArray;	// G=0xc9b341; S=0xc9b351; 
@property(retain, nonatomic) NSArray* mCreditBanksArray;	// G=0xc9b309; S=0xc9b319; 
@property(retain, nonatomic) NSArray* mDebitBanksArray;	// G=0xc9b2d1; S=0xc9b2e1; 
@property(retain, nonatomic) NSArray* mInputInfoItem;	// G=0xc9b299; S=0xc9b2a9; 
@property(retain, nonatomic) NSDictionary* mUpdateInfo;	// G=0xc9b261; S=0xc9b271; 
@property(retain, nonatomic) NSArray* mBindCardArray;	// G=0xc9b229; S=0xc9b239; 
@property(retain, nonatomic) NSDictionary* mRiskInfo;	// G=0xc9b1f1; S=0xc9b201; 
@property(retain, nonatomic) NSArray* mOrderInfoArray;	// G=0xc9b1b9; S=0xc9b1c9; 
@property(assign) BOOL validUrlIndex;	// G=0xc9b189; S=0xc9b1a1; 
@property(retain, nonatomic) NSString* mUrlIndex;	// G=0xc9b151; S=0xc9b161; 
@property(retain, nonatomic) NSString* mAppId;	// G=0xc9b119; S=0xc9b129; 
@property(retain, nonatomic) NSString* mMode;	// G=0xc9b0e1; S=0xc9b0f1; 
@property(assign, nonatomic) __weak id<UPPayPluginDelegate> mDelegate;	// G=0xc9b0ad; S=0xc9b0cd; 
@property(retain, nonatomic) NSString* mTN;	// G=0xc9b075; S=0xc9b085; 
+(void)destory;	// 0xc98609
+(id)instance;	// 0xc985a5
-(void).cxx_destruct;	// 0xc9c509
-(void)makeUserInfoClean;	// 0xc9b041
-(void)makeKeyInfosClean;	// 0xc9af95
-(void)parseBingoPromotionResponse:(id)response;	// 0xc9af29
-(void)parseUserInfoResponse:(id)response;	// 0xc9ab3d
-(void)parseLoginRulesResponse:(id)response;	// 0xc9a9cd
-(void)parseFollowRulesResponse:(id)response;	// 0xc9a659
-(void)didFinishedWithResult:(id)result;	// 0xc9a5b1
-(void)parseOpenUpgradeResponse:(id)response;	// 0xc9a545
-(void)parseOpenRulesResponse:(id)response;	// 0xc9a2b1
-(void)parsePayingResponse:(id)response;	// 0xc9a0ad
-(void)parseQueryResponse:(id)response;	// 0xc99c2d
-(void)parseRulsResponse:(id)response;	// 0xc99761
-(void)parseInitResponse:(id)response;	// 0xc99079
-(void)parseTempAlertWithResponse:(id)response;	// 0xc98fad
-(void)initResourceBundle;	// 0xc98d51
-(BOOL)isUPMPService;	// 0xc98d0d
-(void)dealloc;	// 0xc98625
@end

