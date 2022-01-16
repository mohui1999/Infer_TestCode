#include <assert.h>

void
foo (int a, int b[a++])
{
  if (a != 2)
    {assert(0); }
}

int
main ()
{
  int e[10];
  foo (1, e);
  return 0;
}