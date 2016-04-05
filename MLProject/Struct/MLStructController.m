//
//  MLStructController.m
//  MLProject
//
//  Created by 妙龙赖 on 16/4/3.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLStructController.h"

@interface MLStructController ()
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UIButton *button;

@end

@implementation MLStructController

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
    
    
  __block  char *word;
  __block struct tnode *root;
    root=NULL;
 
  [self.button touchUpInside:^{
      printf("输入要添加的字符串,不得超过10个字符\n");
      char s[100];
    strcpy(s, [self.textField.text UTF8String]);
      scanf("%s",s);
      root=addtree(root,s);
      printf("打印已有的树结构如下:\n");
      treeprint(root);
  }];
    
   
}


#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    
}
struct tnode{
    char *word;
    int count;
    struct tnode *left;
    struct tnode *right;
};

/*用于分配结构体内存*/
struct tnode *talloc(void)
{
    return (struct tnode *) malloc (sizeof(struct tnode));//注意此处有一个强制转换，原本是返回一个无类型的指针
}

/*用于赋值字符串到返回值指针上面*/
char *strdup1(char *s)
{
    char *p;
    p=(char *)malloc(strlen(s) + 1);//分配一定空间，注意此处要加上最后一个字符串结束符的空间1
    if(p!=NULL)
        strcpy(p,s);
    return p;
}

/*打印树*/
void treeprint(struct tnode *p)
{
    if(p!=NULL) {
        treeprint(p->left);
        printf("%4d %s\n",p->count,p->word);
        treeprint(p->right);
    }
}

/*添加一个节点给一棵树上*/
struct tnode *addtree(struct tnode *p,char *w)
{
    int cond;
    if(p==NULL) {
        p=talloc();//若p是第一个根节点，则为其分配内存
        p->word=strdup1(w);//赋值给指针
        p->count=1;//计数为1
        p->left=p->right=NULL;//初始化左子树右子树均为NULL
    }
    else if(strcmp(w,p->word)==0)//若这个字符串与已有的节点相同，则计数加1
        p->count++;
    else if(cond<0)//若比它小，则加到左子树上，递归调用
        p->left=addtree(p->left,w);
    else //若比它大，则加到右子树，递归调用
        p->right=addtree(p->right,w);
    return p;
}

#pragma mark - ========= Event Methods =========
- (void)handleSenderEvent:(UIView *)sender
{
    
}
#pragma mark - ========= Setter & Getter =========


@end
