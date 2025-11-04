#include <stdio.h>

// Function Definations
void printHello()
{
    printf("Hello World!\n");
}

void hello()
{
    printf("Welcome to NCU\n");
    printHello();
}

int main()
{
    printf("Hello Everyone\n");
    printHello(); // function calling
    hello();
    printf("Bye Everyone\n");

    return 0;
}

/*
    function => set of intructions, or set of codes
            Reusable
            take input from user and return the output

*/