//
//  MLAttributeStringController.m
//  MLProject
//
//  Created by apple on 16/2/29.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLAttributeStringController.h"
#import "NSString+Size.h"
#import "NSString+MutAttrStr.h"
#import "NSMutableAttributedString+ML_Tools.h"
#import "UIImage+AttributeString.h"
@interface MLAttributeStringController ()
@property (weak, nonatomic) IBOutlet UILabel *testLabel1;

@end

@implementation MLAttributeStringController


#pragma mark - ========= View LifeCycle =========
//nib初始化
- (instancetype)initWithCoder:(NSCoder *)aDecoder
{
    self = [super initWithCoder:aDecoder];
    if (self) {
        
    }
    return self;
}
//初始化，是UIViewController的子类就会调用
- (instancetype)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        
    }
    return self;
}
//加载
- (void)loadView
{
    [super loadView];
    
}

//加载完成
- (void)viewDidLoad {
    [super viewDidLoad];
    [self initUI];
    [self downloadData];
}
//即将出现
- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    
}
//排列SubViews
- (void)viewWillLayoutSubviews
{
    [super viewWillLayoutSubviews];
}
//排列SubViews完成
- (void)viewDidLayoutSubviews
{
    [super viewDidLayoutSubviews];
    
}
//已经出现
- (void)viewDidAppear:(BOOL)animated
{
    [super viewDidAppear:animated];
}
//即将消失
- (void)viewWillDisappear:(BOOL)animated
{
    [super viewWillDisappear:animated];
}
//已经消失
- (void)viewDidDisappear:(BOOL)animated
{
    [super viewDidDisappear:animated];
}
//内存警告
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - ========= InitialUI =========
- (void)initUI
{
    
    UIImage *image = [UIImage imageNamed:@"test@2x"];
    NSMutableAttributedString *imageMutAttrStr = [image mutableAttributedStringWithBounds:CGRectMake(0, 0, 50, 50)];
    NSMutableAttributedString *mutAttrStr = [@"1111111111111111111111111111111111111111" mutableAttributedStringWithColor:[UIColor redColor] fontSize:16];
    [mutAttrStr appendAttributedString:imageMutAttrStr];
    [mutAttrStr appendAttributedString:[@"222222222222222222222222222222222222222222222222" mutableAttributedStringWithColor:[UIColor greenColor] fontSize:18]];
    [mutAttrStr appendAttributedString:[@"33333333333333333333333333333哈哈asdsssddd" mutableAttributedStringWithColor:[UIColor blueColor] fontSize:30]];
    
    mutAttrStr = [[NSMutableAttributedString alloc] initWithString:mutAttrStr.string];
    self.testLabel1.numberOfLines = 0;
    self.testLabel1.attributedText = mutAttrStr;
    self.testLabel1.backgroundColor = [UIColor cyanColor];
    #pragma mark - ========= 方法 =========
    CGRect testRect = [mutAttrStr boundingRectWithSize:CGSizeMake(self.testLabel1.width, MAXFLOAT) options:NSStringDrawingUsesLineFragmentOrigin|NSStringDrawingTruncatesLastVisibleLine context:nil];
    dispatch_async(dispatch_get_main_queue(), ^{
        self.testLabel1.size = testRect.size;
    });
   #pragma mark - ========= 方法  =========
   

    //[self.testLabel1 setNeedsDisplay];
    
//    CGSize strSize = [self getAttrStrSize:mutAttrStr constrainedToWidth:self.testLabel1.width];
//    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
////         self.testLabel1.frame = CGRectMake(self.testLabel1.x, self.testLabel1.y, strSize.width, strSize.height);
//        self.testLabel1.size = testRect.size;
//       
//    });
//   
  
    
 
    
}
- (NSArray *)getMaxHeightOflinesWithArrtStr:(NSAttributedString *)attrStr constrainedToWidth:(CGFloat)maxWidth
{
    
    NSMutableArray *maxHeightOflines = [[NSMutableArray alloc] init];
    CGFloat lineWith = 0;
    CGFloat maxHeightOfline = 0;
    for (NSInteger i = 0; i < attrStr.length; i++) {
        NSAttributedString *subArrtStr = [attrStr attributedSubstringFromRange:NSMakeRange(i, 1)];
        NSDictionary *subStrAttr = [attrStr attributesAtIndex:i effectiveRange:nil];
        UIFont *subStrFont= [subStrAttr valueForKey:NSFontAttributeName];
        
        CGSize subStrSize = [subArrtStr.string sizeWithFont:subStrFont constrainedToWidth:maxWidth];
        maxHeightOfline > subStrSize.height ? maxHeightOfline : (maxHeightOfline = subStrSize.height);
        
        if (lineWith < maxWidth) {
          lineWith += subStrSize.width;
        }
        else
        {
            [maxHeightOflines addObject:@(maxHeightOfline)];
            lineWith = subStrSize.width;
        }
    }
    //最后一次多出来的字
    if (lineWith != maxWidth ) {
        [maxHeightOflines addObject:@(maxHeightOfline)];
    }
    
   
    
    return maxHeightOflines;
}
- (CGSize)getAttrStrSize:(NSAttributedString *)attrStr constrainedToWidth:(CGFloat)width
{

    
    NSArray *heights = [self getMaxHeightOflinesWithArrtStr:attrStr constrainedToWidth:width];
    CGFloat totalHeight;
    for (NSNumber *height in heights) {
        totalHeight += [height floatValue];
    }
    CGSize resultSize = CGSizeMake(width, totalHeight);
    return resultSize;
}

#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    
}


#pragma mark - ========= Event Methods =========
- (void)handleSenderEvent:(UIView *)sender
{
    
}
#pragma mark - ========= Setter & Getter =========


@end
