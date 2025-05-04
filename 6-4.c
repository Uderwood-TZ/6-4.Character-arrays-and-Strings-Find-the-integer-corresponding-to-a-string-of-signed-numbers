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
long  fun ( char *p){
    long result=0;
    int sign=1;
    if(*p=='-')
    sign=-1, p++;
    while(*p)
    {
        result=result*10+(*p-'0');
                p++;
    }
    return result*sign;
}