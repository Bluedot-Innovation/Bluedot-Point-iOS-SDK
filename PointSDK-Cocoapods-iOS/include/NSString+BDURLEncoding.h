//
//  Created by Bluedot Innovation
//  Copyright (c) 2016 Bluedot Innovation. All rights reserved.
//
//  Implements a wrapper around URL encoding.
//

#import <Foundation/Foundation.h>


@interface NSString (BDURLEncoding)

//  Methods for encoding and decoding a URL
- (NSString *)urlEncodeUsingEncoding: (NSStringEncoding)encoding;
- (NSString *)urlDecode;

@end
