//
//  MasonryGuide.h
//  MasonryStudy
//
//  Created by huangJiong on 16/9/20.
//  Copyright © 2016年 miwu. All rights reserved.
//

1.equalTo 和 mas_equalTo:
(1)equalTo: 没有自动包装功能, 传入的参数必须是对象
(2)mas_equalTo, 用法和功能跟equalTo一样,但拥有自动包装功能, 可以将传入的基本数据类型,和结构体,自动帮我们包装成NSNumber和NSValue对象
(3)如果想要使用equalTo时,也能自动将基本数据类型包装成对象, 需要在导入Masonry.h之前,先定义这个宏:
#define MAS_SHORTHAND_GLOBALS

2.获取布局属性:
(1)view.mas_top: 一个视图要获取由Masonry定义的布局属性时, 默认要加上mas_前缀
(2)view.top: 如果你不想使用mas_前缀, 就能直接获取Masonry定义的布局属性, 需要在导入Masonry.h之前,先定义这个宏:
#define MAS_SHORTHAND

3.如果是在自己封装的继承自UIView的视图内部使用自动布局, 要实现这个方法:
+ (BOOL)requiresConstraintBasedLayout {
    return YES;
}

4.另外还有:
小于等于, lessThanOrEqualTo
大于等于, greaterThanOrEqualTo
用法跟equalTo相同

//约束链有返回值, 类型为MASConstraint:
MASConstraint *constraint = make.width.equalTo(@(100));

make.top;     ==>  view.mas_top;     //顶部
make.bottom;  ==>  view.mas_bottom;  //底部
make.left;    ==>  view.mas_left;    //左边
make.right;   ==>  view.mas_right;   //右边
make.edges;                          //上左下右内边距

//书写习惯为从左向右的国家或地区, leading为左, trailing为右
//书写习惯为从右向左的国家或地区, trailing为左, leading为右
make.leading;   ==>  view.mas_leading;
make.trailing;  ==>  view.mas_trailing;

make.centerX;   ==>  view.mas_centerX;   //中心点x
make.centerY;   ==>  view.mas_centerY;   //中心点y
make.center;                             //中心点

make.width;     ==> view.mas_width;     //宽
make.height;    ==> view.mas_height;    //高
make.size;                              //尺寸


//UILabel, UIButton等视图显示的 文字的 边沿基准线
make.baseline;      ==>   view.mas_baseline;        //文字下边沿基准线
make.firstBaseline; ==>   view.mas_firstBaseline;   //文字上边沿基准线
make.lastBaseline;  ==>   view.mas_lastBaseline;    //同make.baseline
