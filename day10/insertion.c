#include <stdio.h>

int main() {

    int arr[10] = { 10,20,30,40,50,60,70 };
    int count = sizeof(arr) / sizeof(arr[0]);

    // Insert a number at zero index
    // for (int i = count - 1; i >= 0; i--) {
    //     arr[i + 1] = arr[i];
    // }
    // arr[0] = 5;


    // Insert a number at Last index
    // arr[count - 1] = 5;

    // Insert a number at Specific index
    int index = 5;
    for (int i = count - 1; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[5] = 55;

    for (int i = 0; i < count; i++) {
        printf("%d\n", arr[i]);
    }

    // Deletion at zero index
    // Deletion at Last index
    // Deletion at Specific index

    return 0;
}