#include<stdio.h>
int main()
{
    int i=0;
    start: i=i+1;
          printf("\n %d",i);
      if(i<5)
         goto start;    
}