//
//  Utility.h
//  JCOpenCVCameraImgMatchDemo
//
//  Created by jimple on 14-1-10.
//  Copyright (c) 2014年 Jimple Chen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <opencv2/opencv.hpp>

@interface Utility : NSObject
//获得 IplImage 从oc的image
+ (IplImage *)CreateIplImageFromUIImage:(UIImage *)image;
//还原一张图片从IplImage  到 UIImage
+ (UIImage *)UIImageFromIplImage:(IplImage *)image grayImg:(BOOL)bIsGrayImg;
+ (CvHistogram *)get4ChannelHist:(IplImage *)image;
+ (CvHistogram *)getHSVHist:(IplImage *)image;


@end
