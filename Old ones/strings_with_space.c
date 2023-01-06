#include<stdio.h>
int main()
{
    char s[50];
    printf("\nEnter a sentence:");
    scanf("%[^\n]%",s);
    printf("\nThe sentence you have typed is:\n%s",s);
}
