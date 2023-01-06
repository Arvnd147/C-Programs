#include<stdio.h>
int main()
{
    char name[20];
    int units;
    float bill;
    scanf("%s",&name);
    scanf("%d",&units);
    bill = 100;
    if (units >0 && units<200)
        bill = bill + (units*0.7);
    else if (units>200 && units<300)
        bill = bill + (200*0.7) + ((units-200)*0.8);
    else if (units>300)
        bill = bill + (200*0.7) + (100*0.8) + ((units-300)*2);

    if (bill>400)
        bill = bill + (20/100 * bill);

    printf("%f",bill);
    return 0;
}