/*
* source: https://github.com/facebook/infer/issues/1521
* commandline: infer --pulse run -- clang -c sample_5.c
* excepted result: 内存泄漏
* tool result: Memory Leak(MEMORY_LEAK): 1
*/

#include<stddef.h>
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