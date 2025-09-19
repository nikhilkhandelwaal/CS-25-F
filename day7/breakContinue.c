#include<stdio.h>

int main() {

    for (int i = 1; i <= 10; i++) {

        if (i == 5) {
            continue;
            printf("%d\n", i);
        }
        else {
            printf("%d\n", i);
            break;
        }

    }
    //   no output     only 1     
    //                    

    return 0;
}