#include <stdio.h>
#include <string.h>
long  fun ( char *p) ;
int main()      /* ������ */
{ char s[6];
  long    n;
 scanf("%s",  s) ;
  n=fun(s);
  printf("%ld",n);
 return 0;
 }

/* ���������д�Ĵ��뽫��Ƕ�뵽���� */
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