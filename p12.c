// WAP to calculate the surface of the cylinder.(2*pi*r*h) 
#include<stdio.h>
int main()
{
    float surface,r,h,pi=3.14;
    printf("enter the radius and height of cylinder=");
    scanf("%f%f",&r,&h);
    surface=2*pi*r*h;
    printf("surface of cylinder is =%f",surface);
}