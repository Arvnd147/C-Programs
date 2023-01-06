#include<stdio.h>
#include<conio.h>
int main()
{
    int number,count=0;
    printf("\n Enter the Number : ");
    scanf("%d",&number);
    while(number>0)
    {
        number=number/10;
        count++;
    }
    printf("\n The Number of Digits is : %d",count);
}
