//
//  I7SPreferenceSharesViewController.h
//  i7share
//
//  Created by Jonas Schnelli on 30.07.12.
//  Copyright (c) 2012 include7 AG. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "RHPreferences.h"
@interface MWPreferenceGeneralViewController : NSViewController <RHPreferencesViewControllerProtocol, NSComboBoxDelegate, NSMatrixDelegate>
@property (assign) BOOL launchAtStartup;

@end
