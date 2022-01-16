/*
* source: https://blog.csdn.net/qq_37655329/article/details/121996383
* excepted result: 内存泄漏
* tool result: dead store
*/

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