#include<stdio.h>
int *x, *y, a, b;

void foo()
{
    if (a > 0)
        x = y;
    else
        free(y);
}

int main()
{
    scanf("%d %d", &a, &b);

    x = (int *)malloc(sizeof(int));
    y = (int *)malloc(sizeof(int));

    foo();

    printf("%d", *y);
}