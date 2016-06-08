//
//  ImageViewer.h
//  ImageViewer
//
//  Created by tusm on 15/12/31.
//  Copyright © 2015年 tusm. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GQImageViewer : UIView

/*
    显示PageControl传yes
    显示label就传no
 */
@property (nonatomic, assign) BOOL pageControl;

@property (nonatomic, retain) NSArray *imageArray;//图片

//选中的图片索引
@property(nonatomic,assign)NSInteger index;

/*显示ImageViewer到view上(添加到控制器上会有bug 还可以相应侧滑手势和导航返回 但是ImageViewer本身不会关闭 所以添加到view 也可以添加到window上 自由度高一点)*/
- (void)showView:(UIView *)view;

+ (GQImageViewer *)sharedInstance;

- (void)dissMiss;

@end
