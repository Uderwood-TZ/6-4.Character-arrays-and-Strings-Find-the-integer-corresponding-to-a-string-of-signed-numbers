# 6-4.Character-arrays-and-Strings-Find-the-integer-corresponding-to-a-string-of-signed-numbers
 请编写一个函数fun，它的功能是：将一个数字字符串转换为一个整数(不得调用C语言提供的将字符串转换为整数的函数)。例如，若输入字符串"-1234"，则函数把它转换为整数值 -1234。 （请勿在答题框编写主函数main， 仅需完成函数fun的begin和end之间应该填写
 的代码。）

函数接口定义：

long  fun ( char *p);

其中 p指向主函数传入的带符号的数字字符串。

裁判测试程序样例：

#include <stdio.h>

#include <string.h>

long  fun ( char *p) ;

int main()      /* 主函数 */

{ char s[6];

  long    n;
  
 scanf("%s",  s) ;
 
  n=fun(s);
  
  printf("%ld",n);
  
 return 0;
 
 }

/* 答题框所填写的代码将被嵌入到这里 */

输入样例：

-4567

输出样例：

-4567
输入样例：

456

输出样例：

456

代码长度限制

16 KB

时间限制

400 ms

内存限制

64 MB
