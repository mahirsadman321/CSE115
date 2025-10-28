#include<stdio.h>

void printNum(int limit);

int main(void)
{
   int limit;
   printf("Enter limit value:");
   scanf("%d", &limit);

   printNum(limit);

    return 0;
}
void printNum(int limit)
{
    int i = 1;
    /*do
    {
            printf(" %d", i);
            i = i + 1; // i = ++;

    }while(i <= limit);*/
    while(i <= limit)
    {
        printf(" %d", i);
        i++; //i = i + 1;
    }
}
