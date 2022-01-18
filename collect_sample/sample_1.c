/*
* source: MCFuzz/issue_03.c
* excepted result: 
* tool result: tool display error
*/

#include <stdio.h>
void test_main()
{
    printf("hello world!");
}
void main()
{
    test_main();
}
