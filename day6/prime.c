#include<stdio.h>

int main() {

    int number, primeStatus = 1;
    printf("Enter your number: ");
    scanf("%d", &number); // 23

    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            primeStatus = 0;
        }

    }

    // if (primeStatus == 1) {
    //     printf("It is Prime number");
    // }
    // else {
    //     printf("It is not Prime number");
    // }


    return 0;
}