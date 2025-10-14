#include <stdio.h>

int main() {

    int arr[10] = { 10,20,30,40,50 };
    int count = sizeof(arr) / sizeof(arr[0]);//10

    for (int i = 0; i < count - 1; i++) {
        arr[i] = arr[i + 1];
    }

    for (int i = 0; i <= count - 1; i++) {
        printf("%d\n",arr[i]);
    }


    return 0;
}
