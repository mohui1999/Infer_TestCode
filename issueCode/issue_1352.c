#include <stdlib.h>
#include <stdio.h>

typedef struct node
{
    int val;
    struct node *next;
} Node;

Node *create()
{
    return (Node *)malloc(sizeof(Node));
}

void myfree(Node **n)
{
    free(*n);
    *n = NULL;
}

int main()
{
    Node *n1, *n2;
    int x, i = 0;
    printf("输入x=");
    scanf("%d", &x);

    n1 = create();
    n1->val = 10;

    while (x > 10)
    {
        i++;
        if (i % 2 == 0)
            x += i;
        else
            x -= i;

        if (x % 2 == 0)
            n2 = n1;
    }

    myfree(&n1);
    printf("%d",n2->val);
    return n2->val;
}


/*

Found 7 issues

issue_1352.c:43: error: DANGLING_POINTER_DEREFERENCE
  uninitialized pointer `n2` could be dangling and is dereferenced or freed at line 43, column 12.
  41.   
  42.       myfree(&n1);
  43. >     return n2->val;

issue_1352.c:21: error: INFINITE_EXECUTION_TIME
  The Execution Cost of the function main cannot be computed.
  19.   }
  20.   
  21. > int main()
  22.   {
  23.       Node *n1, *n2;

issue_1352.c:32: error: INTEGER_OVERFLOW_L5
  ([0, +oo] + 1):signed32.
  30.       while (x > 10)
  31.       {
  32. >         i++;
  33.           if (i % 2 == 0)
  34.               x += i;

issue_1352.c:34: error: INTEGER_OVERFLOW_L5
  ([11, +oo] + [1, +oo]):signed32.
  32.           i++;
  33.           if (i % 2 == 0)
  34. >             x += i;
  35.           else
  36.               x -= i;

issue_1352.c:43: error: MEMORY_LEAK
  memory dynamically allocated by call to `create()` at line 27, column 10 is not reachable after line 43, column 5.
  41.   
  42.       myfree(&n1);
  43. >     return n2->val;

issue_1352.c:28: error: NULL_DEREFERENCE
  pointer `n1` last assigned on line 27 could be null and is dereferenced at line 28, column 5.
  26.   
  27.       n1 = create();
  28. >     n1->val = 10;
  29.   
  30.       while (x > 10)

issue_1352.c:43: error: USE_AFTER_FREE
  accessing memory that was invalidated by call to `free()` on line 42 indirectly during the call to `myfree()()`.
  41.   
  42.       myfree(&n1);
  43. >     return n2->val;

*/