//
//  TLMenuItemCell.h
//  TLChat
//
//  Created by 李伯坤 on 2017/7/17.
//  Copyright © 2017年 李伯坤. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZZFlexibleLayoutViewProtocol.h"

@class TLMenuItem;
@interface TLMenuItemCell : UICollectionViewCell <ZZFlexibleLayoutViewProtocol>

@property (nonatomic, strong) TLMenuItem *menuItem;

@end
