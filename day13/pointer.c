#include <stdio.h>

int main() {

    // int a = 10;
    // int* aPtr = &a;

    // *aPtr = 15;

    // (*aPtr)++;
    // printf("%d", a);

    int a = 10;
    int* aPtr = &a;
    int** aaPtr = &aPtr; // Pointer to Pointer

    printf("%d\n", a); // value of a
    printf("%u\n", &a); //address of varible a
    printf("%u\n", aPtr); //address of varible a
    printf("%d\n", *aPtr); //value of a
    printf("%u\n", &aPtr); //address of aPtr
    printf("%u\n", aaPtr); //address of aPtr
    printf("%u\n", &aaPtr); // address of aaPtr
    printf("%u\n", *aaPtr); // value of aPtr / address of a
    printf("%u\n", **aaPtr); // address of aPtr 



    return 0;
}

/*
    a => Value of varible
    &a => address of varible
    *aPtr => value of varible
    *aPtr = a
*/