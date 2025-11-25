#include <stdio.h>

void value() {
    extern int a;
    printf("%d\n", a);
}

int a = 10;

int main() {

    value();

    return 0;
}