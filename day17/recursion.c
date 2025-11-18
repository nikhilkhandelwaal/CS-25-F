#include <stdio.h>

int fact(int num1) {
    // int factValue = 1;
    // for (int i = 1; i <= num1; i++) {
    //     factValue *= i;
    // }
    // return factValue;

    if (num1 == 0) return 1;

    return num1 * fact(num1 - 1);
    
    // 5*fact(5-1) => 5*fact(4) => 5*24 => 120
    // 4*fact(4-1) => 4*fact(3) => 4*6 => 24
    // 3*fact(3-1) => 3*fact(2) => 3*2 => 6
    // 2*fact(2-1) => 2*fact(1) => 2*1 => 2
    // 1*fact(1-1) => 1*fact(0) => 1*1 => 1
}


int main() {

    int a = 5;
    int factValue = fact(a);

    printf("%d\n", factValue);


    return 0;
}

/*
    !5 => 5*!4
    !4 => 4*!3
    !3 => 3*!2
    !2 => 2*!1
    !1 => 1

*/