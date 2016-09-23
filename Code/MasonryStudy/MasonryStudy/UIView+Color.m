//
//  UIView+Color.m
//  MasonryStudy
//
//  Created by huangJiong on 16/9/20.
//  Copyright © 2016年 miwu. All rights reserved.
//

#import "UIView+Color.h"

@implementation UIView (Color)
    
+ (instancetype)viewWithColor:(UIColor *)color {
    UIView *view = [[self alloc] init];
    view.backgroundColor = color;
    return view;
}
    
+ (NSArray *)someViewsWithCount:(NSInteger)count color:(UIColor *)color {
    NSMutableArray *arr = [NSMutableArray array];
    for (int i = 0; i < count; i++) {
        UIView *view = [self viewWithColor:color];
        [arr addObject:view];
    }
    return arr;
}

@end
