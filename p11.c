/* Ramesh’s basic salary is input through the keyboard his DA is 40% of the basic salary 
and H.R.A is 25%, P .F=20% and TA is 30% of the basic salary.WAP to calculate the gross 
salary and net salary. */

#include<stdio.h>
int main()
{
    int bs,da,hra,pf,ta,gs,ns;
    printf("enter the basic salary=");
    scanf("%d",&bs);
    da=0.4*bs;
    hra=0.25*bs;
    ta=0.3*bs;
    pf=0.2*bs;
    gs=bs+da+hra+ta;
    ns=gs-pf;
    printf("the gross salary is = %d",gs);
    printf("\nnet salary is = %d",ns);
}