//
//  ViewController.m
//  PictureWatermark
//
//  Created by AD-iOS on 15/8/3.
//  Copyright (c) 2015年 Adinnet. All rights reserved.
//

#import "ViewController.h"
#import "UIImage+WaterMark.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    UIImage *baseImage = [UIImage imageNamed:@"092344103.jpg"];
    UIImage *resultImage = [baseImage imageWaterMarkWithString:@"falfjla" point:CGPointMake(0, 20) attribute:@{NSForegroundColorAttributeName:[UIColor purpleColor]} image:[UIImage imageNamed:@"1"] imagePoint:CGPointMake(0, 0) alpha:0.2];
    UIImageView *imageView = [[UIImageView alloc]initWithFrame:self.view.bounds];
    imageView.image = resultImage;
    imageView.contentMode = UIViewContentModeScaleAspectFit;
    [self.view addSubview:imageView];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
