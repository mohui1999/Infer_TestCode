void deref_null() {
  int* p = nullptr;
  *p = 42;
}