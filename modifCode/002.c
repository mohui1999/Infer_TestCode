/*
* source: Infer/sample/demo/00/simple_0&5.cpp
* excepted result: none
* tool result: Null Dereference(NULL_DEREFERENCE): 1
*              
*/
#include <stddef.h>
void deref_null(int a, int b)
{

    int *p = NULL;

    // if (a > b)
    // {
    //     a = b + a;
    // }

    if (a < b)
    {
        p = (int *)malloc(100);
    }

    if (a < b)
    {
        *p = 42;
    }

    // free(p);
}
