#include<stdio.h>
#include<math.h>
int main(){
    int num,dozens,extras;
    float bill;
    printf("Enter the number of eggs:");
    scanf("%d",&num);
    dozens = floor(num/12);
    extras = num%12;
    if (dozens>0 && dozens<4){
        bill = dozens * 55.50;
        extras = extras * (55.50/12);
        bill = bill + extras;
    }
    else if (dozens>=4 && dozens<6){
        bill = dozens * 54.45;
        extras = extras * (54.45/12);
        bill = bill + extras;
    }
    else if (dozens>=6 && dozens<11){
        bill = dozens * 54.15;
        extras = extras * (54.15/12);
        bill = bill + extras;
    }
    else if (dozens>=11){
        bill = dozens * 54.05;
        extras = extras * (54.05/12);
        bill = bill + extras;
    }
    printf("Bill:%.2f",bill);
    return 0;
}