//
//  DetailViewController.h
//  ControllingSource
//
//  Created by Everton on 29/07/14.
//  Copyright (c) 2014 Everton Miranda Vitorio. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
