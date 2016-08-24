//
//  SGTopTitleView.h
//  SGTopTitleViewExample
//
//  Created by Sorgle on 16/8/24.
//  Copyright © 2016年 Sorgle. All rights reserved.
//

// 欢迎来GitHub下载最新Demo
// GitHub下载地址：https://github.com/kingsic/SGTopTitleView.git

#import <UIKit/UIKit.h>
@class SGTopTitleView;

@protocol SGTopTitleViewDelegate <NSObject>
// delegate 方法
- (void)SGTopTitleView:(SGTopTitleView *)topTitleView didSelectTitleAtIndex:(NSInteger)index;

@end

@interface SGTopTitleView : UIScrollView
/** 静止标题数组 */
@property (nonatomic, strong) NSArray *staticTitleArr;
/** 滚动标题数组 */
@property (nonatomic, strong) NSArray *scrollTitleArr;
/** 存入所有Label */
@property (nonatomic, strong) NSMutableArray *allTitleLabel;
@property (nonatomic, weak) id<SGTopTitleViewDelegate> delegate_SG;

/** 类方法 */
+ (instancetype)topTitleViewWithFrame:(CGRect)frame;


#pragma mark - - - 给外界ScrollView提供的方法以及自身方法实现
/** 静止标题选中颜色改变以及指示器位置变化 */
- (void)staticTitleLabelSelecteded:(UILabel *)label;
/** 滚动标题选中颜色改变以及指示器位置变化 */
- (void)scrollTitleLabelSelecteded:(UILabel *)label;
/** 滚动标题选中居中 */
- (void)scrollTitleLabelSelectededCenter:(UILabel *)centerLabel;


@end
