//
// chp2.c
// chp2-FirstProgram
//
// Created by @HKuz on 2/2/17
// Exercises from Chapter 2 Compiling and Running Your First Program
//

#include <stdio.h>

// Function Prototypes
int printStmts(void);
int testingOutput(void);
int subtract(void);
int correctedProg(void);
int checkOutput(void);


int main(void) {
  // Execution of exercise functions

  // Exercise 2.02
  printf("---------------\n");
  printf("Exercise 2.02\n\n");
  printStmts();
  printf("\n\n");

  // Exercise 2.03
  printf("---------------\n");
  printf("Exercise 2.03\n\n");
  testingOutput();
  printf("\n\n");

  // Exercise 2.04
  printf("---------------\n");
  printf("Exercise 2.04\n\n");
  subtract();
  printf("\n\n");

  // Exercise 2.05
  printf("---------------\n");
  printf("Exercise 2.05\n\n");
  correctedProg();
  printf("\n\n");

  // Exercise 2.06
  printf("---------------\n");
  printf("Exercise 2.06\n\n");
  checkOutput();
  printf("\n\n");

  printf("---------------\n");

  return 0;
}

int printStmts(void) {
  // Prints series of requested statments

  printf("In C, lowercase letters are significant.\n");
  printf("main() is where program execution begins.\n");
  printf("Opening and closing braces enclose program statements in a routine.\n");
  printf("All program statements must be terminated by a semicolon.\n");

  return 0;
}

int testingOutput(void) {
  // Runs given program to test expected output

  printf("Testing...");
  printf("....1");
  printf("...2");
  printf("..3");
  printf("\n");

  return 0;
}


int subtract(void) {
  // Program to subtract 15 from 87 and print results

  int val1, val2, result;

  val1 = 87;
  val2 = 15;
  result = val1 - val2;

  printf("The difference between %i and %i is %i\n", val1, val2, result);

  return 0;
}


int correctedProg(void) {
  // Fixes the errors in given program

  int sum;
  /* COMPUTE RESULT */
  sum = 25 + 37 -19;
  /* DISPLAY RESULTS */
  printf("The answer is %i\n", sum);

  return 0;
}

int checkOutput(void) {
  // Checks output from given program

  int answer, result;

  answer = 100;
  result = answer - 10;
  printf("The result is %i\n", result + 5);

  return 0;
}

/*
  To compile and run with GNU compiler:
  Compile on terminal with command: gcc <filename.c>
  Execute on terminal with command: ./a.out
*/
