//
//  B3DViewController.h
//  iOSBuild3D
//
//  Created by Cesar Canassa on 4/6/13.
//  Copyright (c) 2013 Cesar Canassa. All rights reserved.
//

#import <UIKit/UIKit.h>

extern int32_t pos_x, pos_y, pos_z;
extern short ang, sector_num;


@interface B3DViewController : UIViewController
+ (void)draw;
@end
