//
//  MLDebugViewController.m
//  MLProject
//
//  Created by 妙龙赖 on 2017/1/22.
//  Copyright © 2017年 妙龙赖. All rights reserved.
//

#import "MLDebugViewController.h"
#import "NSObject+ML_Debug.h"
#import "XYDebugToy.h"
@interface MLDebugViewController ()

@end

@implementation MLDebugViewController
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
    
    
    
//    NSMutableString *mutStr = [[NSMutableString alloc] initWithCapacity:8];
//    [mutStr insertString:@"|_" atIndex:mutStr.length - 1];
//    NSLog(@"%@", mutStr);
    for (NSInteger i = 0; i < 1; i++) {
        UIView *view = [[UIView alloc] initWithFrame:CGRectMake(50 + i * 2, 100+ i * 2, SCREEN_WIDTH * ((10.0-i)/10.0), SCREEN_HEIGHT * ((10.0-i)/10.0))];
       // view.backgroundColor = kCOLOR_RANDOM_COLOR;
        [self.view addSubview:view];
        
        for (NSInteger j = 0; j < 5; j++) {
            UIView *subview2 =[[UIView alloc] initWithFrame:CGRectMake(50 + i * 2, 100+ i * 2, SCREEN_WIDTH * ((10.0-i)/10.0), SCREEN_HEIGHT * ((10.0-i)/10.0))];
           // subview2.backgroundColor = kCOLOR_RANDOM_COLOR;
            if (j == 0) {
                [view addSubview:subview2];
            } else if (j == 1){
                [view.subviews[0] addSubview:subview2];
            } else if (j == 2){
                   [view.subviews[0].subviews[0] addSubview:subview2];
            } else{
                
                [view.subviews[view.subviews.count - 1] addSubview:subview2];
                
            }
            
        }

        
        for (NSInteger j = 0; j < 5; j++) {
            UIView *subview =[[UIView alloc] initWithFrame:CGRectMake(50 + i * 2, 100+ i * 2, SCREEN_WIDTH * ((10.0-i)/10.0), SCREEN_HEIGHT * ((10.0-i)/10.0))];
            //subview.backgroundColor = kCOLOR_RANDOM_COLOR;
            [view addSubview:subview];
        }
        
        
    }
    

 
    
  id srt =  [self.view performSelector:@selector(recursiveDescription)];
   // NSLog(@"%@", [XYDebugToy displayViews:self.view]);
   // dispatch_async(dispatch_get_main_queue(), ^{
//        MLTreeNode *node = [self.view printViewInfo];
//        NSLog(@"%@", node);
   // });
    MLTree *tree = [MLTree treeWithView:self.view];
    NSArray *descendants = tree.rootNode.descendants;
    NSLog(@"%@", tree, descendants);
     //[self testArgs:@"haha", [UIColor redColor], (float)6.1, (int)1 ,(int)2, (float)5.1, @"end"];
}

//typedef struct mlc_va_list { void *__ap; } mlc_va_list;
#define _INTSIZEOF(n) ( (sizeof(n) + sizeof(int) - 1) & ~(sizeof(int) - 1) )
typedef struct ml_va_list{
    unsigned int gp_offset;
    unsigned int fp_offset;
    char *overflow_arg_area;
    char *reg_save_area;
    /**第一家整型参数指针*/
    int *a0; /* pointer to first homed integer argument */
    /**下一个参数的字节偏移量*/
    int offset; /* byte offset of next parameter */
} ml_va_list;
#define ml_va_start(ap,v) ( ap = (ml_va_list)&v + _INTSIZEOF(v) )
#define ml_va_arg(ap,t) ( *(t *)((ap += _INTSIZEOF(t)) - _INTSIZEOF(t)) )
#define ml_va_end(ap) ( ap = (va_list)0 )


- (void)testArgs:(id)obj,...{
    
    va_list args;
    va_start(args, obj);
#if 0
    va_arg(args, id);
    va_arg(args, double);
    va_arg(args, int);
    va_arg(args, int);
    va_arg(args, double);
#endif
#if 0
    
    
    mlargs->gp_offset += 8;
    mlargs->fp_offset += 16;
    mlargs->gp_offset += 16;
    mlargs->fp_offset += 16;
    mlargs->gp_offset += 8;
    
#endif
    struct ml_va_list *mlargs =  (struct ml_va_list *)&args;
    mlargs->gp_offset -= 8;
    va_arg(args, id);
    va_arg(args, id);
    va_arg(args, double);
    va_arg(args, int);
    va_arg(args, int);
    va_arg(args, double);
    
    NSLog(@"%@", va_arg(args, id) );
}

#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    
}


#pragma mark - ========= Setter & Getter =========

@end
