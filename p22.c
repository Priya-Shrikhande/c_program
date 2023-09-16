// WAP to calculate the perimeter of the rectangle.(2*(l+b)).
#include<stdio.h>
int main()
{
    int perimeter,l,b;
    printf("enter length and breadth of rectangle=");
    scanf("%d%d",&l,&b);
    perimeter=2*(l+b);
    printf("perimeter of rectangle is =%d",perimeter);
}