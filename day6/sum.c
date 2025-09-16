#include<stdio.h>

int main() {

    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;

    }

    printf("%d\n", sum);
    /*
           sum=sum+i => 0+1 => sum =1
           sum=sum+i => 1+2 => sum =3
           sum=sum+i => 3+3 => sum =6
           sum=sum+i => 6+4 => sum =10
           sum=sum+i => 10+5 => sum =15
           sum=sum+i => 15+6 => sum =21
           sum=sum+i => 21+7 => sum =28
           sum=sum+i => 28+8 => sum =36
           sum=sum+i => 36+9 => sum =45
           sum=sum+i => 45+10 => sum =55

           */
    return 0;
}