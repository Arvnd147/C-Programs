#include<stdio.h>
int main()
{
    int i=0,j=0;
    printf("\n**** PRE INCREMENT ****");
    i=0;
    printf("\n The value of i is                  : %d",++i);
    printf("\n**** POST INCREMENT ****");
    j=0;
    printf("\n The value of j is                  : %d",j++);
    printf("\n The value of j in next statement is: %d",j);
}
