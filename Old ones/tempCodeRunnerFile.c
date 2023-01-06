#include <stdio.h>
#include <conio.h>
int main()
{
int number1,number2;
char op;
printf("give to integers");
scanf("%d %d",&number1,&number2);
printf("choose any operator +/-/* ");
op=getche();
switch (op)
{
    case '+' : printf("addition is %d",number1+number2);
    break;
    case '-' : printf("subtraction is %d",number1-number2);
    break;
    case '*' : printf("multiplication is %d",number1*number2);
    break;
    default: printf("INVALID");
    return 0; 
}
}