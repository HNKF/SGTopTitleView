# SGTopTitleView
## a top title view, according to the title of a number of automatic adaptation content
### 顶部滚动视图（APP中常见顶部滚动菜单选项，使用UIScrollView进行封装，使用起来极其简单、实用、方便）

![](https://github.com/kingsic/SGTopTitleView/raw/master/Gif/Untitled.gif)

## * `静止状态下标题按钮的创建`<br>
## * `滚动状态下标题按钮的创建`<br>
## * `导航栏上标题按钮的创建`<br>

* SGTopTitleView使用方法一：

  * 将项目中SGTopScrollMenu文件夹拖入工程

  * 导入#import "SGTopScrollMenu.h"头文件

  * 通过alloc、initWithFrame或者类方法topScrollMenuWithFrame去创建

  * 遵循SGTopScrollMenuDelegate协议的topScrollMenuDelegate方法
  ```Objective-C
  - (void)SGTopScrollMenu:(SGTopScrollMenu *)topScrollMenu didSelectTitleAtIndex:(NSInteger)index；
  ```
  
* SGTopTitleView使用方法二：（详细使用方法，请参考Demo）

* 父子控制器的使用

* 通过Label创建并在其上添加手势（UITapGestureRecognizer）

* 通过 
```Objective-C - (CGRect)boundingRectWithSize:(CGSize)size options:(NSStringDrawingOptions)options attributes:(nullable NSDictionary *)attributes context:(nullable NSStringDrawingContext *)context;
```根据标题内容：实现标题宽度自适应
