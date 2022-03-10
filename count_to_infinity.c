#include <stdio.h> // This is required for every c program. Allows the user to read input/oupt

int main() {
    int counter = 1;

    while(1) { // While loop
        printf("Value of counter: %i \n", counter);
        counter = counter + 1000;
    }
}