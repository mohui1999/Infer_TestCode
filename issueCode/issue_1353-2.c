#include<stdio.h>
int *x, *y, a, b;

inline void foo()
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

    printf("%d", *y);  // 此处的*y即是NULL_DEREFERENCE也是USE_AFTER_FREE，在foo不同的情况下运行
}

/*
*

Found 4 issues

issue_1353-2.c:19: error: MEMORY_LEAK
  memory dynamically allocated by call to `malloc()` at line 16, column 16 is not reachable after line 19, column 5.
  17.       y = (int *)malloc(sizeof(int));
  18.   
  19. >     foo();
  20.   
  21.       printf("%d", *y);

issue_1353-2.c:21: error: NULL_DEREFERENCE
  pointer `y` could be null and is dereferenced at line 21, column 18.
  19.       foo();
  20.   
  21. >     printf("%d", *y);

issue_1353-2.c:21: error: USE_AFTER_FREE
  accessing memory that was invalidated by call to `free()` on line 19 indirectly during the call to `foo()()`.
  19.       foo();
  20.   
  21. >     printf("%d", *y);

issue_1353-2.c:21: error: USE_AFTER_FREE
  pointer `y` was freed by call to `foo()` at line 19, column 5 and is dereferenced or freed at line 21, column 18.
  19.       foo();
  20.   
  21. >     printf("%d", *y);


*/