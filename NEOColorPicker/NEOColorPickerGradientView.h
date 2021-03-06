//
//  NEOColorPickerGradientView.h
//
//  Created by Karthik Abram on 10/10/12.
//  Copyright (c) 2012 Neovera Inc.
//
//  Modified by Tony Nguyen Pham (softgaroo.com) Jan 2013

/*
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 
 */



#import <UIKit/UIKit.h>

@class NEOColorPickerGradientView;

@protocol NEOColorPickerGradientViewDelegate <NSObject>

@required
- (void) colorPickerGradientView:(NEOColorPickerGradientView *)view valueChanged:(CGFloat)value;
@end

@interface NEOColorPickerGradientView : UIView

@property (nonatomic, weak) id <NEOColorPickerGradientViewDelegate> delegate;

@property (nonatomic, strong) UIColor *color1;
@property (nonatomic, strong) UIColor *color2;

@property (nonatomic, assign) CGFloat value;

- (void) reloadGradient;

@end
