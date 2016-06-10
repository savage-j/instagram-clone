//
//  Comment.m
//  instagram-clone
//
//  Created by Jordan Carlson on 6/1/16.
//  Copyright © 2016 savagej. All rights reserved.
//

#import "Comment.h"
#import "User.h"


@implementation Comment

- (instancetype) initWithDictionary:(NSDictionary *)commentDictionary {
    self = [super init];
    
    if (self) {
        self.idNumber = commentDictionary[@"id"];
        self.text = commentDictionary[@"text"];
        self.from = [[User alloc] initWithDictionary:commentDictionary[@"from"]];
    }
    
    return self;
}

@end
