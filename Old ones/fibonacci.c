#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2,n3,i,count;
    printf("\nEnter the number of elements of the Fibonacci series to be printed:");
    scanf("%d",&count);
    n1=1;
    n2=2;
    for(i=1;i<=count;i++)
    {
        printf("\t %d\t",n1);
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }
}