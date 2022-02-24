#include<stdio.h>

int getNum(){
    int i = 10;
    return i;
}

int main(){
    int parent;
    int x=1;
    while (x<10)
    {
        parent = getNum();
        x++;
    }
    if (parent)
    {
        printf("get");
    }
    
    return 0;
}