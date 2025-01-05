
#include<stdio.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    if(n>0){
        printf("postive number");
    }
    else if(n<0){
        printf("negative number");
    
    }
    else{
        printf("number is zero");
    }
    
}