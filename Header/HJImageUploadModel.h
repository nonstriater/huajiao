/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage, NSString, NSOperation, HJSeedPosition, NSURL;

__attribute__((visibility("hidden")))
@interface HJImageUploadModel : XXUnknownSuperclass {
	BOOL _isShowPosition;
	UIImage* _originalImage;
	UIImage* _smallImage;
	NSString* _descriptionString;
	NSURL* _videoFileURL;
	int _uploadingStatus;
	HJSeedPosition* _position;
	NSOperation* _imageOperation;
	double _uploadProgress;
}
@property(retain, nonatomic) NSOperation* imageOperation;	// G=0x18bb5; S=0x18bc5; 
@property(assign, nonatomic) BOOL isShowPosition;	// G=0x18b95; S=0x18ba5; 
@property(retain, nonatomic) HJSeedPosition* position;	// G=0x18b5d; S=0x18b6d; 
@property(assign, nonatomic) double uploadProgress;	// G=0x18b31; S=0x18b49; 
@property(assign) int uploadingStatus;	// G=0x18b11; S=0x18b21; 
@property(retain, nonatomic) NSURL* videoFileURL;	// G=0x18ad9; S=0x18ae9; 
@property(copy, nonatomic) NSString* descriptionString;	// G=0x18ab5; S=0x18ac9; 
@property(retain, nonatomic) UIImage* smallImage;	// G=0x18a7d; S=0x18a8d; 
@property(retain, nonatomic) UIImage* originalImage;	// G=0x18a45; S=0x18a55; 
-(void).cxx_destruct;	// 0x18bed
-(id)init;	// 0x189e9
@end
