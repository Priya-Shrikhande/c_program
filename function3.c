#include<stdio.h>
int add(void);
main()
{
    //int ans;
    
    printf("ans is %d",add());
    printf("ans is %d",add());
    printf("ans is %d",add());
}
int add(void)
{
    int a,b;
    printf("\nenter 2 nos=");
    //int a=10,b=40,c;
    scanf("%d%d",&a,&b);
    //int c=a+b;
    return a+b;
}