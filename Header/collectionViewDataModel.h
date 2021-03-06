/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface collectionViewDataModel : XXUnknownSuperclass {
	BOOL _selected;
	UIImage* _image;
	NSString* _labelStr;
	int _filterIndex;
}
@property(assign, nonatomic) int filterIndex;	// G=0x3c61a5; S=0x3c61b5; 
@property(assign, nonatomic) BOOL selected;	// G=0x3c6185; S=0x3c6195; 
@property(copy, nonatomic) NSString* labelStr;	// G=0x3c6161; S=0x3c6175; 
@property(retain, nonatomic) UIImage* image;	// G=0x3c6129; S=0x3c6139; 
+(id)collectionViewDataWithLabelStr:(id)labelStr image:(id)image index:(int)index;	// 0x3c60c1
-(void).cxx_destruct;	// 0x3c61c5
-(id)initWithLabelStr:(id)labelStr image:(id)image index:(int)index;	// 0x3c6025
@end

