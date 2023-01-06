#include<stdio.h>
void merge(int a[],int i ,int j){
    int mid;
    if(i>j){
        mid=i+j/2;
        printf("\ni=%d\tj=%dmid=%d",i,j,mid);
        mergesort(a,i,mid);      //left recursion
        mergesort(a,mid+1,j);    //right recursion
        merge(a,i,mid,mid+1,j);  //merging two sorted arrays        
    }
}
void merge(int a[],int i1,int j1, int i2, int j2){
    
}