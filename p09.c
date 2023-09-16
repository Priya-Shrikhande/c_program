// calculate addition substraction multiplication division and modulus on 2 nums
#include<stdio.h>
int main()
{
    int a,b,add,sub,mul,div,mod;
    printf("enter 2 numbers=");
    scanf("%d%d",&a,&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;
    printf("addition is=%d",add);
    printf("\nsubstraction is=%d",sub);
    printf("\nmultiplication is is=%d",mul);
    printf("\ndivision is=%d",div);
    printf("\nmodulus is=%d",mod);
}