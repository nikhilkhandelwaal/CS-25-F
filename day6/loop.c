#include<stdio.h>

int main() {

    for (int i = 1; i <= 10; i++) {

        printf("%d\n", i);
        // i += 2;

    } // 1,4,7,10                  

    /*
        1. i=1 => 1<=10 => true => Print 1
        2. i++ => 1++ => 2<=10 => true => Print 2
        3. i++ => 2++ => 3<=10 => true => Print 3
        5. i++ => 3++ => 4<=10 => true => Print 4
        6. i++ => 4++ => 5<=10 => true => Print 5
        7. i++ => 5++ => 6<=10 => true => Print 6
        8. i++ => 6++ => 7<=10 => true => Print 7
        9. i++ => 7++ => 8<=10 => true => Print 8
        10. i++ => 8++ => 9<=10 => true => Print 9
        11. i++ => 9++ => 10<=10 => true => Print 10


    */

    return 0;
}

/*
    For Loop
    While Loop
    Do While

    1. Starting Point
    2. End Point
    3. Increment or Decrement

*/