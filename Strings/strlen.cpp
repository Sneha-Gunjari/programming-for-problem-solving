//Program using strlen
#include<stdio.h>
#include<string.h>
int main()
{
	int len;
	char str[100];
	printf("Enter a string\n");
	gets(str);
	len = strlen(str);
	printf("\n Length of the string is %d\n",len);
	//puts(str);
	return 1;
}
