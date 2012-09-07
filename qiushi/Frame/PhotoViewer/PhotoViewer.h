//
//  PhotoViewer.h
//  NetDemo
//
//  Created by Michael on 12-6-8.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EGOImageView.h"

#import "ATMHud.h"

@interface PhotoViewer : UIViewController<EGOImageViewDelegate,UIGestureRecognizerDelegate>
{
    NSString *_imgUrl;
    EGOImageView *_imageView;
    CGFloat roation;
    CGFloat scale;
    
    
    ATMHud *_hud;//读取 图片进度条

}

@property (nonatomic,retain) EGOImageView *imageView;
@property (nonatomic,retain) NSString *imgUrl;
-(void) fadeOut;
-(void) fadeIn;

@property (nonatomic, retain) ATMHud *hud;

@end
