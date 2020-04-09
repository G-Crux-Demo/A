//
//  Target_A.h
//  A
//
//  Created by gamesirDev on 8/4/2020.
//  Copyright © 2020 Lfm. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// 业务的最终实现方法
@interface Target_A : NSObject

/// 方法以Action_开头，并在结尾带有一个字典参数
- (UIViewController*)Action_viewController:(NSDictionary*)params;

@end

NS_ASSUME_NONNULL_END
