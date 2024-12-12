#include<stdio.h>
#include<math.h>
int countdigits(int number){
    int count=0;
    while ((number!=0))
    {
        number=number/10;
        count++;
    }
    return count;

    int calculatesum(int number,int count){
int sum;
int temp=number;
 while (temp!=0)
{

    int digit=temp%10;
    sum+=pow(digit,count);
    temp/=10;
}
return sum;

    }
    int main(){
        int number;
    
        printf("enter number:");
        scanf("%d",&number);
    }
    int numberofdigits;
    int numbrerofdigits=countdigits(number);
    int sum=calculatesum(number,numbrerofdigits);
    if(number==sum){
        printf("armng strong");
        
    }
    else{
        printf("not armngstrong");
    }
    return 0;
}