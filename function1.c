#include<stdio.h>
void add(void){
    int a=20,b=50;
    printf("Addition of 2 nos is %d",a+b);
}
void add(void);
main()
{
    add();
}
