#include<stdio.h>
#include<conio.h>
int main()
{
    long int number,reverse=0,remainder=0;
    printf("\n Enter the number:");
    scanf("%d",&number);
    while(number>0)
    {
        remainder=number%10;
        number=number/10;
        reverse=reverse*10+remainder;
        /*printf("\n Number:%ld",number);
        printf("\t Removed Digit:%ld",remainder);
        printf("\t Reverse:%ld",reverse);*/
    }
    printf("\nReversed number:%ld",reverse);
}