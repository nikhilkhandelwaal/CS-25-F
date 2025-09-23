#include <stdio.h>
int main() {
    int n = 2;
    do {
        if (n % 2 == 1 && n < 5)
            printf("%d ", n);
        else if (n % 2 == 0)
            printf("X ");
        n++;
    } while (n <= 6);
    return 0;
}

/*
    1X3X5X
    12345X
    1234X


*/