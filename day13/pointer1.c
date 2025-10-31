#include <stdio.h>

int main() {

    int arr[] = { 10,20,30,40,50 };

    int* arrPtr = &arr;

    for (int i = 0; i < 5; i++) {
        // printf("%u\n", *(arrPtr + i));
        printf("%u\n", arrPtr);
        arrPtr++;
    }


    return 0;
}