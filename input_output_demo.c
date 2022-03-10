#include <stdio.h> // This is required for every c program. Allows the user to read input/oupt

int main() {
   // name is a variable. Save space to store whatever 'name' is
   char name[20]; // (Char means 'character') We have a variable called name, that's (up to) 20 characters long

   printf("Hello, what is your name? "); // Ask the user their name (output)
   gets(name); // Actually get the name (input)

   printf("Hello, %s", name); // Print the name back to the user (output)
   return 0;   
}