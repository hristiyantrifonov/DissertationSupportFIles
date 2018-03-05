////////////////////////////////////////////////////////////////////////////
//
// Copyright 2014-2015 Realm Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
////////////////////////////////////////////////////////////////////////////

@import Cocoa;

#import "RLMDocument.h"
#import "RLMTypeOutlineViewController.h"
#import "RLMInstanceTableViewController.h"

extern const NSUInteger kMaxNumberOfArrayEntriesInToolTip;

@interface RLMRealmBrowserWindowController : NSWindowController

@property (nonatomic, readonly) RLMNavigationState *currentState;

@property (atomic, assign) RLMDocument *document;

@property (nonatomic, strong) IBOutlet RLMTypeOutlineViewController *outlineViewController;
@property (nonatomic, strong) IBOutlet RLMInstanceTableViewController *tableViewController;

- (void)addNavigationState:(RLMNavigationState *)state fromViewController:(RLMViewController *)controller;

- (void)newWindowWithNavigationState:(RLMNavigationState *)state;

- (void)reloadAllWindows;

@end