//
//  UIView+TargetAction.h
//  Target-Action
//
//  Created by chenqing on 2019/2/11.
//  Copyright © 2019年 ChenQing. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^TouchCallBackBlock)(void);

@interface UIView (TargetAction)

@property (nonatomic, copy) TouchCallBackBlock touchCallBackBlock;

- (void)addActionWithblock:(TouchCallBackBlock)block;

- (void)addTarget:(id)target action:(SEL)action;

@end

NS_ASSUME_NONNULL_END
