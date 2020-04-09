//
//  Target_A.m
//  A
//
//  Created by gamesirDev on 8/4/2020.
//  Copyright © 2020 Lfm. All rights reserved.
//

#import "Target_A.h"
#import "GSAViewController.h"

@implementation Target_A

- (UIViewController *)Action_viewController:(NSDictionary *)params {
    GSAViewController* vc = [GSAViewController new];
    return vc;
}

@end
