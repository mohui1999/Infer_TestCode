/*
* source: https://blog.csdn.net/qq_37655329/article/details/121996383
* excepted result: 内存泄漏
* tool result: dead store
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    char *p = (char*)malloc(100 * sizeof(char));
    p = (char*)malloc(50 * sizeof(char));
    free(p);
    p = NULL;
    return 0;
}
