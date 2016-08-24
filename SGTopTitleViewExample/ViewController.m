//
//  ViewController.m
//  SGTopTitleViewExample
//
//  Created by Sorgle on 16/8/24.
//  Copyright © 2016年 Sorgle. All rights reserved.
//

// 欢迎来GitHub下载最新Demo
// GitHub下载地址：https://github.com/kingsic/SGTopTitleView.git

#import "ViewController.h"
#import "StaticViewController.h"
#import "ScrollViewController.h"
#import "MainViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (IBAction)staticTitleView:(id)sender {
    StaticViewController *staticVC = [[StaticViewController alloc] init];
    [self.navigationController pushViewController:staticVC animated:YES];
}

- (IBAction)scrollTitleView:(id)sender {
    ScrollViewController *scrollVC = [[ScrollViewController alloc] init];
    [self.navigationController pushViewController:scrollVC animated:YES];
}

- (IBAction)navigationBarTitleView:(id)sender {
    MainViewController *mainVC = [[MainViewController alloc] init];

    UINavigationController *nvc = [[UINavigationController alloc]initWithRootViewController:mainVC];
    
    [self presentViewController:nvc animated:YES completion:nil];
}

@end
