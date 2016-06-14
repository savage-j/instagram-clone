//
//  MediaTableViewCell.h
//  instagram-clone
//
//  Created by Jordan Carlson on 6/2/16.
//  Copyright © 2016 savagej. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Media, MediaTableViewCell;

@protocol MediaTableViewCellDelegate <NSObject>

- (void) cell:(MediaTableViewCell *)cell didTapImageView:(UIImageView *)imageView;

@end

@interface MediaTableViewCell : UITableViewCell

@property (nonatomic, strong) Media *mediaItem;
+ (CGFloat) heightForMediaItem:(Media *)mediaItem width:(CGFloat)width;
@property (nonatomic, weak) id <MediaTableViewCellDelegate> delegate;


@end
