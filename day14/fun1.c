#include <stdio.h>

void evenOdd(int a)
{
    if (a % 2 == 0)
        printf("Even Number\n");
    else
        printf("Odd Number\n");
}

int main()
{
    int num = 10;
    evenOdd(num);

    int num1 = 11;
    evenOdd(num1);

    int num2 = 23;
    evenOdd(num2);

    return 0;
}