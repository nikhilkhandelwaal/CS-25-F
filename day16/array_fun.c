#include <stdio.h>

// function deceration, function prototype
void arraySum(int* arrAdd, int count);


int main() {

    // int a = 10;
    // int arr[] = { 10,20,30,40,50 };

    // printf("%d\n", a);
    // printf("%p\n", arr);
    // printf("%p\n", &arr[0]);

    int arr[] = { 10,20,30,40,50 };
    int count = sizeof(arr) / sizeof(arr[0]);
    arraySum(arr, count); // FUnction calling

    return 0;
}

// function defination
void arraySum(int* arrAdd, int count) {

    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += *(arrAdd + i);
        // 0 + *(1000+0) => 10
        // 10+ *(1000+1) => 10+*(1004) => 30
        // 30+ *(1000+2) => 10+*(1008) => 60
    }
    printf("%d\n", sum);
}
