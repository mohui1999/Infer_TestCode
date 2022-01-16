#include <stdlib.h>


int* allocate_int() { return malloc(sizeof(int)); }

void set(int* p, int value) { *p = value; }

void deref_null() {
  int* p = allocate_int();
  set(p, 42);
}