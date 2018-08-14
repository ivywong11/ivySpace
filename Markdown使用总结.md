[TOC]
Markdown使用总结
=
-   概述
-   换行
-   标题
-   区块引用
-   列表
-   代码区块
-   分隔线
-   链接
-   强调
-   图片
-   表格、注脚、LaTeX公式、反斜杠
-   Markdown 免费编辑器     
 
##概述
轻量级「标记语言」，它用简洁的语法代替排版,纯文本内容，兼容所有的文本编辑器与字处理软件,支持 Markdown 语法的编辑器、网站、博客平台非常多.导出格式随心所欲，你可以导出 HTML 格式的文件用来网站发布，也可以十分方便的导出 PDF 格式,可读、直观、学习成本低.  

Markdown兼容 HTML,可以直接使用HTML标签,剩下的 Markdown 都会帮你处理(HTML 区块标签间的 Markdown 格式语法将不会被处理),代码区块里面， & 、 < 和 > 等特殊字符会自动转成 HTML 实体,不需要进行转义.  

##换行
一个 Markdown 段落是由一个或多个连续的文本行组成，它的前后要有一个以上的空行  
(空行的定义是显示上看起来像是空的，便会被视为空行。比方说，若某一行只包含空格和制表符，则该行也会被视为空行,所以换行  
1.只要按两下空格键即可  
2.或者按入两个以上的空格然后回车)

##标题
类 Setext 形式  
最高阶标题(任何数量)
============
第二阶标题
-------------
类 Atx 形式  
行首插入# 这是 H1,1 到 6 个 # ，对应到标题 1 到 6 阶，例如：
# 这是 H1
## 这是 H2
### 这是 H3
#### 这是 H4
###### 这是 H5
####### 这是 H6

##区块引用
> This is the first level of quoting.
>
> > This is nested blockquote.
>
> Back to the first level.  
可嵌套,可省略

##列表  
无序列表,使用 *，+，- 表示无序列表  
有序列表,有序列表则使用数字接着一个英文句点

##代码区块
    缩进 4 个空格或是 1 个制表符
行内代码  
Use the `printf()` function.

##分隔线
你可以在一行中用三个以上的星号、减号、底线来建立一个分隔线，行内不能有其他东西。你也可以在星号或是减号中间插入空格。下面每种写法都可以建立分隔线：
* * *

***

*****

- - -

---------------------------------------

##链接
1.行内式  
This is [an example](http://example.com/ "Title") inline link.  
[This link](http://example.net/) has no title attribute.
  
2.参考式  
This is [an example][id] reference-style link.  
[id]: http://example.com/  "Optional Title Here"

链接内容定义的形式为：  
方括号（前面可以选择性地加上至多三个空格来缩进），里面输入链接文字  
接着一个冒号  
接着一个以上的空格或制表符  
接着链接的网址  
选择性地接着 title 内容，可以用单引号、双引号或是括弧包着  
(可以把 title 属性放到下一行，也可以加一些缩进，若网址太长的话，这样会比较好看)

3.隐式链接标记  
Visit [Daring Fireball][] for more information.  
[Daring Fireball]: http://daringfireball.net/  

4.自动链接  
<http://example.com/>

##强调
被 * 或 _ 包围的字词会被转成用 <em\>  

用两个 * 或 _ 包起来的话，则会被转成 <strong\>

*斜体*或_斜体_  
**加粗**或__斜体__    
***加粗斜体***  
~~删除线~~

##图片
  
行内式  
![Alt text](/path/to/img.jpg)

![Alt text](/path/to/img.jpg "Optional title")   
详细叙述如下：  
一个惊叹号 !  
接着一个方括号，里面放上图片的替代文字  
接着一个普通括号，里面放上图片的网址，最后还可以用引号包住并加上 选择性的 'title' 文字。

参考式  
![Alt text][id]
[id]: url/to/image  "Optional title attribute"
到目前为止， Markdown 还没有办法指定图片的宽高，如果你需要的话，你可以使用普通的 <img> 标签

##表格、注脚、LaTeX公式、反斜杠  
###表格
语法说明：  
不管是哪种方式，第一行为表头，第二行分隔表头和主体部分，第三行开始每一行为一个表格行。  
列于列之间用管道符|隔开。原生方式的表格每一行的两边也要有管道符。  
第二行还可以为不同的列指定对齐方向。默认为左对齐，在-右边加上:就右对齐。  
|学号|姓名|分数|  
|-|-|-|  
|小明|男|75|  
|小红|女|79|  
|小陆|男|92|

###注脚
使用 Markdown[^1]可以效率的书写文档, 直接转换成 HTML[^2], 你可以使用 Leanote[^Le] 编辑器进行书写。  
[^1]:Markdown是一种纯文本标记语言  
[^2]:HyperText Markup Language 超文本标记语言  
[^Le]:开源笔记平台，支持Markdown和笔记直接发为博文

###LaTeX 公式

$ 表示行内公式  $E=mc^2$  
$$ 表示整行公式 $$\sum_{i=1}^n a_i=0$$

###反斜杠  
Markdown 可以利用反斜杠来插入一些在语法中有其它意义的符号，例如：如果你想要用星号加在文字旁边的方式来做出强调效果（但不用 <em> 标签），你可以在星号的前面加上反斜杠：  
\*literal asterisks\*  
Markdown 支持以下这些符号前面加上反斜杠来帮助插入普通的符号：  
\   反斜线  
`   反引号  
*   星号  
_   底线    
{}  花括号  
[]  方括号  
()  括弧  
\#   井字号  
+   加号  
-   减号  
.   英文句点  
!   惊叹号

##Markdown 免费编辑器  
Windows 平台

-  MarkdownPad
-  MarkPad

Linux 平台

- ReText

Mac 平台  

- Mou  

在线编辑器

- Markable.in
- Dillinger.io  

浏览器插件

- MaDe (Chrome)

高级应用

- Sublime Text 2 + MarkdownEditing