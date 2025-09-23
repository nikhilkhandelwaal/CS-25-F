#include <stdio.h>
int main() {
    int i, j = 0;
    for (i = 1; i <= 5; i++) {
        j += i;
        if (j > 10)
            continue;
        if (i % 2 == 0)
            break;
        printf("%d ", j);
    }
    return 0;
}

/*
   1   1,3   10    1,0    
*/