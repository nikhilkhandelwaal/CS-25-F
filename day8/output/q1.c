#include <stdio.h>
int main() {
    int i;
    for (i = 1; i <= 10; i++) {
        if (i % 3 == 0) {
            break;
        }
        if (i > 7)
            continue;
        printf("%d ", i);
    }
    return 0;
}
/*
    1,2

*/