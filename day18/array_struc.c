#include <stdio.h>
#include<string.h>

struct student {
    char name[100];
    int rollNum;
    float cgpa;
};

int main() {

    // struct student student1;
    // student1.rollNum = 1000;
    // student1.cgpa = 6.5;
    // strcpy(student1.name, "Hello");

    // struct student student2;
    // student2.rollNum = 1001;
    // student2.cgpa = 8.5;
    // strcpy(student2.name, "Welcome");

    // int arr[5];
    // float arr1[5];
    struct student studentData[5];

    studentData[0].rollNum = 1000;
    studentData[0].cgpa = 5.5;
    strcpy(studentData[0].name, "Hello");

    studentData[1].rollNum = 1001;
    studentData[1].cgpa = 6.5;
    strcpy(studentData[1].name, "Welcome");

    studentData[2].rollNum = 1002;
    studentData[2].cgpa = 8.5;
    strcpy(studentData[2].name, "Everyone");

    for (int i = 0; i < 3; i++) {
        printf("%s\n", studentData[i].name);
        printf("%d\n", studentData[i].rollNum);
        printf("%f\n", studentData[i].cgpa);
    }





    return 0;
}

/*
    int a
*/