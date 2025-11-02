#include<stdio.h>

int main(void)
{
    int n;

    printf("Enter the number:");
    scanf("%d", &n);

    int i=0;
    do
    {
        printf(" %d", i);
        i++;
    }while(i <= n);

    return 0;
}
