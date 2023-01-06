#include<stdio.h>

int main()
{
    int arr[3][4][3];
    int floor,item,supplier;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            for(int k=0;k<3;k++)
            {
                *(*(*(arr+i)+j)+k) = 0;
            }
        }
    }

    while (1)
    {
        printf("\n\nfloor(1,2,3):");
        scanf("%d",&floor);
        printf("item(1,2,3,4):");
        scanf("%d",&item);
        printf("supplier(1,2,3):");
        scanf("%d",&supplier);
        *(*(*(arr+(floor-1))+(item-1))+(supplier-1))+=1;
        printf("\nItem Table");
        printf("\nFloor Item Supplier Nos");
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<4;j++)
            {
                for(int k=0;k<3;k++)
                {
                    printf("\n  %d    %d       %d   : %d",i+1,j+1,k+1,*(*(*(arr+i)+j)+k));
                }
            }
        }
    }
}