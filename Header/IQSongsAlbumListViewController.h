/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class IQAudioPickerController, NSArray;

__attribute__((visibility("hidden")))
@interface IQSongsAlbumListViewController : XXUnknownSuperclass {
	NSArray* collections;
	IQAudioPickerController* _audioPickerController;
}
@property(assign, nonatomic) IQAudioPickerController* audioPickerController;	// G=0x3ed8d; S=0x3ed9d; 
-(void).cxx_destruct;	// 0x3edad
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x3ec49
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x3e845
-(int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x3e825
-(void)cancelAction:(id)action;	// 0x3e729
-(void)doneAction:(id)action;	// 0x3e4b1
-(void)viewDidLoad;	// 0x3e281
-(id)init;	// 0x3e1c9
@end

