/* c programm  to search for array elements*/

#include<stdio.h>
int main()
{
	int A[100],n,i,elements,output=0;
	printf("Enter no.of elements in the array: ");
	scanf("%d",&n);
	printf("\nEnter an array element to be search: ");
    scanf("%d",&elements);
	
	for(i=0;i<n;i++)
	{
	    printf("Enter a number:   ");
	    scanf("%d",&A[i]);
	    printf("\n");
	}
	for(i=0;i<n;i++)
	{
	    if (A[i] == elements)
	    {
	        output =1;
	        break;	
	    }
    }
	if (output==1)
	    printf("The given element %d is in the array",elements);
	else
	    printf("The given element %d is not in the array",elements);
	return 5;
}
