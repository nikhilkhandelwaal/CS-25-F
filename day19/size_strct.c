#include <stdio.h>

union user {
    char name[100];
    int age;
    float height;
};


int main() {

    union user user1;
    user1.age = 25;
    printf("%d\n", user1.age);
    user1.height = 5.5;
    printf("%d\n", user1.age);
    printf("%f\n", user1.height);

    return 0;
}