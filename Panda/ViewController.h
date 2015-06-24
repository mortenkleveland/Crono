//
//  ViewController.h
//  Panda
//
//  Created by Morten Kleveland on 24.06.15.
//  Copyright © 2015 Morten G. Kleveland. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KeyboardView.h"
#import "TouchForwardingUIScrollView.h"

@interface ViewController : UIViewController <KeyboardDelegate> {
@private
    TouchForwardingUIScrollView* keyboardScrollView;
    KeyboardView* keyboardView;
}

@property (nonatomic, retain) IBOutlet UIScrollView *keyboardScrollView;

@end

