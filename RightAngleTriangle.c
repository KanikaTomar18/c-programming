#include<stdio.h>

void printPattern(int n);

int main()
{
    int n = 5;
    printPattern(n);
    return 0;
}

void printPattern(int n)
{
    int i , j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j == 1 || i == j || i == n)
                printf(" * ");
            else
                printf("  ");
        }
        printf("\n");
    }
}