//
//  AppDelegate.h
//  Pay Calculator
//
//  Created by qiaorujia on 11/20/13.
//  Copyright (c) 2013 Eisoo. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>
{
    __weak NSTextField *_employeeNameField;
    __weak NSFormCell *_hourlyRateField;
    __weak NSFormCell *_hoursWorkedField;
    __weak NSFormCell *_standardHoursInPeriodField;
    __weak NSTextField *_payAmountField;
    __weak NSButton *_employeeIsExemptButton;
    
}
@property (assign) IBOutlet NSWindow *window;
- (IBAction)calculatePayAmount:(id)sender;

@property (weak) IBOutlet NSTextField *employeeNameField;
@property (weak) IBOutlet NSFormCell *hourlyRateField;
@property (weak) IBOutlet NSFormCell *hoursWorkedField;
@property (weak) IBOutlet NSFormCell *standardHoursInPeriodField;
@property (weak) IBOutlet NSTextField *payAmountField;
@property (weak) IBOutlet NSButton *employeeIsExemptButton;
@end
