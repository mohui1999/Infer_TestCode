// cat test_bitand.c
/* Norbert Manthey, 2020 */

#include <stdlib.h>

int main()
{
        int a [8] = {};
        int s = 0;
        int r = rand();
        int j = rand();

        for(int i = 0 ; i < 10; i++ ) {
                s += a[(r >> (i + j)) & 7];
        }

        return s;
}


/*
issue_1321.c:14: error: Uninitialized Value
  The value read from a[_] was never initialized.
  12. 
  13.         for(int i = 0 ; i < 10; i++ ) {
  14.                 s += a[(r >> (i + j)) & 7];
                      ^
  15.         }
  16. 


Found 1 issue
                Issue Type(ISSUED_TYPE_ID): #
  Uninitialized Value(UNINITIALIZED_VALUE): 1
  */