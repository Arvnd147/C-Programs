#include <stdio.h>
int main()
{
    char c;
    int choice=0;
    ascii:
    printf("\nEnter a character:");
    scanf("%c",&c);
    printf("\nThe ASCII value of %c is: %d",c,c);
    printf("\nEnter 1 to check again: ");
    scanf("%d",&choice);
    if(choice==1)
    {
        goto ascii;
    }  
}