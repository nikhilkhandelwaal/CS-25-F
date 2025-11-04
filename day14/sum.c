#include <stdio.h>

void sum(int a, int b) // a & b called as a parameter
{
    printf("%d\n", a + b);
}

int main()
{

    int num1 = 10;
    int num2 = 20;
    sum(num1, num2); // num1 and num2 called argument
    sum(15, 25); // 15 & 25 called argument
    sum(30, 35); //// 30 & 35 called argument

    return 0;
}