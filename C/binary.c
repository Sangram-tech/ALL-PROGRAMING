#include<stdio.h>
#include<math.h>
int binarytodecimal(long long binary){
    int decimal=0;
    int base=0;
    int rem;
    while (binary!=0)
    {
        rem=binary%10;
        decimal += rem * pow(2,base);
        binary/=10;
        base++;
    }
    return decimal;
    
}
void main(){
    long long binary;
    int decimal;
    printf("enter binary number::");
    scanf("%lld",&binary);
    decimal=binarytodecimal(binary);
    printf("decimal of %lld is  %d",binary,decimal);
}