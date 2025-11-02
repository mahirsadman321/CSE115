#include<stdio.h>

void printEven(int m, int n);

int main(void)
{
    int m, n;
    printf("Enter value for M & N:");
    scanf("%d%d", &m, &n);

    printEven(m,n);

    return 0;
}


void printEven(int m, int n)
{
    for(int i=n; i>=m; i--)
    {

        if(i%2 == 0)
        {
            printf(" %d", i);
        }
    }

}
