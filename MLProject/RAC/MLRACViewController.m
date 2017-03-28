//
//  MLRACViewController.m
//  MLProject
//
//  Created by 妙龙赖 on 16/1/4.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLRACViewController.h"
#import <ReactiveCocoa/ReactiveCocoa.h>
#import <ReactiveCocoa/RACReturnSignal.h>
#import <ReactiveCocoa/NSInvocation+RACTypeParsing.h>
#import "NSObject+RunTimeHelper.h"
#import "UIViewController+ML_Tools.h"
#import <Aspects/Aspects.h>
@interface MLRACViewController ()
@property (weak, nonatomic) IBOutlet UILabel *testLabel;
@property (weak, nonatomic) IBOutlet UITextField *testTextField;
@property (weak, nonatomic) IBOutlet UIButton *button1;
@property (weak, nonatomic) IBOutlet UIButton *button2;
@property (nonatomic, strong) NSString *testString;

@property (nonatomic, strong) UILabel *testLabel_;
@end

@implementation MLRACViewController
#pragma mark - ========= View LifeCycle =========
- (void)viewDidLoad {
    [super viewDidLoad];
    [self configUI];
    [self downloadData];
    
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    
}

- (void)viewDidAppear:(BOOL)animated
{
    [super viewDidAppear:animated];
}

- (void)viewWillDisappear:(BOOL)animated
{
    [super viewWillDisappear:animated];
}

- (void)viewDidDisappear:(BOOL)animated
{
    [super viewDidDisappear:animated];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    
}


#pragma mark - ========= Config UI =========
- (void)configUI
{
    //[self testRACSignal];
  
    [self test];
   // [self test2];
}

- (void)test {
    self.testLabel_ = [[UILabel alloc] init];
    RACSignal *signal = RACObserve(self.testLabel_, text) ;
    [signal subscribeNext:^(id x) {
        NSLog(@"%@", x);
    }];
    self.testLabel_.text = @"ff";
    //    UILabel *label2 = [[UILabel alloc] init];
    //    UITextField *textFiled = [[UITextField alloc] init];
    //    self.testLabel_ = (id)textFiled;
    //    self.testLabel_.text = @"gaga";
    //    self.testLabel_.text = @"haha";
    
    
    
    
}

- (void)test2{
    
    RACSignal *signal = [RACSignal createSignal:^RACDisposable *(id<RACSubscriber> subscriber) {
        [subscriber sendNext:@"fuck"];
        
        return nil;
    }];
    [signal subscribeNext:^(id x) {
        NSLog(@"%@", x);
    }];
    
}
- (void)testRACSignald{
    

    {
        RAC(self.testLabel, text) = self.testTextField.rac_textSignal;
    }
  
    

//    [self.testTextField.rac_textSignal subscribeNext:^(id x) {
//        self.testLabel.text = x;
//    }];
    
//    [RACObserve(self.testTextField, text) subscribeNext:^(id x) {
//        self.testLabel.text = x;
//    }];
    
//    [[self.testTextField.rac_textSignal filter:^BOOL(id value) {
//        
//        return [value length] > 5;
//    }] subscribeNext:^(id x) {
//              self.testLabel.text = x;
//    }];
//    
  

    
    
    
   // RAC(self.testTextField, alpha) = self.testTextField.rac_textSignal;
  // self.testTextField.backgroundColor = [UIColor blueColor];
//
//    RACSignal *signal = RACObserve(self.testTextField, text);
//    RAC(self.testLabel, alpha) = [signal map:^id(id value) {
//        
//        return @(([value length] %10)/10.0f);
//        
//    }];
 
//    [signal subscribeNext:^(id x) {
//        NSLog(@"%@", x);
//    }];
    
//   [[self.testTextField.rac_textSignal bind:^RACStreamBindBlock{
//    
//       return ^RACStream *(id value, BOOL *stop){
//           
//           // 什么时候调用block:当信号有新的值发出，就会来到这个block。
//           
//           // block作用:做返回值的处理
//           
//           // 做好处理，通过信号返回出去.
//           return [RACReturnSignal return:[NSString stringWithFormat:@"输出:%@",value]];
//       };
//   }] subscribeNext:^(id x) {
//      
//       NSLog(@"%@", x);
//   }];
    
   // RAC(self.testLabel, text) = self.testTextField.rac_textSignal;
    {
       // RACSignal *signal = RACObserve(self.view.layer, backgroundColor);
      //  [signal subscribeNext:^(id x) {
        //    NSLog(@"%@", x);
        //}];
        //self.view.layer.backgroundColor = [UIColor redColor].CGColor;
    };
   
    
    
   
    
    return;
#define keypath1(PATH) \
(((void)(NO && ((void)PATH, NO)), strchr(# PATH, '.') + 1))
    
#define keypath2(OBJ, PATH) \
(((void)(NO && ((void)OBJ.PATH, NO)), # PATH))
    
    NSLog(@"%s", metamacro_if_eq0_1("true")("false"));
    
    
       
 
    
   ({
        NSString *str1 = [NSString stringWithFormat:@"%@%d", @"str", 1];
        id str2 = [[UIView alloc] init];
        
        CFArrayCallBacks callbacks = kCFTypeArrayCallBacks;
        callbacks.equal = NULL;
        callbacks.retain = NULL;
        callbacks.release = NULL;
        CFMutableArrayRef array = CFArrayCreateMutable(NULL, 0, &callbacks);
        CFArrayAppendValue(array, (__bridge void *)str1);
        CFArrayAppendValue(array, (__bridge  void *)str2);
        str1 = nil;
        str2 = nil;
        NSLog(@"%@", (__bridge id)array);
    });
#if 0
    
    [UIButton aspect_hookSelector:@selector(touchUpInsideAction:) withOptions:AspectPositionBefore usingBlock:^(id info, id  sender){
        NSObject *obj = sender;
        if (obj.featureIdentifier) {
        NSLog(@"勾到了---%@", obj.featureIdentifier);
        }

    }error:nil];
    
    self.button1.featureIdentifier = @"事件1";
    self.button2.featureIdentifier = @"事件2";
    [self.button1 touchUpInside:^{
        NSLog(@"%@", self.button1.featureIdentifier);
     // id ctl = [UIViewController getLastViewControllerWithClass:[self class]];
        //NSLog(@"%@", NSStringFromClass([ctl class]));
        
    }];
    [self.button2 touchUpInside:^{
        NSLog(@"%@", self.button2.featureIdentifier);
        //id ctl = [UIViewController getLastViewControllerWithClass:[self class]];
       // NSLog(@"%@", NSStringFromClass([ctl class]));
    }];
#endif
   
}
#pragma mark - ========= DownloadData =========
- (void)downloadData
{
   // [self testRacInvocation];
}

- (void)testRacInvocation
{
    CALayer *layer = [CALayer layer];
    layer.frame = CGRectMake(200, 200, 200, 200);
    [self.view.layer addSublayer:layer];
    NSMethodSignature *methodSignature = [layer methodSignatureForSelector:@selector(setBackgroundColor:)];
    NSInvocation *invocation = [NSInvocation invocationWithMethodSignature:methodSignature];
    [invocation rac_setArgument:[UIColor redColor] atIndex:2];
    
}


#pragma mark - ========= Setter & Getter =========

@end
