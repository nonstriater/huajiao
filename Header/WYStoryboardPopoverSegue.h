/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class WYPopoverController;

__attribute__((visibility("hidden")))
@interface WYStoryboardPopoverSegue : XXUnknownSuperclass {
	WYPopoverController* popoverController;
	id sender;
	unsigned arrowDirections;
	unsigned options;
	BOOL animated;
}
-(void).cxx_destruct;	// 0x3eca61
-(void)dealloc;	// 0x3eca09
-(id)popoverControllerWithSender:(id)sender permittedArrowDirections:(unsigned)directions animated:(BOOL)animated options:(unsigned)options;	// 0x3ec931
-(id)popoverControllerWithSender:(id)sender permittedArrowDirections:(unsigned)directions animated:(BOOL)animated;	// 0x3ec90d
-(void)perform;	// 0x3ec7ad
@end

