/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class IQAudioPickerController, NSArray;

__attribute__((visibility("hidden")))
@interface IQSongsPlaylistViewController : XXUnknownSuperclass {
	NSArray* playlists;
	IQAudioPickerController* _audioPickerController;
}
@property(assign, nonatomic) IQAudioPickerController* audioPickerController;	// G=0x111a65; S=0x111a75; 
-(void).cxx_destruct;	// 0x111a85
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x1118e1
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x111535
-(int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x111515
-(void)cancelAction:(id)action;	// 0x111419
-(void)doneAction:(id)action;	// 0x1111a1
-(void)viewDidLoad;	// 0x110fd9
-(id)init;	// 0x110f21
@end

