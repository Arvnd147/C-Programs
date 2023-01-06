#include<stdio.h>
#include<conio.h>
int main()
{
    long int number,actual,cube=0,remainder=0;
    printf("\n Enter the Number : ");
    scanf("%ld",&number);
    actual=number;
    while(number>0)
    {
        remainder=number % 10; //Getting the Last Digit
        number=number / 10; //Reducing the Number by 1 digit
        cube=cube+(remainder*remainder*remainder);
        printf("\n Number = %ld",number);
        printf("\t Remainder = %ld",remainder);
        printf("\t Cube = %ld",cube);
}
    if(actual==cube)
    {
        printf("\n %ld is an Amstrong Number",actual);
    }
    else
    {
        printf("\n %ld is not an Amstrong Number",actual);
    }
}