/*program using strncat*/

#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	int n;
	
	printf("Enter a string:\n");
	gets(str1);
	printf("Enter another string:\n");
	gets(str2);
	printf("Enter n\n");
	scanf("%d",&n);
	printf("\nBefore appending n character :str1=");
    puts(str1);
	
	strncat(str1,str2,n);
	
	printf("\n After appending n character :str1=");
	puts(str1);
	return 0;
}


