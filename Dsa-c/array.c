#include<stdio.h>
int main(){
    int a[5],i;//declearation

    a[1]= 10; //initilation
    a[2]= 91;
    a[3]= 55;

    printf("%d\n",a[0]); 
    printf("%d\n",a[4]);
    printf("%d\n",a[3]);

    for(i=0;i<=5;i++){
        printf("a = %d\n",a[i]);
    }

}