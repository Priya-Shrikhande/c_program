#include<stdio.h>
int main()
{
    int num,temp,a,b,c,s;
    printf("enter three digit number=");
    scanf("%d",&num);
    temp=num;
    a=num/100;
    b=num/10%10;
    c=num%10;
    s=c*100+b*10+a*1;
    if(temp==s)
    {
        printf("it is a palindrome number");
    }
    else
    {
        printf("it is a not palindrome number");
    }
}