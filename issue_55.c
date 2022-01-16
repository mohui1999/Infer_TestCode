#include <assert.h>
struct X {
   unsigned long u31:31;
};

struct X x;

int main ()
{
      if ((x.u31 - 2) >= 0)
	{assert(0);}

return 0; }