//
//  UIView+CellXib.m
//  LotteryStraightTrain
//
//  Created by apple on 15/12/18.
//  Copyright © 2015年 apple. All rights reserved.
//

#import "UIView+CellXib.h"
#import "UIView+Xib.h"
const char * externReuseIDDictionaryKey;
@implementation UIView (CellXib)
+ (void)setReuseIDDictionary:(NSDictionary *)reuseIDDictionary
{
    objc_setAssociatedObject(self, &externReuseIDDictionaryKey, reuseIDDictionary, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}
+ (NSDictionary *)reuseIDDictionary
{
    return objc_getAssociatedObject(self, &externReuseIDDictionaryKey);
}
- (void)setupSelfNameCellXibOnSelf
{
    [self setupSelfNameCellXibOnSelfWithReuseIDDictionary:[[self class] reuseIDDictionary]];
}
- (void)setupSelfNameCollectionViewCellXibOnSelf
{
    [self setupSelfNameXibOnSelf];
    [self sendSubviewToBack:[self containerView]];
}
- (void)setupSelfNameCellXibOnSelfWithReuseIDDictionary:(NSDictionary *)reuseIDDictionary
{
    NSDictionary *reuseIDDic = [[self class] reuseIDDictionary];
    if (reuseIDDic) {
        NSArray *reuseIDArray = [reuseIDDic allKeys];
        for (NSInteger i = 0; i < reuseIDArray.count; i++) {
          
            if ([[self valueForKey:@"reuseIdentifier"] isEqualToString:reuseIDArray[i]]) {
                [self setupSelfNameXibOnSelfWithSerialNumber:[[reuseIDDic valueForKey:reuseIDArray[i]] intValue]];
            }
           
            
        }
        
        
    }
}


#pragma mark - ========= Helper Methods =========
- (id)searchResponder
{
 
  
    for (NSInteger i = 0; i < [self responderDictionary].count; i++) {
        //self.superview才是cell, 遍历是否有cell或header
        NSArray *keys = [[self responderDictionary] allKeys];
        if ([self.superview isKindOfClass:NSClassFromString(keys[i])]) {
            //存在
            id nextResponder = [self nextResponder];
            while(![nextResponder isMemberOfClass:[UIViewController class]])
            {
                nextResponder = [nextResponder nextResponder];
                if ([nextResponder isMemberOfClass:NSClassFromString([[self responderDictionary] valueForKey:keys[i]])]) {
                    return nextResponder;
                }
            }
            
        }
        
    }
    
    return nil;
}
- (NSDictionary *)responderDictionary
{
    
    return @{@"UITableViewCell":@"UITableView",
             @"UITableViewHeaderFooterView":@"UITableView",};
//             @"UICollectionViewCell":@" UICollectionView",
//             @"UICollectionReusableView":@"UICollectionView"};
    
   // return @{@"UITableViewCell":@"UITableView"};
    
}
//
//#pragma mark - ========= Touch Event =========
//- (void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event
//{
//    if ([self searchResponder]) {
//        id responder = [self searchResponder];
//        [responder touchesBegan:touches withEvent:event];
//    }
//    else
//    {
//        [super touchesBegan:touches withEvent:event];
//    }
//}
//- (void)touchesMoved:(NSSet *)touches withEvent:(UIEvent *)event
//{
//    if ([self searchResponder]) {
//        id responder = [self searchResponder];
//        [responder touchesMoved:touches withEvent:event];
//    }
//    else
//    {
//        [super touchesMoved:touches withEvent:event];
//    }
//}
//- (void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event
//{
//    if ([self searchResponder]) {
//        id responder = [self searchResponder];
//        [responder touchesEnded:touches withEvent:event];
//    }
//    else
//    {
//        [super touchesEnded:touches withEvent:event];
//    }
//}
//- (void)touchesCancelled:(NSSet *)touches withEvent:(UIEvent *)event
//{
//    if ([self searchResponder]) {
//        id responder = [self searchResponder];
//        [responder touchesCancelled:touches withEvent:event];
//    }
//    else
//    {
//        [super touchesCancelled:touches withEvent:event];
//    }
//}
//
//
@end
