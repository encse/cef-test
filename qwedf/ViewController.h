//
//  ViewController.h
//  qwedf
//
//  Created by Dávid Németh Cs. on 2020. 11. 06..
//

#import <Cocoa/Cocoa.h>
#import "BrowserApp.h"

#ifndef ViewController_h
#define ViewController_h

@interface ViewController : NSViewController
-(void) setCefApp:(BrowserApp *)app;

@end

#endif
