//
// stdLibCType.c
// Bonus-Other
//
// Created by @HKuz on 3/13/17
// Exercises to practice using C Standard Library <stdio.h>
//

#include <stdio.h>

int main(int argc, char const *argv[]) {
  /*
    int printf(const char *format, ...) - sends formatted output to stdout.
    Match % formatted placeholder to data type for variables
    Right-justify integers, adds leading spaces: %2i (field-width: two spaces)
    Left-justify integers, adds trailing spaces: %-2i (field-width: two spaces)
    Decimals before field-width (ints) displays as decimals (300 -> %.2i -> 3.00)
    Decimals in %f or %e is precision modifier, displays that many decimals
  */

  int nine = 9;
  float floater = 7.143723;
  char zee = 'z';
  printf("Examples of how data types are displayed:\n");
  printf("Integer: %i\tFloat: %.4f\tChar: %c\n", nine, floater, zee);
  printf("\n");


  /*
    int scanf(const char *format, ...) - reads formatted input from stdin.
    Don't need the ampersand before variable name if it's an array
    Not great for strings, stops reading at space, tab, newline (use fgets)
  */

  int newInt;
  printf("Enter an integer:\n");
  scanf("%i", &newInt);
  printf("Your integer was: %i\n", newInt);

  float newNum1, newNum2, newNum3;
  printf("Enter three numbers separated by spaces:\n");
  scanf("%f %f %f", &newNum1, &newNum2, &newNum3);
  printf("Your numbers were: %.2f, %.2f, and %.2f.\n", newNum1, newNum2, newNum3);

  char firstName[20];
  printf("Enter your first name:\n");
  scanf("%s", firstName);
  printf("Welcome, %s!\n", firstName);


  /*
    int getchar(void) - gets a character (unsigned char) from stdin.
  */

  char tempC;
  printf("On a scale of 1-10, enter how you feel:\n");
  tempC = getchar();

  /*
    int putchar(int char) - writes a character (unsigned char) specified by the
    argument char to stdout.
  */
  printf("Testing putchar...\n");
  putchar(tempC);
  printf("\n");

  /*
    char *fgets(char *str, int n, FILE *stream) - reads a line from the specified
    stream and stores it into the string pointed to by str. It stops when either
    (n-1) characters are read, the newline character is read, or the end-of-file
    is reached, whichever comes first.
  */

  char input[64];
  printf("Enter your full name:\n");
  fgets(input, 64, stdin);

  /*
    int puts(const char *str) - writes a string to stdout up to but not including
    the null character. A newline character is appended to the output.
  */

  puts(input);

  return 0;
}


/*
  To compile and run with GNU compiler:
  Compile on terminal with command: gcc <filename.c>
  Execute on terminal with command: ./a.out
*/
