/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, DSMsgData, UILabel, UIImageView, UIButton, UIView;

__attribute__((visibility("hidden")))
@interface DSLiveMsgCell : XXUnknownSuperclass {
	UIView* _vbg;
	UIImageView* _imgvAvatar;
	UIView* _vAvatarbg;
	UILabel* _lblAuthor;
	UILabel* _lblMsg;
	UILabel* _lblVisitor;
	UIButton* _abtn;
	NSTimer* _timerAlpha;
	int _currentSecond;
	DSMsgData* _msgData;
}
@property(retain, nonatomic) DSMsgData* msgData;	// G=0x310c9; S=0x310d9; 
@property(assign, nonatomic) int currentSecond;	// G=0x310a9; S=0x310b9; 
@property(retain, nonatomic) NSTimer* timerAlpha;	// G=0x31071; S=0x31081; 
@property(retain, nonatomic) UIButton* abtn;	// G=0x31039; S=0x31049; 
@property(retain, nonatomic) UILabel* lblVisitor;	// G=0x31001; S=0x31011; 
@property(retain, nonatomic) UILabel* lblMsg;	// G=0x30fc9; S=0x30fd9; 
@property(retain, nonatomic) UILabel* lblAuthor;	// G=0x30f91; S=0x30fa1; 
@property(retain, nonatomic) UIView* vAvatarbg;	// G=0x30f59; S=0x30f69; 
@property(retain, nonatomic) UIImageView* imgvAvatar;	// G=0x30f21; S=0x30f31; 
@property(retain, nonatomic) UIView* vbg;	// G=0x30ee9; S=0x30ef9; 
+(float)computeHeight:(id)height;	// 0x30269
+(void)timerStep:(id)step;	// 0x2f559
+(void)_beginHide:(id)hide;	// 0x2f451
+(void)beginHide:(id)hide;	// 0x2f355
+(id)cellWithTableView:(id)tableView withData:(id)data;	// 0x2f131
-(void).cxx_destruct;	// 0x31101
-(void)loadData:(id)data;	// 0x304d5
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier withData:(id)data;	// 0x2f88d
-(void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x2f85d
-(void)dealloc;	// 0x2f781
-(void)showUserInfo;	// 0x2f095
-(void)awakeFromNib;	// 0x2f091
@end

