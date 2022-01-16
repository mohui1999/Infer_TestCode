/*
* source: https://blog.csdn.net/ZhaDeNianQu/article/details/119794670
* excepted result: a[2]超出unsined char的范围
* tool result: true
*/

#include<stdlib.h>
#include<stdio.h>
void main()
{
    unsigned char a[3] = {0};
    a[0] = 200;
    a[1] = 200;
    a[2] = a[0] + a[1]; //unsigned char 取值范围：0~255 ，超出取值范围
    printf("a:%d  b:%d c:%d\n", a[0], a[1], a[2]);
    system("pause");
}
