/*#include<stdio.h>
int main()
{
    int A, B, T;
    printf("Enter the value of A: ");
    scanf("%d", &A);
    
    printf("Enter the value of B: ");
    scanf("%d", &B);
    
    A=A+B;//A=30, B=20
    B=A-B;//B=10, A=30  
    A=A-B;//A=20 
    
    printf("\n The value of A: %d", A);
    printf("\n The value of B: %d", B);
}*/

#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter the value of num1: ");
    scanf("%d",&a);
    printf("Enter the value of num2: ");
    scanf("%d",&b);
    printf("\nBefore Swap:\nValue of num1:%d\nValue of num2:%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\n\nAfter Swap:\nValue of num1:%d\nValue of num2:%d",a,b);
    return 0;
}
