/*
* source: Infer/sample/demo/00/simple_0.cpp
* excepted result: none
* tool result: Null Dereference(NULL_DEREFERENCE): 1
*              
*/
#include<stdlib.h>
void deref_null(int a, int b)
{

    int *p = nullptr;
    
    if (a > b)
    {
       b=abs(a)+abs(b);
    }

    if (a > b)
    {
        *p = 42;
    }

}