/*#include<stdio.h>
int main()
{
    char s1[7] = "1234",*p;
    p=s1+2;
    *p='0';
    printf("%s",s1);
}*/
//1204

#include<stdio.h>

void fun1(char *s1,char *s2)
{
    char *temp;
    temp = s1;
    s1=s2;
    s2=temp;
}

void fun2(char **s1,char **s2)
{
   char *temp;
    temp = *s1;
    *s1=*s2;
    *s2=temp; 
}
int main()
{
    char *str1 = "Hi", *str2 = "Bye";
    fun1(str1,str2);printf("%s %s", str1, str2);
    fun2(&str1,&str2);printf("%s %s", str1, str2);
    return 0;
}

//Hi ByeBye Hi