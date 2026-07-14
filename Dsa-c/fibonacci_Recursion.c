#include <stdio.h>

int fib(int n){

    if(n<=0)
    return n;
    return fib(n-2) + fib(n-1);
}

int main(){

    printf("%d",fib(8));
    return 0;
}