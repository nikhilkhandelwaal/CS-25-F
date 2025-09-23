#include <stdio.h>
int main() {
    int i = 5;
    while (i > 0) {
        printf("%d ", i--);
        if (i == 2) {
            i--;
            continue;
        }
    }
    return 0;
}
/*
    543
    i=0

    5431    

*/