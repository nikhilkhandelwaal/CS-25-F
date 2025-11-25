#include <stdio.h>

typedef struct user {
    char name[100];
    int age;
    float height;
} userData;

int main() {

    userData user1 = { "Hello",25,5.5 };

    return 0;
}