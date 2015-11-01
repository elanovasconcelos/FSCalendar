//
//  FSCalendarFlowLayout.h
//  FSCalendar
//
//  Created by Wenchao Ding on 10/25/15.
//  Copyright (c) 2015 wenchaoios. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FSCalendar;

@interface FSCalendarFlowLayout : UICollectionViewFlowLayout

@property (weak, nonatomic) FSCalendar *calendar;

@end