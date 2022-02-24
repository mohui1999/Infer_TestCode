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
    return n2->val;
}