/* find biggest of 2 numbers.*/
#include <stdio.h>
int main()
{
	int x,y;
	printf("Enter two numbers:");
	scanf("%d %d",&x,&y);
	
	if (x>y)
		printf("\n%d is greater than %d.",x,y);
	else
		printf("\n%d is greater than %d.",y,x);
	
	return 0;

}


