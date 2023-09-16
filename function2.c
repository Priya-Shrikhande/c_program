#include<stdio.h>
void add(int,int);
main()
{
    int a,b,c,d;
    printf("enter 4 nos=");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    add(a,c);
    add(a,d);
    add(c,d);
    add(b,c);
}
void add(int x,int y)
{
    printf("\nsum is %d",x+y);
}
