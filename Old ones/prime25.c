#include<stdio.h>
int main()
{
    int i,j,flag=0;
    printf("\nPrime Numbers:");
    for(i=1;i<=1000000;i++)
    {
        flag=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
             flag++; 
            }
        }
        if(flag==2)
        {
            printf("%d\n",i);
        }
    }
}
