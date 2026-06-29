#include <stdio.h>
void functionB(int n);

void functionA(int n)
{
    if (n > 0)
    {
        printf("%d\n",n);
        functionB(n - 1);
    }
}

void functionB(int n)
{
    if (n > 1)
    {
        printf("%d\n\n", n);
        functionA(n / 2);
    }
}

void main()
{
    functionA(20);

}