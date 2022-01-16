#include <stdlib.h>

int* allocate_int() { return malloc(sizeof(int)); }

void set(int* p, int value) { *p = value; }

void deref_null_ok() {
  int* p = allocate_int();
  if (p != NULL) {
    set(p, 42);
  }
  free(p);
}