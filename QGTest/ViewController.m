//
//  ViewController.m
//  QGTest
//
//  Created by 李超群 on 2017/12/18.
//  Copyright © 2017年 李超群. All rights reserved.
//

#import "ViewController.h"
#import "UIView+ChainExtension.h"
#import "UILabel+ChainExtension.h"

@interface ViewController ()

/** <#注释#> */
@property (nonatomic, weak) UIView *view1;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    UILabel *view = [[UILabel alloc]initWithFrame:CGRectMake(90, 90, 320, 90)];
    view.backgroundColor = [UIColor redColor];
    [self.view addSubview:view];
    self.view1 = view;

    view.dy_backgroundColor([UIColor greenColor]).dy_text(@"sadfasdfsadffasdfasdfasfddasfsadfsadf").dy_numberOfLines(3).dy_tag(100).dy_textAlignment(NSTextAlignmentRight).dy_textColor([UIColor redColor]).dy_font([UIFont systemFontOfSize:30]);
    
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


-(void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    NSLog(@"tag : %ld, userInteractionEnabled : %d", (long)self.view1.tag, self.view1.userInteractionEnabled);
}

@end
