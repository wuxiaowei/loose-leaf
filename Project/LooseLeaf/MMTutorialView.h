//
//  MMTutorialView.h
//  LooseLeaf
//
//  Created by Adam Wulf on 2/21/15.
//  Copyright (c) 2015 Milestone Made, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MMTutorialViewDelegate.h"

@interface MMTutorialView : UIView<UIScrollViewDelegate>

@property (nonatomic, weak) NSObject<MMTutorialViewDelegate>* delegate;

@end