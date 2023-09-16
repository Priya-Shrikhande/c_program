#include<stdio.h>
void fact(int);
void prime(int);
void armstrong(int);
main()
{
    int num;
    /* printf("enter the number=");
    scanf("%d",&num); */
    fact(num);
    prime(num);
    armstrong(num);
}
void fact(int num1)
{
    int fact=1,i;
    printf("enter the number to calculate its factorial=");
    scanf("%d",&num1); 
    for(i=1;i<=num1;i++)
    {
        fact=fact*i;
    }
    printf("factorial of %d is=%d",num1,fact);
}
void prime(int num2)
{
    int c=0,j;
    printf("\nenter the number to check if it is prime number*=");
    scanf("%d",&num2); 
    for(j=2;j<=num2;j++)
    {
        if(num2%j==0)
        {
            c++;
        }
    }
    if(c==1)
    {
        printf("%d is a prime no",num2);
    }
    else{
        printf("%d is not a prime no",num2);
    }
    
}
void armstrong(int num3)
{
    int sum=0,temp,r,cube;
     printf("\nenter number to check the armstrong number=");
    scanf("%d",&num3); 
    temp=num3;
    while(num3!=0)
    {
        r=num3%10;
        cube=r*r*r;
        sum=sum+cube;
        num3=num3/10;
    }
    if(temp==sum)
    {
        printf("%d is a armstrong number",temp);
    }
    else{
        printf("%d is not a  armstrong number",temp);
    }

} 