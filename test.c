/*
* code description: 强制类型转换导致信息丢失
* source: 
* excepted result:
* tool result: 
*/

#include <stdio.h>
int main()
{
    double m =12.3456;
    int n;
    n = m;
    printf("%d",n);
}