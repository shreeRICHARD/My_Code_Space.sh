#include <stdio.h>

int main()
{
    int A[5]={1,2,4,5,7};
    int *p;
    p=A; //dont use & when useing array+pointers

    printf("%d\n",*(p));

    
    


}