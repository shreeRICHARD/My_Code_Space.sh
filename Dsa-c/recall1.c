#include <stdio.h>

void main()
{

    int breadth = 0, length = 0;

    printf("Enter the breadth :");
    scanf("%d,", &breadth);
    
    printf("Enter the length :");
    scanf("%d,", &length);

    int area = length * breadth;
    int peri = 2 * (length + breadth);

    printf("Area=%d,perimeter=%d", area, peri);
}