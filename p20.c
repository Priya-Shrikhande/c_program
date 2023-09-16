//Input a four digit number from the keyboard. WAP to reverse that number. 
#include<stdio.h>
int main()
{
    int num,a,b,c,d,sum=0;
    printf("enter the number=");
    scanf("%d%d",&num);
    a=num/1000;
    b=num/100%10;
    c=num/10%10;
    d=num%10;
    sum=d*1000+c*100+b*10+a*1;
    printf("\nreverse of number is= %d",sum);
}