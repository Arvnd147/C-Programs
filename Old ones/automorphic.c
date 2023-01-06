#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int num, sqr,temp,last,sum=0,r;
    int n=0;
    printf("Enter the number:");
    scanf("%d",&num);
    sqr=num*num;
    temp=num;
    while(temp>0){
        n++;
        temp=temp/10;
    }
    int den = floor(pow(10,n));
    last = sqr % den;
    if (last == num){
        printf("%d is an Automorphic number",num);
        while(num>0){
            r=num%10;
            sum=sum+r;
            num=num/10;
        }
        printf("\nSum of digits : %d",sum);
    }
    else
        printf("%d is not an Automorphic number",num);
    return 0;
}