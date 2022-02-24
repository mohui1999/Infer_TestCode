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


// Found 1 issue

// issue_1353-1.c:21: error: NULL_DEREFERENCE
//   pointer `x` last assigned on line 19 could be null and is dereferenced at line 21, column 18.
//   19.       foo();
//   20.   
//   21. >     printf("%d", *x);
