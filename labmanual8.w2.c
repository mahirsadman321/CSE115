#include<stdio.h>

int main(void)
{
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);

    int sum = 0;

    do{
        int digit = n%10;
        if(n < -10)
    {
        digit = -1 * digit;
    }
        sum += digit; //sum = sum + digit;
        n = n/10;
    }while(n!=0);

    printf("sum: %d", sum);


    return 0;
}
