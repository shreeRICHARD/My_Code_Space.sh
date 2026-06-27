#include<stdio.h>


void swap(int *x ,int *y)
{
    int ver = *x;
    *x=*y;
    *y=ver;
     
}

int main()//call by value &call by referance

{
    int a=5;
    int b=10;


    printf("a=%d,b=%d \n",a,b);

    swap(&a,&b);

    printf("a=%d,b=%d",a,b);

    return 0;
}