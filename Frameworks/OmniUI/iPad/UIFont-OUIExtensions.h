// Copyright 2010-2013 Omni Development, Inc. All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import <UIKit/UIFont.h>

@interface UIFont (OUIExtensions)

+ (UIFont *)mediumSystemFontOfSize:(CGFloat)size;
+ (UIFont *)lightSystemFontOfSize:(CGFloat)size;
+ (UIFont *)preferredItalicFontForTextStyle:(NSString *)style;

- (UIFont *)fontByAddingProportionalNumberAttributes;
- (UIFont *)fontByAddingTimeAttributes;

@end
