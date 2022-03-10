#include <stdio.h> // This is required for every c program. Allows the user to read input/oupt#include <stdio.h> // This is required for every c program. Allows the user to read input/oupt
#include <stdlib.h> // This is required for every c program. Allows the user to read input/oupt

int main() {
    // Suppose we have some super-secret nuclear missle code/control pad
    // It accepts two inputs, A,B
    int A;
    int B;
    
    // Ask the user for A
    printf("Please enter code 1: ");
    scanf("%d",&A);
    // A,B MUST both be > 1
    if(A < 1 || A > 2000000000) {
        printf("ERROR: A must be > 1 and less than 2000000000");
        exit(0);
    }

    // Ask the user for B
    printf("Please enter code 2: ");
    scanf("%d",&B);
    if(B < 1 || A > 2000000000) {
        printf("ERROR: B must be > 1");
        exit(0);
    }

    // Given the inputs, the program should let the user control the missles
    // if A + B < 1
    if(A + B < 1) {
        printf("You have accessed the codes, enjoy mutally assured destruction! \n");
    } else {
        printf("You do not have access to authorize this strike \n");
    }
}