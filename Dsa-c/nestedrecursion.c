#include<stdio.h>

void Nrecursion(int n){
    if(n>100){
        return-10;
    }
    else{
        return Nrecursion(Nrecursion(n + 11));
    }
}

void main(){
    printf("%d\n", Nrecursion(96));
    Nrecursion(96);
}
