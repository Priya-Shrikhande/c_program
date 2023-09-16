//WAP to convert the temperature Fahrenheit degree into degree celcius. 

#include<stdio.h>
int main()
{
    float degree,fah;
    printf("enter fahrenheit degree=");
    scanf("%f",&degree);
    fah=1.8*degree+32;
    printf("\n fahrenheit to celcius degrees is=%f",fah);
}