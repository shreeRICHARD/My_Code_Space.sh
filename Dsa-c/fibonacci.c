#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, c, i;

    printf("Enter no of terms :");
    scanf("%d", &n);

    if (n >= 0)
    {
        printf("%d", a);
        if (n >= 1)
        {
            printf("%d", b);
            for (i = 3; i < n; i++)
            {
                c=a+b;
                printf("%d",c);

                a=b;
                b=c;
            }
        }
    }
}