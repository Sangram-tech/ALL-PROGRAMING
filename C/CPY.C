#include<stdio.h>
int main(){
    int a,b;
    printf("enter two numbers::");
    scanf("%d,%d",&a,&b);

}
int swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    
}
