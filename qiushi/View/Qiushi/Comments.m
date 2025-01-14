//
//  Comments.m
//  NetDemo
//
//  Created by Michael on 12-6-6.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import "Comments.h"

@implementation Comments

@synthesize commentsID;
@synthesize content;
@synthesize floor;
@synthesize anchor;
@synthesize qsId;
@synthesize createTime;

- (id)initWithDictionary:(NSDictionary *)dictionary
{
    if (self = [super init])
    {
        self.commentsID = [dictionary objectForKey:@"id"];
        self.content = [dictionary objectForKey:@"content"];
        self.floor = [[dictionary objectForKey:@"floor"]intValue];
        id user = [dictionary objectForKey:@"user"];
        if ((NSNull *)user != [NSNull null]) 
        {
            NSDictionary *user = [NSDictionary dictionaryWithDictionary:[dictionary objectForKey:@"user"]];
            self.anchor = [user objectForKey:@"login"];
        }
    }
    return self;
}





@end
