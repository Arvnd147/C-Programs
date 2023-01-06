#include<stdio.h>
#include<conio.h>
int main()
{
int phone,tablet,laptop,sum;
phone=1;
tablet=3;
laptop=4;
sum=2;
if(sum>=4)
{
    printf("Case1\n");
    sum=sum-laptop;
    printf("Laptop, remaing space:%d,\n\n",sum);
}   
else if (/* condition */)
{
    /* code */
}

{
    sum=sum-tablet;
    printf("Tablet, remaining space:%d",sum);
    if(sum>=1)
    {
        sum=sum-phone;
        printf("\nPhone, remaining space:%d",sum);
    }
}
/*if(sum>=1)
    {
        sum=sum-phone;
        printf("\n\nPhone, remaining space:%d",sum);
    }*/
    
}