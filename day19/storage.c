#include <stdio.h>

void value() {
    static int a = 10;
    a++;
    printf("%d\n", a);
}

int main() {

    value();
    value();
    value();

    return 0;
}

/*
    Storage Classess
        Auto, Static, extern, register

*/