//
// stdLibCType.c
// Bonus-Other
//
// Created by @HKuz on 3/13/17
// Exercises to practice using C Standard Library <ctype.h>
//

#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {
  /*
    Library Functions:
    int isalnum(int c) - checks if character is alphanumeric.
    int isalpha(int c) - checks if character is alphabetic.
    int iscntrl(int c) - checks if character is control character.
    int isdigit(int c) - checks if character is decimal digit.
    int isgraph(int c) - checks if character has graphical representation using locale.
    int islower(int c) - checks if character is lowercase letter.
    int isprint(int c) - checks if character is printable.
    int ispunct(int c) - checks if character is a punctuation character.
    int isspace(int c) - checks if character is white-space.
    int isupper(int c) - checks if character is an uppercase letter.
    int isxdigit(int c) - checks if character is a hexadecimal digit.
    --------------------------------------------------------------------------
    int tolower(int c) - converts uppercase letters to lowercase.
    int toupper(int c) - converts lowercase letters to uppercase.
  */

  // Test variables
  char lowZee = 'z';
  char capZee = 'Z';
  char punc = '?';

  // Examples
  int result1 = isupper(capZee); // 1
  int result2 = isupper(lowZee); // 0
  int result3 = ispunct(punc); // 1
  char newZee = toupper(lowZee);
  //printf("toupper changes %c to %c\n", lowZee, newZee);
  char smallZee = tolower(capZee);
  //printf("tolower changes %c to %c\n", capZee, smallZee);

  return 0;
}


/*
  To compile and run with GNU compiler:
  Compile on terminal with command: gcc <filename.c>
  Execute on terminal with command: ./a.out
*/
