#include<stdio.h>
int main()
{
    int n,a[n],i,j,k,temp;
    printf("Enter the size if the array:");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(k=0;k<=n;k++)
    {
        scanf("%d\n",&a[k]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];	
                a[i]=a[j];	
                a[j]=temp;	
            }    
        }
    }
    printf("Largest:%d\n",a[0]);
    printf("smallest:%d",n);
}
