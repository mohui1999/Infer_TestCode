/*
* source: https://github.com/facebook/infer/issues/579
* Description: 代码中存在空指针引用，未报错
* excepted result: NULL deference 
* tool result: Impure Function(IMPURE_FUNCTION): 1
*/

#include <stdlib.h>

int main()
{
  unsigned i;
  int* x[10];
  for (i = 0; i < 10; ++i) {
    if (i == 6)
      x[i] = NULL;
    else
      x[i] = (int*)malloc(sizeof(int));
  }

  for(i = 0; i < 10; ++i) {
    *(x[i]) = i;
    free(x[i]);
  }
  return 0;
}