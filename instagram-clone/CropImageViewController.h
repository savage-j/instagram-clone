//
//  CropImageViewController.h
//  instagram-clone
//
//  Created by Jordan Carlson on 6/23/16.
//  Copyright © 2016 savagej. All rights reserved.
//

#import "MediaFullScreenViewController.h"


@class CropImageViewController;

@protocol CropImageViewControllerDelegate <NSObject>

- (void) cropControllerFinishedWithImage:(UIImage *)croppedImage;

@end


@interface CropImageViewController : MediaFullScreenViewController

- (instancetype) initWithImage:(UIImage *)sourceImage;

@property (nonatomic, weak) NSObject <CropImageViewControllerDelegate> *delegate;

@end
