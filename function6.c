#include<stdio.h>
void fact1(int);
void fact2();
int fact3(int);
int fact4();
int main()
{
    int num,factorial;
    printf("enter number=");
    scanf("%d",&num);   
    fact1(num);
    fact2();
    //printf("factorial of number is %d",factorial); 
    factorial=fact3(num); 
    /* factorial=fact4(); 
    printf("factorial of number is %d",factorial); */
}
void fact1(int n)
{
    int i,fa=1;
   /*  printf("enter the num=");
    scanf("%d",&n);  */
    for(i=1;i<=n;i++)
    {
        fa=fa*i;
    }
    printf("\nfactorial is %d",fa);
}
void fact2()
{
    int i,fa=1,n;
     printf("\nenter the num=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fa=fa*i;
    }
    printf("\nfactorial is %d",fa);
}
int fact3(int n)
{
    int i,fa=1;
    /* printf("\nenter the num=");
    scanf("%d",&n);  */
    for(i=1;i<=n;i++)
    {
        fa=fa*i;
    }
    //printf("factorial is %d",fa);
    return fa;
}
int fact4()
{
    int i,fa=1,n;
    printf("\nenter the num=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fa=fa*i;
    }
    //printf("factorial is %d",fa);
    return fa;
}