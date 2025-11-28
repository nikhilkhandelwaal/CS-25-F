#include <stdio.h>

int main() {

    FILE* fPtr;
    int a;
    fPtr = fopen("Test.txt", "r");

    if (fPtr == NULL) {
        printf("File is not avaible");
        return 0;
    }
    else {
        // fprintf(fPtr, "%d\t%f\n", 20, 8.2);
        fscanf(fPtr, "%d", &a);
    }

    fclose(fPtr);

    return 0;
}

/*
    read    => "r"
    write   => "w"
    append  => "a"

    fprintf
    fscanf



*/