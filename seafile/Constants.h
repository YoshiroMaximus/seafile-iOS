//
//  Constants.h
//  Pods
//
//  Created by henry on 2025/3/11.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define SEAFILE_SUITE_NAME @"group.com.seafile.seafilePro"
#define APP_ID @"com.seafile.seafilePro"
#define SEAF_FILE_PROVIDER @"com.seafile.seafilePro.fileprovider"

// Semantic background used for grouped/table screens; adapts to dark mode.
#define kPrimaryBackgroundColor [UIColor systemGroupedBackgroundColor]

#define HEADER_HEIGHT    24

#define BAR_COLOR        [UIColor labelColor]
#define BAR_COLOR_ORANGE      [UIColor colorWithRed:240.0/256 green:128.0/256 blue:48.0/256 alpha:1.0]
#define HEADER_COLOR     [UIColor secondarySystemBackgroundColor]

#define SEAF_COLOR_ORANGE  [UIColor colorWithRed:236.0/256 green:114.0/256 blue:31.0/256 alpha:1.0]
#define SEAF_COLOR_LIGHT [UIColor colorWithRed:255.0/256 green:196.0/256 blue:115.0/256 alpha:1.0]

#define BOTTOM_TOOL_VIEW_DISABLE_COLOR     [UIColor systemGray4Color]


#define SEAF_SEPARATOR_INSET UIEdgeInsetsMake(0, 25, 0, 15)
#define SEAF_CELL_CORNER 6

#define UIColorFromRGB(rgbValue) [UIColor \
    colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
    green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
    blue:((float)(rgbValue & 0xFF))/255.0 \
    alpha:1.0]

// Semantic system colors (min deployment target is iOS 16; these are always
// available and adapt to light/dark mode).

#define SeafColor_SystemBackground          [UIColor systemBackgroundColor]
#define SeafColor_SecondarySystemBackground [UIColor secondarySystemBackgroundColor]
#define SeafColor_Label                     [UIColor labelColor]
#define SeafColor_SecondaryLabel            [UIColor secondaryLabelColor]
#define SeafColor_TertiaryLabel             [UIColor tertiaryLabelColor]
#define SeafColor_Separator                 [UIColor separatorColor]
#define SeafColor_SystemGray                [UIColor systemGrayColor]
