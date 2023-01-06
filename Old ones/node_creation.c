#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = 0;
void insert();
void display();
void main()
{
    insert();
}
void insert()
{
    int item;
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node *));
    printf("\nptr=%x",ptr);
    printf("\nhead=%x",head);
    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter Value\n");
        scanf("%d",&item); 
        /*printf("head:%x\t",head);
        printf("ptr:%x\t",ptr);
        printf("data:%d",item);*/ 
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\nptr->data=%d",ptr->data);
        printf("\nptr->head=%x",ptr->next);
        printf("\nNode inserted.");
    }
}