/*Write a C program that read 5 numbers and 
find the sum of positive numbers and negative numbers. */

#include<stdio.h>
int main()
{
    int a,b,c,d,e,count2;
    printf("\nEnter five numbers: ");
    scanf("%d %d %d % %d",&a,&d,&c,&b,&e);
    
    int count=0;
    if (a>0){count+=a;}
    if (b>0){count+=b;}
    if (c>0){count+=c;}
    if (d>0){count+=d;}
    if (e>0){count+=e;}
    printf("Sum of positive integers is %d" , count);
    
    int cout = 0;
	if (a<0){cout+=a;}
    if (b<0){cout+=b;}
    if (c<0){cout+=c;}
    if (d<0){cout+=d;}
    if (e<0){cout+=e;}
    printf("\nSum of negative integers is %d" , cout);
    
    return 0;
    
}


