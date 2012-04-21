//
//  cocos2d_extensions_macAppDelegate.h
//  cocos2d-extensions-mac
//
//  Created by Stepan Generalov on 06.06.11.
//  Copyright __MyCompanyName__ 2011. All rights reserved.
//

#import "cocos2d.h"

#if COCOS2D_VERSION >= 0x00020000

@interface MacGLView : CCGLView
@end

#endif

static NSString *appDelegateToggleFullscreenNotification = @"fullscreenToggled";

@interface cocos2d_extensions_macAppDelegate : NSObject <NSApplicationDelegate>
{
	NSWindow	*window_;
	MacGLView	*glView_;
}

@property (assign) IBOutlet NSWindow	*window;
@property (assign) IBOutlet MacGLView	*glView;

- (IBAction)toggleFullScreen:(id)sender;

@end
