/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class IQAudioPickerController, NSArray;

__attribute__((visibility("hidden")))
@interface IQSongsGenreViewController : XXUnknownSuperclass {
	NSArray* collections;
	IQAudioPickerController* _audioPickerController;
}
@property(assign, nonatomic) IQAudioPickerController* audioPickerController;	// G=0x31bf91; S=0x31bfa1; 
-(void).cxx_destruct;	// 0x31bfb1
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x31be4d
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x31bab9
-(int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x31ba99
-(void)cancelAction:(id)action;	// 0x31b99d
-(void)doneAction:(id)action;	// 0x31b725
-(void)viewDidLoad;	// 0x31b4f5
-(id)init;	// 0x31b43d
@end

