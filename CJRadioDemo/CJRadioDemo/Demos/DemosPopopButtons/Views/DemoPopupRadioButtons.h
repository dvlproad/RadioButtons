//
//  DemoPopupRadioButtons.h
//  CJRadioDemo
//
//  Created by ciyouzen on 14-11-5.
//  Copyright (c) 2014年 dvlproad. All rights reserved.
//

#import "CJRadioButtons.h"
#import <CJBaseUIKit/UIView+CJShowExtendView.h>

typedef NS_ENUM(NSUInteger, CJRadioButtonsPopupType) {
    CJRadioButtonsPopupTypeUnderAll,
    CJRadioButtonsPopupTypeUnderCurrent,
    CJRadioButtonsPopupTypeWindowBottom,
};

//未验证是否能实现刷新功能
@class DemoPopupRadioButtons;
@protocol DemoPopupRadioButtonsDataSource <NSObject>

- (UIView *)cj_RadioButtonsPopupSample:(DemoPopupRadioButtons *)radioButtonsPopupSample viewForButtonIndex:(NSInteger)index;

@end

@interface DemoPopupRadioButtons : CJRadioButtons {
    
}
@property (nonatomic, weak) id<DemoPopupRadioButtonsDataSource> radioButtonsPopupSampleDataSource;
@property (nonatomic, strong, readonly) NSArray *titles;

/**
 *  初始设置包含弹出视图的按钮组合成品
 *
 *  @param titles               按钮标题组合
 *  @param dropDownImage        箭头
 *  @param popupSuperview       弹出视图到哪里
 *  @param popupType            弹出视图的位置
 */
- (void)setupWithTitles:(NSArray *)titles
          dropDownImage:(UIImage *)dropDownImage
         popupSuperview:(UIView *)popupSuperview
              popupType:(CJRadioButtonsPopupType)popupType;
@end
