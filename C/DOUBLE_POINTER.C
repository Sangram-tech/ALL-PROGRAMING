#include<stdio.h>
int main(){
    int a=15;
    int *p;
    int **pp;int ***ppp;
    p=&a;
    pp=&p;
    ppp= &pp;
    printf("value of a:%d",a);
    printf("value of a using single pointer:%d\n",*p);
    printf("value of a using double pointer:%d\n",**pp);
    printf("value of a using triple pointer:%d\n",***ppp);

}