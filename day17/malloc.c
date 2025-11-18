#include <stdio.h>
#include<stdlib.h>

int main() {

    // int arr[10]; // Static Memoery Allocation 
    int* arr;
    arr = (int*)malloc(5 * sizeof(int));

    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;
    // arr[3] = 40;
    // arr[4] = 50;

    for (int i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);
    }

    free(arr);

    return 0;
}

/*
    Dynamic Memory Allocation
        malloc
        calloc
        free
        realloc


*/