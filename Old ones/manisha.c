#include<stdio.h>
int main(){
    float p;
    char id[10];
    char name[20];
    gets(id);
    gets(name);
    scanf("%f",&p);
    printf("%0.2f",p);
}