#include <stdio.h>
int f1 (int a,int b)
{
    if (a>b)
    {
        printf("A\n");
        return 1;
    }
    else
    {
        printf("B\n");
        return 0;
    }
}
int MFCmain()
{
    if (f1(30,15) || f1(20,40))
    printf("MFC is cool!\n");
}