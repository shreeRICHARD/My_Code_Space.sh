/*tylor series using Horner's rule. 
its for simplify  the tylor seris
by redusing no of multiplications */

#include<stdio.h>

int e(int x,int n)
{
    float s=1;

    for(;n>0;n--)       
    {
        s=1+x/n*s;
        printf("%f\n",s);

    }
    return s;
}
int main (){

    printf("%d\n",e(5,10));
    return 0;
}