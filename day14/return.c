#include <stdio.h>

int sum(int num1, int num2)
{
    return num1 + num2;

    // printf("%d\n", num1 + num2);
}

int main()
{
    int a = 10;
    int b = 20;
    int sumValue = sum(a, b);
    printf("%d\n", sumValue);

    int sum1 = sum(25, 15);
    int x = 10;
    printf("%d\n", sum1 * x);

    return 0;
}