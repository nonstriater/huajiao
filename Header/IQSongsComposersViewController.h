/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class IQAudioPickerController, NSArray;

__attribute__((visibility("hidden")))
@interface IQSongsComposersViewController : XXUnknownSuperclass {
	NSArray* collections;
	IQAudioPickerController* _audioPickerController;
}
@property(assign, nonatomic) IQAudioPickerController* audioPickerController;	// G=0x11e079; S=0x11e089; 
-(void).cxx_destruct;	// 0x11e099
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x11de31
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x11da55
-(int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x11da35
-(void)cancelAction:(id)action;	// 0x11d939
-(void)doneAction:(id)action;	// 0x11d6c1
-(void)viewDidLoad;	// 0x11d491
-(id)init;	// 0x11d3d9
@end
