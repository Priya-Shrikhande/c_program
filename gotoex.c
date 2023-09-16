#include<stdio.h>
int main()
{
    p1: printf("\nHello");
        goto p3;
    p2: printf("\nSee you");
        goto p1;
    p3: printf("\nBye");

    End: printf("\n End");
}