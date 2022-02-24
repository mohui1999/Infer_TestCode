#include <string.h>
#include <stdio.h>

typedef struct _copper
{
  char field1[0x7fffffff];
  char field2[0x7fffffff];
  char pad0;
  char pad1;
} copper, *pcopper;

int main(int argc, char **argv)
{
    copper david;
    printf("sizeof david = %zx\n", sizeof(david));
    printf("sizeof david’s copper.field1 = %zx\n", sizeof(david.field1));
       if(argc > 1 && strlen(argv[argc-1]) < sizeof(david.field1))
              strncpy(david.field1, argv[argc-1], sizeof(david.field1));
    return 0;
}
