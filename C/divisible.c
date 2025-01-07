//wap to find the sum of all integer divisible by 3 and 5 in a given range using loop
#include<stdio.h>
int main(){
    int n, sum=0;
    printf("enter number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%3==0 && i%5==0){
             sum+=i;
        }
    
    }
    printf("divisible by 3&5:%d",sum);
}