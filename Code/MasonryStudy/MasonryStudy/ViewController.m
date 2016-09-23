//
//  ViewController.m
//  MasonryStudy
//
//  Created by huangJiong on 16/9/20.
//  Copyright © 2016年 miwu. All rights reserved.
//

#import "ViewController.h"
#import "Basic.h"

@interface ViewController ()

@end

@implementation ViewController
    
- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    Basic *vc = [[Basic alloc] init];
    [self.navigationController pushViewController:vc animated:YES];
}
    

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
//    
//    UIView *redView = [[UIView alloc] init];
//    [self.view addSubview:redView];
//    redView.backgroundColor = [UIColor redColor];
//    
//    //内边距
//    [redView mas_makeConstraints:^(MASConstraintMaker *make) {
//#if 0
//        //第1种:
//        make.edges.equalTo(self.view).insets(UIEdgeInsetsMake(10, 10, 10, 10));
//#endif
//        //2.或者:
//        make.edges.equalTo([NSNumber valueWithUIEdgeInsets:UIEdgeInsetsMake(10, 10, 10, 10)]);
//    }];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
