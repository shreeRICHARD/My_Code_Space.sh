#include <stdio.h>

int Fact(int n)
{
    if (n == 0)
    {
        return 1;
    }                                       // first downwords ls multiplication aagathu instead recursion -1-1-1-1-1 nu poitu irrukum
    else
    {                                       // then comback la tha multiple aagum
        return Fact(n - 1) * n;
    }
}
int main()
{
    int r;
    r = Fact(5);
    printf("%d", r);
    return 0;
}