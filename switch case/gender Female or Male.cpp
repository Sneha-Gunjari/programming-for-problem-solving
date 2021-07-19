/* Write a C program, which takes a character  (F or M) from the user and 
prints the Gender as Male or Female  */
#include <stdio.h>
int main()
{
    char gender;
    printf("Enter your gender(M/F):");
    scanf("%s" ,&gender);
    switch(gender)
    {
        case 'F': printf("\nYou are a Female");
        break;
        case 'M' : printf("\nYou are a male");
        break;
        default :printf("Enter correct character");
    }
    return 0;
}

