#include<stdio.h>
#include<conio.h>
int main()
{
int a[2][3],b[2][3],c[2][3],i,j;

printf("Enter the values of the first matrix:\n");

for(i=1;i<=2;i++)
{
    for(j=1;j<=3;j++)
    {
    printf("%d%d:\n",i,j);
    scanf("%d",&a[i][j]);
    }
}
printf("Enter the values of the second Matrix:\n");
for(i=1;i<=2;i++)
{
    for(j=1;j<=3;j++)
    {
    printf("%d%d:\n",i,j);
    scanf("%d",&b[i][j]);
    }
}
}