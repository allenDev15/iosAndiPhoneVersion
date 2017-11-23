//
//  ViewController.m
//  iosAndiPhoneVersion
//
//  Created by dev on 2017/11/23.
//  Copyright © 2017年 licong_allen. All rights reserved.
//

#import "ViewController.h"
#import "Constant.h"


@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    if (IPHONE4_OR_SAME_RADIO_DEVICE) {
        NSLog(@"IPHONE4_OR_SAME_RADIO_DEVICE");
    }else if (iPhone5) {
        NSLog(@"ihpne5");
    }
    
    if (IOS7) {
        NSLog(@"ios7");
    }else if (IOS8) {
        NSLog(@"ios8");
    }else if (IOS9_OR_LATER) {
        NSLog(@"IOS9_OR_LATER");
    }
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
