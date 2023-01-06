/*#include <stdio.h>
#include <string.h>

int main () {

   char str1[50] = "This is a Test string";
   char str2[50] = " Welcome to C programming";
   char new[50];
   int  len ;


   strcpy(new, str1);
   strcat( new, str2);
   len = strlen(new);
   printf("\n%d", len );
   strupr(new);
   printf("\n%s",new);
   return 0;
}*/

#include<stdio.h>
#include<string.h>
int minimum_age(int arr[n],int n)
int main()
{
    int n;
    printf("enter the number of cricket player:");
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    } 
    print("Minimum age is %d",minimum_age(arr,n));  
}
int minimum_age(int arr[],int n)
{
    int min;
    for (int i = 0; i < length; i++) 
    {         
       if(arr[i] < min)    
       min = arr[i];
    }
    return min;
}