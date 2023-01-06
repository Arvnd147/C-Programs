#include<stdio.h>
int sum(int n);
int prod(int n);
int main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    if (sum(num)==prod(num))
        printf("Yes");
    else
        printf("No");
}
int sum(int n){
    int sum1=0;
    if (n==0)
        return 0;
    else
        sum1 = (n%10) + sum(n/10);
    return sum1;
}
int prod(int n){
    int product=1;
    if (n==0)
        return 1;
    else
        product = (n%10) * prod(n/10);
}