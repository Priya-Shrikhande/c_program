//WAP to print values from 1 to 5. (like loop). 
#include <stdio.h>
int main()
{
	int counter=1;
	int n; //enter the value of n (range)
	printf("Enter the value of n: ");
	scanf("%d",&n);
	START:                //define label
	printf("%d ",counter);
	counter++; //increment counter
	if(counter<=n)
		goto START;
}