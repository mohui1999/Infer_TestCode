/*
* source: Swahorn/abc/test_03.c
* excepted result: false
* tool result: Uninitialized Value(UNINITIALIZED_VALUE): 2
*/

int x = 6;

struct foo {
  int x;
  int y;
};

int B[10];

int main(int argc, char **argv) {
  int A[5];

  struct foo a;
  a.x = 59;
  x++;
  B[8] = 23;
  int z = x + 7 + a.y + A[4] + B[9];//a.y，A[4]未初始化
  return z;
}