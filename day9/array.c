#include <stdio.h>

int main() {

    // int arr[5] = { 10,20,30,40,50 };
    // float arr1[5] = { 1.2,2.3,3.4,4.5,5.6 };
    // double arr2[5] = { 1.2,2.3,3.4,4.5,5.6 };
    // char arr3[5] = { 'a','b','c','d','e' };

    // printf("%d", sizeof(arr));
    // printf("%d", sizeof(arr1));
    // printf("%d", sizeof(arr2));
    // printf("%d", sizeof(arr3));

    // int arr[10] = { 10,20,30,40,50 };

    // printf("%d\n", arr[0]);
    // printf("%d\n", arr[1]);
    // printf("%d\n", arr[2]);
    // printf("%d\n", arr[3]);
    // printf("%d\n", arr[4]);
    // printf("%d\n", arr[5]);


    // int arr[5];
    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;
    // arr[3] = 40;
    // arr[4] = 50;


    // int arr[5];
    // printf("Enter first value: ");
    // scanf("%d", &arr[0]);
    // printf("Enter second value: ");
    // scanf("%d", &arr[1]);
    // printf("Enter third value: ");
    // scanf("%d", &arr[2]);
    // printf("Enter fourth value: ");
    // scanf("%d", &arr[3]);
    // printf("Enter fifth value: ");
    // scanf("%d", &arr[4]);

    // int arr[5];
    // for (int i = 0; i < 5; i++) {
    //     printf("Enter  value: ");
    //     scanf("%d", &arr[i]);
    // }

    // for (int j = 0; j < 5; j++) {
    //     printf("%d\n", arr[j]);
    // }


    int arr[] = { 5,6,7,8,9,1,2,4,5,3,6,9,7,5 };
    int count = sizeof(arr) / sizeof(arr[0]);
    printf("%d", count);




    return 0;
}
// Take 5 value from scanf and print in reverse order
// Count the even and odd number from an array
// Copy array values from one array to another array
// Create reverse of an array with using another varible
// Create reverse of an array without using another varible
// Check wheather array is palindrome or not ?

