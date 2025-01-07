//wap to create an array of pointer to string and print the address and string.
#include<stdio.h>
int main(){
    char *str[]={"apple","banana","mango","orange"};
    char **ptr=str;
    for(int i=0;i<4;i++){
        printf("address of %s is %d\n",*ptr,*ptr);
        ptr++;
    }
}