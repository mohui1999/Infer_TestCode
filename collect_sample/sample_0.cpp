/*
* source: Infer/sample/demo/00/simple_null.cpp
* excepted result: Null Dereference
* tool result: Null Dereference
*/

void deref_null() {
  int* p = nullptr;
  *p = 42;
}