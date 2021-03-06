/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <Foundation/Foundation.h>

#import <WebDriverAgentLib/FBCommandHandler.h>

@class XCUIElement, XCElementSnapshot;

@interface FBFindElementCommands : NSObject <FBCommandHandler>

+ (NSArray<XCUIElement *> *)descendantsOfElement:(XCUIElement *)element withXPathQuery:(NSString *)xpathQuery;

+ (NSArray<XCElementSnapshot *> *)descendantsOfElementSnapshot:(XCElementSnapshot *)elementSnapshot withXPathQuery:(NSString *)xpathQuery;

@end
