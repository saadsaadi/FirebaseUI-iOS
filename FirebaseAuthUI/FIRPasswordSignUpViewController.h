//
//  Copyright (c) 2016 Google Inc.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <UIKit/UIKit.h>

#import "FIRAuthUIBaseViewController.h"

NS_ASSUME_NONNULL_BEGIN

/** @class FIRPasswordSignUpViewController
    @brief The view controller where user signs up as a password account.
 */
@interface FIRPasswordSignUpViewController : FIRAuthUIBaseViewController
{
  @protected
  /** @var _email
    @brief The @c email address of the user from the previous screen.
   */
  NSString *_email;
}

/** @property footerTextView
    @brief The text view in the footer of the table.
 */
@property(nonatomic, strong) IBOutlet UITextView *footerTextView;

/** @fn initWithNibName:bundle:authUI:
    @brief Please use @c initWithAuthUI:email:.
 */
- (instancetype)initWithNibName:(nullable NSString *)nibNameOrNil
                         bundle:(nullable NSBundle *)nibBundleOrNil
                         authUI:(FIRAuthUI *)authUI NS_UNAVAILABLE;

/** @fn initWithAuthUI:
    @brief Please use @c initWithAuthUI:email:.
 */
- (instancetype)initWithAuthUI:(FIRAuthUI *)authUI NS_UNAVAILABLE;

/** @fn initWithNibName:bundle:authUI:email:
    @brief Designated initializer.
    @param nibNameOrNil The name of the nib file to associate with the view controller.
    @param nibBundleOrNil The bundle in which to search for the nib file.
    @param authUI The @c FIRAuthUI instance that manages this view controller.
    @param email The email address of the user.
 */
- (instancetype)initWithNibName:(nullable NSString *)nibNameOrNil
                         bundle:(nullable NSBundle *)nibBundleOrNil
                         authUI:(FIRAuthUI *)authUI
                          email:(NSString *_Nullable)email NS_DESIGNATED_INITIALIZER;

/** @fn didChangeEmail:orPassword:orUserName:
    @brief Should be called after any change of email, password or user name value. 
    Updates UI controls state (e g state of next button)
    @param email The email address of the user.
    @param password The password which user uses.
    @param username The username which user uses.
 */
- (void)didChangeEmail:(NSString *)email
            orPassword:(NSString *)password
            orUserName:(NSString *)username;

/** @fn signUpWithEmail:andPassword:andUsername:
    @brief Should be called when user entered credentials and name. Sends request to create
    new user and second request to update it's name
    @param email The email address of the user.
    @param password The password which user uses.
    @param username The username which user uses.
 */
- (void)signUpWithEmail:(NSString *)email
            andPassword:(NSString *)password
            andUsername:(NSString *)username;

@end

NS_ASSUME_NONNULL_END
