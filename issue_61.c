#include <assert.h>
char f(char a, char c)
{
  if (!a)
    { c = !c; } 
  return c;
}

void checkf(int a, int b)
{
  char c = f(a, b);
  char d;
  memcpy (&d, &c, 1);
  if ( (d != (a==0)) ^b)
    { assert(0); }
}

int main(void)
{
  checkf(0, 0);
  return 0;
}