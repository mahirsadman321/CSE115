#include<stdio.h>

int main(void)
{
    int n;

    printf("Enter value of n:");
    scanf("%d", &n);

    int count = 0;
    while(n != 0)
    {
        n = n/10;
        count = count + 1;
    }

    printf("\nNumber of digits: %d", count);

    return 0;
}
