#include <stdio.h> // This is required for every c program. Allows the user to read input/oupt
#include <stdbool.h>

int main() {
    int x = 5.65;
    int numerator = 1;
    int denominator = 3;
    float outputOfDivision = numerator/denominator;
    float y = 6.12;
    bool isVerfied = true;
    

    printf("Integer: %i \n", x);
    printf("Floating-Point (Real): %f \n", y);
    printf("1/3: %f \n", outputOfDivision);
    printf("is verified: %d \n", isVerfied);
}