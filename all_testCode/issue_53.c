#include <assert.h>
unsigned char x = 50;
short y = -5;

int main ()
{
  x /= y;
  if (x != (unsigned char) -10)
    {assert(0); } 
return 0; }