#include <stdio.h>

int Nfun(int n)
{
    if (n > 100)
    {
        return(n - 10);
    }
    else
    {
        return Nfun(Nfun(n + 11));
    }
}
int main()
{
    int num;
    num = Nfun(95);
    printf("%d\n", num);
    return 0;
}