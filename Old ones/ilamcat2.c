#include<stdio.h>
#include<string.h>
struct EnginePart{
    char PartID[20];
    int year;
    int quantity;
}x = {"AAA",1111,0};
struct stock{
    char id[20];
    int q;
}s[100];
int i = 0 ;
void dispatch(struct EnginePart x);
int main(){
    char s[20];
    while (1){
        printf("Enter part ID:");
        scanf("%s",s);
        strcpy(x.PartID, s);
        printf("Enter the quantity:");
        scanf("%d",&x.quantity);
        dispatch(x);
    }
}
void dispatch(struct EnginePart x){
    strcpy(s[i].id,x.PartID);
    s[i].q = x.quantity;
    for (int j=0;j<=i;j++){
        printf("\nid :%s\n",s[j].id);
        printf("quantity:%d\n",s[j].q);
    }i++;
}