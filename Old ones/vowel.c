#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("\n Enter the Character : ");
    scanf("%c",&ch);
    if(ch=='a' | ch=='e' | ch=='i' | ch=='o' | ch=='u' | ch=='A' | ch=='E' | ch=='I' | ch=='O' | ch=='U' )
    {
        printf("\n %c is an Vowel",ch);
    }
    else
    {
        printf("\n %c is not an Vowel",ch);
    }
}
