//
//  RadioControllersViewController.h
//  CJRadioDemo
//
//  Created by lichq on 14-11-5.
//  Copyright (c) 2014年 lichq. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CJCycleComposeView.h"

@interface RadioControllersViewController : UIViewController {
    
}

@property (nonatomic, weak) IBOutlet CJCycleComposeView *cycleComposeView;
@property (nonatomic, assign) NSInteger defaultSelectedIndex;

@end
