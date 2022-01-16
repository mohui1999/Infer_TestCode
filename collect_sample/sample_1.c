/*
* source: MCFuzz/issue_03.c
* excepted result: 
* tool result: tool display error
*/

#include <stdio.h>
void main()
{
    test_main();
}
void test_main()
{
    printf("hello world!");
}