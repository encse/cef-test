//
//  AppDelegate.h
//  qwedf
//
//  Created by Dávid Németh Cs. on 2020. 11. 06..
//

#import <Cocoa/Cocoa.h>
#import "BrowserApp.h"

#ifndef AppDelegate_h
#define AppDelegate_h

@interface AppDelegate : NSObject <NSApplicationDelegate>{
 //   (BrowserApp *)browserApp;
}
//@property (nonatomic, retain) BrowserApp *browserApp;
-(id) initWithCefApp:(BrowserApp *)app;

@end

#endif
