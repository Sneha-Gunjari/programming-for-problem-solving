/*7. Program to check whether the entered character is digit or not using conditional operator*/

#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	(ch >= '0' && ch <= '9')?printf("A Digit"):printf("Not a Digit");
}

