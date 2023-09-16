#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum;
    printf("enter elemenys of matrix a=");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nmatrix a is=\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i+j==1 || i+j==3)
            {
               sum=sum+a[i][j];
            }

        }
    }
      printf("\tsum  of diamond is %d",sum);

}