#include <stdio.h>

int main() {

    int a = 10;
    int b = 20;

    int* aPtr = &a;
    int* bPtr = &b;

    // *aPtr = 15;
    // *bPtr = 25;

    (*aPtr)++;

    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}

/*
    Pointers
        Varible Name, Varible Value, Varible Address

    & => Address of varible
    * => Value at that address

    *aPtr => a
    *bPtr => b

*/