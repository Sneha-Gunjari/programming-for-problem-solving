//To find whether a number is even or odd using bitwise operators.

#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	if(num&1)
	printf("Number is odd");
	else 
	printf("Number is even");
	
	return 0;
}

