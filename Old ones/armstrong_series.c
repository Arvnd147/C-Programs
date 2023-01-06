#include <stdio.h>
int main()
{
    long int i,remainder,cube,number;
    long int min,max;

    printf("\nStarting Number  : ");
    scanf("%ld",&min);

    printf("\nEnding Number    : ");
    scanf("%ld",&max);

    printf("\nArmstrong numbers: ");
    for(i=min;i<=max;i++)
    {
         number=i;
         cube=0;

         while(number>0)
         {
             remainder=number % 10;
             number=number/10;
             cube=cube+(remainder*remainder*remainder);
         }
         if(cube==i)
             printf("\t%ld",i);
    }
}