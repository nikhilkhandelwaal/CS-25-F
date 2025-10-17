#include <stdio.h>

int main() {

    // int arr[] = { 10,20,30,40,50 };

    // int arr[3][2];
    // arr[0][0] = 10;
    // arr[0][1] = 20;
    // arr[1][0] = 30;
    // arr[1][1] = 40;
    // arr[2][0] = 50;
    // arr[2][1] = 60;

    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 2; j++) {
    //         printf("%d \t", arr[i][j]);
    //     }
    //     printf("\n");
    // }

    // int arr[] = { 10,20,30,40,50 };

    // int arr1[5];
    // arr1[0]=10;
    // arr1[1]=20;
    // arr1[2]=30;

    // int arr[3][3] = { {10,20,30},{40,50,60},{70,80,90} };
    int arr[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter values of array: ");
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}