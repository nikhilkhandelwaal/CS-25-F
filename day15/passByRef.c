#include <stdio.h>

void val(int* num1) {
    // printf("%d\n", *num1);
    *num1 = 20;
}

int main() {

    int a = 10;
    // printf("%u\n", &a);
    printf("Before pass by ref: %d\n", a);
    val(&a);
    printf("After pass by ref: %d\n", a);

    return 0;
}