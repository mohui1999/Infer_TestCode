/*
* source: Infer/sample/demo/00/simple_null.cpp
* commandline: infer run --purity -- clang -c sample_0.cpp
* excepted result: Null Dereference
* tool result: Pure Function(PURE_FUNCTION): 1
*              Null Dereference(NULL_DEREFERENCE): 1
*/

void deref_null() {
  int* p = nullptr;
  *p = 42;
}