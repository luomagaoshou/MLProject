//
//  MLRealmViewController.m
//  MLProject
//
//  Created by 妙龙赖 on 16/7/4.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLRealmViewController.h"
#import <Realm/Realm.h>
@interface MLBook:RLMObject
@property(nonatomic, copy) NSString *name;
@property(nonatomic, assign) NSInteger price;
//@property(nonatomic, strong) RLMArray *list;
@end
@implementation MLBook
@end

@class Person;
@interface Dog : RLMObject
@property NSString *name;
@property NSData   *picture;
@property NSInteger age;
@property(nonatomic, strong) Person *owner;
@end
@implementation Dog
+ (NSString *)primaryKey
{
    return @"Dog";
}
@end

RLM_ARRAY_TYPE(Dog)

@interface Person : RLMObject
@property(nonatomic, copy) NSString *name;
@property(nonatomic, strong) RLMArray<Dog *><Dog> *dogs;
@end
@implementation Person

@end
@interface MLRealmViewController ()

@end

@implementation MLRealmViewController

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
    [self createModel];
   // [self createDog];
}
- (void)createModel
{
    
    MLBook *book = [[MLBook alloc] init];
    book.name = @"OCTeaching";
    book.price = 59;
    
    NSLog(@"%@", [MLBook allObjects]);
   
    MLBook *dicBook = [[MLBook alloc] initWithValue:@{@"name":@"OC", @"price":@50}];
    MLBook *arrBook = [[MLBook alloc] initWithValue:@[@"swift", @51]];
    
    RLMRealm *realm = [RLMRealm defaultRealm];
    [realm beginWriteTransaction];
    [realm addObject:book];
    [realm addObject:dicBook];
    [realm addObject:arrBook];
    [realm commitWriteTransaction];
    NSLog(@"%@", NSHomeDirectory());
    
}
- (void)createDog
{
    Person *jim = [[Person alloc] init];
    jim.name = @"jim";
    
    Dog *mydog = [[Dog alloc] init];
    mydog.name = @"Rex";
    mydog.age = 1;
    mydog.picture = nil;
    mydog.owner = jim;
    
    
    RLMResults<Dog *> *pupplies = [Dog objectsWhere:@"age < 2"];
    NSInteger count = pupplies.count;
    
    RLMRealm *realm = [RLMRealm defaultRealm];
    [realm transactionWithBlock:^{
        [realm addObject:mydog];
    }];
    [Dog objectInRealm:realm forPrimaryKey:@"Dog"];

    count = pupplies.count;
    dispatch_async(dispatch_queue_create("background", 0), ^{
        Dog *theDog = [[Dog objectsWhere:@"age == 1"] firstObject];
        RLMRealm *realm = [RLMRealm defaultRealm];
        [realm beginWriteTransaction];
        theDog.age = 3;
        [realm commitWriteTransaction];
        
        
    });
    

}
#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    
    
    
    
}


#pragma mark - ========= Setter & Getter =========


@end
