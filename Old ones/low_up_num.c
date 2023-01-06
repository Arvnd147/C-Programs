#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    int ascii;
    printf("\n Press any key :");
    scanf("%c",&ch);
    ascii=ch;
    if((ascii>=48) && (ascii<=57))
    {
        printf("\n The Key Pressed is an Number");
    }
    else if((ascii>=65) && (ascii<=90))
    {
        printf("\n The Key Pressed is an Upper Case");
    }
    else if((ascii>=97) && (ascii<=122))
    {
        printf("\n The Key Pressed is an Lower Case");
    }
    else
    {
        printf("\n The Key Pressed is an Symbol");
    }
}