/*.  Program to find cube of a number 
without using built-in function 
and with using built-in function*/

#include <stdio.h>
#include <math.h>
int main()
{
	int num,cube,cube2;
	printf("Enter a number:");
	scanf("%d",&num);
	
	/*without built-in function*/
	cube = num*num*num ;
	printf("cube of given number is %d",cube);
	
	/*using built-in function*/
	cube2 = pow(num,3) ;
	printf("\ncube of given number is %d",cube2);
}



