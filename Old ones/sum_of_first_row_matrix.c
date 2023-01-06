#include<stdio.h>
int main()
{
    int arr[5][5];
    int i,j,temp,sum=0;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            scanf("%d",&temp);
            arr[i][j]=temp;
        }
    }
    printf("\n4x4 Matrix:");
    for(i=1;i<=4;i++)
    {
        printf("\n");
        for(j=1;j<=4;j++)
        {
            printf("\t%d",arr[i][j]);
        }
    }
    for(j=1;j<=4;j++)
    {
        sum=sum+arr[1][j];
    }
    printf("\nSum of first row elements: %d",sum);
}
