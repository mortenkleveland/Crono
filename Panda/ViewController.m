//
//  ViewController.m
//  Panda
//
//  Created by Morten Kleveland on 24.06.15.
//  Copyright © 2015 Morten G. Kleveland. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

@synthesize keyboardScrollView;

int OCTAVE_WIDTH = 500;
int NUMBER_OF_OCTAVES = 8;

- (void)viewDidLoad {
    [super viewDidLoad];
    [self initKeyboardViewWithWidth:OCTAVE_WIDTH over:NUMBER_OF_OCTAVES];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


// Keyboard methods

- (void)initKeyboardViewWithWidth:(int)width over:(int)NUMBER_OF_OCTAVES
{
    CGRect keyboardViewFrame;
    keyboardViewFrame.origin.x = 0;
    keyboardViewFrame.origin.y = 0;
    keyboardViewFrame.size.width = width * NUMBER_OF_OCTAVES;
    // Leave some empty space for scrolling
    keyboardViewFrame.size.height = keyboardScrollView.frame.size.height - 10;
    keyboardView = [[KeyboardView alloc] initWithFrame:keyboardViewFrame withOctaveCount:NUMBER_OF_OCTAVES];
    [keyboardView setKeyboardDelegate:self];
    [keyboardScrollView addSubview:keyboardView];
    [keyboardScrollView setContentSize:keyboardView.frame.size];
    [keyboardScrollView setScrollEnabled:YES];
    [self.view bringSubviewToFront:keyboardScrollView];
    
    // Forward touch events to the keyboard
    [keyboardScrollView setTouchView:keyboardView];
}

- (void)noteOff:(int)keyNum
{
}

- (void)noteOn:(int)keyNum
{
}

@end
