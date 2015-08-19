//
//  ViewController.h
//  DatePickDemo
//
//  Created by Hu Aihong on 15-8-10.
//  Copyright (c) 2015年 ChinaCloud. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIDatePicker *DatePicker;

- (IBAction)selectDate:(id)sender;

@end

