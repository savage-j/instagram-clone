//
//  Comment.h
//  instagram-clone
//
//  Created by Jordan Carlson on 6/1/16.
//  Copyright © 2016 savagej. All rights reserved.
//

#import <Foundation/Foundation.h>

@class User;

@interface Comment : NSObject

@property (nonatomic, strong) NSString *idNumber;
@property (nonatomic, strong) User *from;
@property (nonatomic, strong) NSString *text;

- (instancetype) initWithDictionary:(NSDictionary *)commentDictionary;

@end
