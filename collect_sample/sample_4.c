/*
* source: https://blog.csdn.net/qq_37655329/article/details/121996383
* commandline: infer --pulse run -- clang -c sample_4.c
* excepted result: 内存泄漏 memory leak
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