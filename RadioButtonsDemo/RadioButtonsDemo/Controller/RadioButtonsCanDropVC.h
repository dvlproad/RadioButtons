//
//  RadioButtonsCanDropVC.h
//  RadioButtonsDemo
//
//  Created by 李超前 on 15/11/16.
//  Copyright © 2015年 dvlproad. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RadioButtons.h"

@interface RadioButtonsCanDropVC : UIViewController<RadioButtonsDelegate>{
    
}
@property (nonatomic, weak) IBOutlet RadioButtons *dropdownRadioButtons;

@end
