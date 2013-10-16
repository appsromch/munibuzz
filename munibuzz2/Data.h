//
//  Data.h
//  munibuzz2
//
//  Created by Kalai Wei on 10/15/13.
//  Copyright (c) 2013 Kalai Wei. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Data : NSObject <NSCoding>
@property (strong, nonatomic) NSMutableString *startLabel;
@property (strong, nonatomic) NSMutableString *destLabel;
@property (strong, nonatomic) NSMutableString *routeLabel;
@property (strong, nonatomic) NSMutableString *useDefault;
@property (strong, nonatomic) NSMutableString *includeReturn;
@property (strong, nonatomic) NSMutableString *repeatLabel;
@property (strong, nonatomic) NSMutableString *repeat_default_label;
@property (strong, nonatomic) NSMutableString *remindLabel;
@property (strong, nonatomic) NSMutableString *remind_default_label;

-(Data*)initWithCoder:(NSCoder *)aDecoder;
-(void)encodeWithCoder:(NSCoder *)anEncoder;
+ (NSString *)getPathToArchive;
+(void)saveData:(Data *)aData;
+(Data *)getData;
@end
