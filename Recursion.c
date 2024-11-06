#include <stdio.h>
// void display(int n)
// {
//     if(n<1)
//     {
//     return;
//     }
// else;
// {
// printf("%d",n);
// display(n-1);  // 2 , 1
// printf("%d",n);
// }
// }
// void main()
// {
//     int n=3;
//     display(n);
// }
//  factorial of a number
// int factorial(int x)
// {
//     if (x == 0)   // base condition
//     {
//         return 1;
//     }
//     else
//     {
//         return x * factorial(x - 1);
//     }
// }
// int main()
// {
//     int num, fact;
//     printf("\n Enter any non negative number : ");
//     scanf("%d", &num);
//     if (num < 0)
//     {
//         printf("Factorials are not defines for negative numbers.");
//     }
//     else
//     {
//         fact = factorial(num);
//         printf("\n Factorial of %d is %d", num, fact);
//         return 0;
//     }
// }
// sum of two numbers
// int sum(int a, int b)
// {
//     if (b == 0)
//     {
//         return a;
//     }
//     else
//     {
//         return 1 + sum(a, b - 1);
//     }
// }
// int main()
// {
//     int num1, num2;
//     printf("\n Enter number one = ");
//     scanf("%d", &num1);

//     printf("\n Enter number two = ");
//     scanf("%d", &num2);

//     int result = sum(num1, num2);
//     printf("\n Sum of %d and %d is %d \n ", num1, num2, result);

//     return 0;
// }

 // fibonnaci series
int fibonnaci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonnaci(n - 1) + fibonnaci(n - 2);
    }
}
int main()
{
    int num;
    printf("\n Enter number of terms = ");
    scanf("%d", &num);

    printf("Fibonnaci Series: ");

    for (int i = 0; i < num; i++)
    {
        printf("\n \t %d", fibonnaci(i));
        printf("\n");
    }
    // printf("\n");

    return 0;
}
  



