//
//  TextFieldFilter.h
//  CardeHolder
//
//  Created by Srinivas on 17/03/16.
//  Copyright © 2016 OrgName. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TextFieldFilter : UIView

@property (strong, nonatomic) UILabel *title;
@property (strong, nonatomic) UIView *popUpPointer;

- (id)initWithFrame:(CGRect)frame menuItems:(NSString *)aPopUpName;
-(void)setBackgroundColor:(UIColor *)backgroundColor;
-(void)setTitleColor:(UIColor*)textColor;
-(void)setPointerColor:(UIColor*)pointerColor;
@end
