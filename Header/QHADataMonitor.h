/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface QHADataMonitor : XXUnknownSuperclass {
	int _totalCountWrite;
	int _totalCountUpload;
	int _countWriteBasicInfo;
	int _countUploadBasicInfo;
	int _countWriteSession;
	int _countUploadSession;
	int _countWritePage;
	int _countUploadPage;
	int _countWriteEvent;
	int _countUploadEvent;
	int _countWriteSocial;
	int _countUploadSocial;
	int _countWriteError;
	int _countUploadError;
}
+(id)instance;	// 0x484e79
-(id)description;	// 0x485509
-(void)checkAfterUploadFaild;	// 0x485505
-(void)check;	// 0x485501
-(void)uploadLogWithData:(id)data;	// 0x485085
-(void)writeLogWithDataType:(unsigned)dataType;	// 0x485071
-(void)updateCountWithDataType:(unsigned)dataType forWrite:(BOOL)write times:(unsigned)times;	// 0x48503d
-(void)updateCountWithDataType:(unsigned)dataType forWrite:(BOOL)write;	// 0x484f49
@end

