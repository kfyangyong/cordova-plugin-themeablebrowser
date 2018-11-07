//
//  CDVThemeableBrowserUIDelegate.h
//  5ibody
//
//  Created by ayong on 2018/11/6.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>

@interface CDVThemeableBrowserUIDelegate : NSObject <WKUIDelegate>{
@private
    UIViewController* _viewController;
}

@property (nonatomic, copy) NSString* title;

- (instancetype)initWithTitle:(NSString*)title;
-(void) setViewController:(UIViewController*) viewController;

@end

