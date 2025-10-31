#include <stdio.h>

int main() {

    char arr[] = { 'a','b','c','d' };

    int* arrPtr = &arr;
    printf("%u\n", arrPtr);
    printf("%u\n", &arr[0]);
    printf("%u\n", &arr[1]);
    printf("%u\n", &arr[2]);
    printf("%u\n", &arr[3]);
    printf("%u\n", &arr[4]);

    return 0;
}

/*
    Contigeous Memory Location

*/