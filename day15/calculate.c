#include <stdio.h>

// Function decleration / Function Prototype
void calculate(int num1, int num2, int* sum, int* subs);


int main() {

    int a = 10;
    int b = 20;
    int sum, subs, product, div;

    // Function calling
    calculate(a, b, &sum, &subs);

    printf("%d\n", sum);
    printf("%d\n", subs);


    return 0;
}


// Function  defination
void calculate(int num1, int num2, int* sum, int* subs) {
    *sum = num1 + num2;
    *subs = num1 - num2;
}


/*
    Pass by ref
        - Multiple value return
        - Memory Saving

    a=10
    b=20
    c=30

    a=30
    b=10
    c=20



*/