//
//  AppDelegate.m
//  Pay Calculator
//
//  Created by qiaorujia on 11/20/13.
//  Copyright (c) 2013 Eisoo. All rights reserved.
//

#import "AppDelegate.h"

@implementation AppDelegate

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification
{
    // Insert code here to initialize your application
}

- (IBAction)calculatePayAmount:(id)sender
{
    if (NSOnState == [_employeeIsExemptButton state]) {
        [_payAmountField setFloatValue:[_hourlyRateField floatValue] * [_standardHoursInPeriodField floatValue]];
    }
    else {
        float payAmount = [_hourlyRateField floatValue] * [_hoursWorkedField floatValue];
        if ([_hoursWorkedField floatValue] > [_standardHoursInPeriodField floatValue]) {
            float overtimePayAmount = 0.5f * [_hourlyRateField floatValue] * ([_hoursWorkedField floatValue] - [_standardHoursInPeriodField floatValue]);
            payAmount = payAmount + overtimePayAmount;
        }
        [_payAmountField setFloatValue:payAmount];
    }
}
@end
