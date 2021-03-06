//
//  CDVPushApps.h
//  PushAppsPhonegapPlugin
//
//  Created by Asaf Ron on 11/21/13.
//
//

#import <Cordova/CDVPlugin.h>
#import "PushApps.h"

@interface CDVPushApps : CDVPlugin <PushAppsDelegate>

- (CDVPlugin*)initWithWebView:(UIWebView*)theWebView;

- (void)registerUser:(CDVInvokedUrlCommand*)command;
- (void)unRegisterUser:(CDVInvokedUrlCommand*)command;
- (void)getDeviceId:(CDVInvokedUrlCommand*)command;
- (void)setTags:(CDVInvokedUrlCommand*)command;
- (void)removeTags:(CDVInvokedUrlCommand*)command;

@end
