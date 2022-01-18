/*
* source: https://github.com/facebook/infer/issues/1521
* commandline: infer --pulse run -- clang -c sample_5.c
* excepted result: 内存泄漏
* tool result: Memory Leak(MEMORY_LEAK): 1
*/

#include<stddef.h>
// 开始没有加头文件，infer报代码错后崩溃
int foo(int a, int b){
  char *p = NULL;
  if(a > b){
    p = malloc(100);
  }
  
  if(a > b){
    free(p);
  }
  return 0;
}