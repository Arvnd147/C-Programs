#include <stdio.h>
void reverse_odd(int arr[], int size)
{
    static int i,j=0,result=0;
    int m,ten=1;

    if (i == size) {
        i = 0;
        printf("%d",result);
        return;
    }

    if(arr[i]%2 !=0){
        for(m=1;m<=j;m++){ten = ten*10;}
        result = result + ten*arr[i];
        j++;
    }
    i++;

    reverse_odd(arr, size);
}
int main(){
  
    int arr[] = {7,3,2,4,1,5,2};
    int n = sizeof(arr) / sizeof(arr[0]);
  
    reverse_odd(arr, n);
  
    return 0;
}