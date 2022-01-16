#include <assert.h>

const char *s1="-----BEGIN RSA PRIVATE KEY-----";

int main()
{

  if (strncmp(s1, "-----BEGIN ", 11))
    {assert(0);}

  return 0;
}