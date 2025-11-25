#include <stdio.h>

struct user {
    char name[100];
    int age;
    float height;
};

void structFun(struct user* userInfo) {
    // printf("%s\n", userInfo.name);
    // printf("%d\n", userInfo.age);
    // printf("%f\n", userInfo.height);

    userInfo->age = 30;

    printf("Inside Func: %d\n", userInfo->age);
}

int main() {

    struct user user1 = { "Hello",25,5.5 };
    printf("Before Passing: %d\n", user1.age);

    structFun(&user1);
    printf("After Passing: %d\n", user1.age);



    return 0;
}