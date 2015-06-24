//
//  OscillatorViewController.h
//  Panda
//
//  Created by Morten Kleveland on 24.06.15.
//  Copyright © 2015 Morten G. Kleveland. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MGKRotaryKnob.h"
#import "MGKOscillatorSlider.h"

@interface OscillatorViewController : UIViewController

@property (strong, nonatomic) MGKRotaryKnob *oscillator1FineTuneKnob;
@property (strong, nonatomic) MGKRotaryKnob *oscillator1AmplitudeKnob;
@property (strong, nonatomic) MGKRotaryKnob *oscillator1ModKnob;
@property (strong, nonatomic) MGKRotaryKnob *oscillator1Mod2Knob;
@property (strong, nonatomic) MGKRotaryKnob *oscillator1FatnessKnob;
@property (strong, nonatomic) MGKRotaryKnob *oscillator2FineTuneKnob;
@property (strong, nonatomic) MGKRotaryKnob *oscillator2TuneKnob;
@property (strong, nonatomic) MGKRotaryKnob *oscillator2AmplitudeKnob;
@property (strong, nonatomic) MGKRotaryKnob *oscillator2ModKnob;
@property (strong, nonatomic) MGKRotaryKnob *oscillator2Mod2Knob;
@property (strong, nonatomic) MGKRotaryKnob *oscillator2FatnessKnob;
@property (strong, nonatomic) UIView* oscillator1HiddenSubviewTouchRecognization;
@property (strong, nonatomic) UIView* oscillator2HiddenSubviewTouchRecognization;

@property (weak, nonatomic) IBOutlet UIView *oscillator1FineTunePlaceholder;
@property (weak, nonatomic) IBOutlet UIView *oscillator1AmplitudePlaceholder;
@property (weak, nonatomic) IBOutlet UIView *oscillator1ModPlaceholder;
@property (weak, nonatomic) IBOutlet UIView *oscillator1Mod2Placeholder;
@property (weak, nonatomic) IBOutlet UIView *oscillator1FatnessPlaceholder;
@property (weak, nonatomic) IBOutlet UIView *oscillator2FineTunePlaceholder;
@property (weak, nonatomic) IBOutlet UIView *oscillator2TunePlaceholder;
@property (weak, nonatomic) IBOutlet UIView *oscillator2AmplitudePlaceholder;
@property (weak, nonatomic) IBOutlet UIView *oscillator2ModPlaceholder;
@property (weak, nonatomic) IBOutlet UIView *oscillator2Mod2Placeholder;
@property (weak, nonatomic) IBOutlet UIView *oscillator2FatnessPlaceholder;

@property (strong, nonatomic) IBOutlet UISlider *oscillator1Slider;
@property (strong, nonatomic) IBOutlet UISlider *oscillator2Slider;

- (IBAction)oscillator1SliderChanged:(UISlider *)sender;
- (IBAction)oscillator2SliderChanged:(UISlider *)sender;


@end
