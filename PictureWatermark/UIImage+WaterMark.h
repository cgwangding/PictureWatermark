//
//  UIImage+WaterMark.h
//  PictureWatermark
//
//  Created by AD-iOS on 15/8/3.
//  Copyright (c) 2015年 Adinnet. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (WaterMark)

/**
 *  给图片加水印图片
 *
 *  @param image   水印图片
 *  @param imgRect 水印图片所在位置，大小
 *  @param alpha   水印图片的透明度，0~1之间，透明度太大会完全遮盖被加水印图片的那一部分
 *
 *  @return 加完水印的图片
 */
- (UIImage*)imageWaterMarkWithImage:(UIImage *)image imageRect:(CGRect)imgRect alpha:(CGFloat)alpha;
/**
 *  同上
 *
 *  @param image    同上
 *  @param imgPoint 水印图片（0，0）所在位置
 *  @param alpha    同上
 *
 *  @return 同上
 */
- (UIImage*)imageWaterMarkWithImage:(UIImage*)image imagePoint:(CGPoint)imgPoint alpha:(CGFloat)alpha;

/**
 *  给图片加文字水印
 *
 *  @param str     水印文字
 *  @param strRect 文字所在的位置大小
 *  @param attri   文字的相关属性，自行设置
 *
 *  @return 加完水印文字的图片
 */
- (UIImage*)imageWaterMarkWithString:(NSString*)str rect:(CGRect)strRect attribute:(NSDictionary *)attri;
/**
 *  同上
 *
 *  @param str      同上
 *  @param strPoint 文字（0，0）点所在位置
 *  @param attri    同上
 *
 *  @return 同上
 */
- (UIImage*)imageWaterMarkWithString:(NSString*)str point:(CGPoint)strPoint attribute:(NSDictionary*)attri;
/**
 *  返回加水印文字和图片的图片
 *
 *  @param str      水印文字
 *  @param strPoint 文字（0，0）点所在位置
 *  @param attri    文字属性
 *  @param image    水印图片
 *  @param imgPoint 图片（0，0）点所在位置
 *  @param alpha    透明度
 *
 *  @return 加完水印的图片
 */
- (UIImage*)imageWaterMarkWithString:(NSString*)str point:(CGPoint)strPoint attribute:(NSDictionary*)attri image:(UIImage*)image imagePoint:(CGPoint)imgPoint alpha:(CGFloat)alpha;
/**
 *  同上
 *
 *  @param str     同上
 *  @param strRect 文字的位置大小
 *  @param attri   同上
 *  @param image   同上
 *  @param imgRect 图片的位置大小
 *  @param alpha   透明度
 *
 *  @return 同上
 */
- (UIImage*)imageWaterMarkWithString:(NSString*)str rect:(CGRect)strRect attribute:(NSDictionary *)attri image:(UIImage *)image imageRect:(CGRect)imgRect alpha:(CGFloat)alpha;

@end
