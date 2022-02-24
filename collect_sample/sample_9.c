#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
  char *s, *e;

  s = strdup("test");
  e = strchr(s, 0);

  *e = 0; /* infer warns about NULL_DEREFERENCE here */

  free(s);
  return 0;
}