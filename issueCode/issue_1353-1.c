#include<stdio.h>
int *x, *y, a;

inline void foo()
{
    if (a > 0)
        x = y;
    else
        y = x;
}

int main()
{
    scanf("%d", &a);

    x = &a;
    y = NULL;

    foo();

    printf("%d", *x);
}