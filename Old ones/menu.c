#include<stdio.h>
int main(){
    int i,j,fact=1,num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("\n1.odd or even");
    printf("\n2.Factorial");
    printf("\nEnter Choice:");
    scanf("%d",&i);
    switch(i){
        case 1:
            if(num%2==0)
                printf("Even");
            else
                printf("odd");
            break;
        case 2:
            for(j=1;j<=num;j++)
            {    
            fact=fact*j;
            }
            printf("%d",fact);
            break;
    }
}

