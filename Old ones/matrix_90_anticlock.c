#include<stdio.h>
int main()
{
    int a[4][4],i,j;
    printf("Enter the values of the matrix:\n" );
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf("%d%d:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nINPUT MATRIX:\n");
    for(i=1;i<=3;i++)
    {
        printf("\n");
        for(j=1;j<=3;j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
    printf("\nOUTPUT MATRIX:\n");
    for(i=3;i>=1;i--)
    {
        printf("\n");
        for(j=1;j<=3;j++)
        {
            printf("%d\t",a[j][i]);
        }
    } //made by Aravind S (21CGB1063)    
}
