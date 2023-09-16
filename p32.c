//A student appear in examination of five papers each paper contains 50 marks calculate total and 
//percentage of student and display the grades according to the following condition. 
//Percentage Grade >=90 A+ 80 to 89 A 70 to 79 B+ 60 to 69 B 50 to 59 C 40 to 49 Fail.
#include<stdio.h>
int main()
{
    int sci,math,phy,chem,bio,total,per;
    printf("enter marks of science out of 50=");
    scanf("%d",&sci);
    printf("\nenter marks of maths out of 50=");
    scanf("%d",&math);
    printf("\nenter marks of physics out of 50=");
    scanf("%d",&phy);
    printf("\nenter marks of chemistry out of 50=");
    scanf("%d",&chem);
    printf("\nenter marks of biology out of 50=");
    scanf("%d",&bio);
    total=sci+math+phy+chem+bio;
    printf("\nthe total of subjects is= %d",total);
    per=total/5;
    printf("\npercentage is %d",per);
    if(per>=90)
    {
        printf("\ngrade is A+");
    }
    else if(per>80 && per<89)
    {
         printf("\ngrade is A");
    }
    else if(per>70 && per<79)
    {
         printf("\ngrade is B+");
    }
    else if(per>60 && per<69)
    {
         printf("\ngrade is B");
    }
    else if(per>50 && per<59)
    {
         printf("\ngrade is C+");
    }
    else
    {
        printf("FAIL");
    }

}
