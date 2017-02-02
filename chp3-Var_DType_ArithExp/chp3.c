//
// chp3.c
// chp3-Var_DType_ArithExp
//
// Created by @HKuz on 2/2/17
// Exercises from Chapter 3: Variables, Data Types, and Arithmetic Expressions
//

#include <stdio.h>
#include <math.h>

// Function Prototypes
double tempFtoC(double far);
int checkAssignment(void);
double polynomial(double x);
double displayExp(void);
int nextLargestInt(int i, int j);


int main(void) {
  // Execution of exercise functions

  // Exercise 3.04
  printf("---------------\n");
  printf("Exercise 3.04\n\n");
  tempFtoC(27);
  printf("\n\n");

  // Exercise 3.05
  printf("---------------\n");
  printf("Exercise 3.05\n\n");
  checkAssignment();
  printf("\n\n");

  // Exercise 3.06
  printf("---------------\n");
  printf("Exercise 3.06\n\n");
  polynomial(2.55);
  printf("\n\n");

  // Exercise 3.07
  printf("---------------\n");
  printf("Exercise 3.07\n\n");
  displayExp();
  printf("\n\n");

  // Exercise 3.09
  printf("---------------\n");
  printf("Exercise 3.09\n\n");
  nextLargestInt(365, 7);
  nextLargestInt(12258, 23);
  nextLargestInt(996, 4);
  printf("\n\n");


  printf("---------------\n");

  return 0;
}

double tempFtoC(double far) {
  // Converts given temperature in F to C

  double celcius;
  celcius = (far - 32) / 1.8;
  printf("A temperature of %.1fF is equivalent to %.1fC.\n", far, celcius);

  return celcius;
}

int checkAssignment(void) {
  // Checks output from given program

  char c, d;

  c = 'd';
  d = c;
  printf("d = %c\n", d);

  return 0;
}

double polynomial(double x) {
  // Evaluates given polynomial 3x^3 - 5x^2 + 6

  double result;
  result = 3 * pow(x, 3) - 5 * pow(x, 2) + 6;
  printf("Polynomial 3x^3 - 5x^2 + 6 with %.2f evaluates to: %.2f.\n", x, result);

  return result;
}

double displayExp(void) {
  // Evaluates and displays given expression

  double result, a, b, c, d;

  a = 3.31e-8;
  b = 2.01e-7;
  c = 7.16e-6;
  d = 2.01e-8;
  result = (a * b) / (c + d);
  printf("The expression (%e * %e) / (%e + %e) evaluates to: %e.\n", a, b, c, d, result);

  return result;
}

int nextLargestInt(int i, int j) {
  // Rounds off integer i to the next largest even multiple of integer j

  int result;
  result = i + j - i % j;
  printf("The next largest integer after %i divisible by %i is %i.\n", i, j, result);

  return result;
}

/*
  To compile and run with GNU compiler:
  Compile on terminal with command: gcc <filename.c>
  Execute on terminal with command: ./a.out
*/
