#include<stdio.h>
#include<conio.h>
int main()
{
long int a[5],i;
long int *p;	// p is declared as pointer and hence it can accept only memory address as input
p=&a[0];
for(i=0;i<5;i++)
{
printf("\na[%d]=",i);
scanf("%ld",&a[i]);
}
for(i=0;i<5;i++)
{
printf("\na[%ld] memory address =%x",i,p);
p=p+1;               //points to next memory address
}
}