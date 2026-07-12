#include <stdio.h>

int rec(int n)
{
    int i;
    for (i = 0; n > i; i++)
    {
        printf("%d \n", n);
        rec(n + 1);
        return 0;
    }
}
int main()
{
    int r;
    r = rec(3);
    return r;
}