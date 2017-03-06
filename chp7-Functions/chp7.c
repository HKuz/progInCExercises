//
// chp7.c
// chp7-Functions
//
// Created by @HKuz on 2/8/17
// Exercises from Chapter 7: Working with Functions
//

#include <stdio.h>


// Function Prototypes
int calculateTriangularNumber(int n);
float absoluteValue(float x);
float squareRoot(float x, float epsilon);
float squareRootPrint(float x, float epsilon);
float squareRootRatio(float x, float epsilon);
double squareRootDouble(double x, double epsilon);
long int x_to_the_n(int x, int n);
void quadraticRoots(void);
int gcd(int u, int v);
int lcm(int u, int v);

int main(void) {
  // Execution of exercise functions

  // Exercise 7.02
  printf("---------------\n");
  printf("Exercise 7.02\n\n");
  calculateTriangularNumber(10);
  printf("\n\n");

  // Exercise 7.03
  printf("---------------\n");
  printf("Exercise 7.03\n\n");
  squareRoot(2, 0.00001);
  squareRoot(2, 0.01);
  printf("\n\n");

  // Exercise 7.04
  printf("---------------\n");
  printf("Exercise 7.04\n\n");
  squareRootPrint(2, 0.00001);
  printf("\n\n");

  // Exercise 7.05
  printf("---------------\n");
  printf("Exercise 7.05\n\n");
  squareRootRatio(2, 0.00001);
  squareRootRatio(231, 0.00001);
  printf("\n\n");

  // Exercise 7.06
  printf("---------------\n");
  printf("Exercise 7.06\n\n");
  squareRootDouble(2, 0.0000001);
  printf("\n\n");

  // Exercise 7.07
  printf("---------------\n");
  printf("Exercise 7.07\n\n");
  x_to_the_n(7, 2);
  x_to_the_n(2, 6);
  x_to_the_n(9, 0);
  x_to_the_n(-9, 3);
  x_to_the_n(9, -1);
  printf("\n\n");

  // Exercise 7.08
  printf("---------------\n");
  printf("Exercise 7.08\n\n");
  quadraticRoots();
  printf("\n\n");

  // Exercise 7.09
  printf("---------------\n");
  printf("Exercise 7.09\n\n");
  lcm(15, 10);
  lcm(0, 12);
  lcm(-2, 4);
  printf("\n\n");

  // Exercise 7.10
  printf("---------------\n");
  printf("Exercise 7.10\n\n");

  printf("\n\n");

  // Exercise 7.11
  printf("---------------\n");
  printf("Exercise 7.11\n\n");

  printf("\n\n");

  // Exercise 7.12
  printf("---------------\n");
  printf("Exercise 7.12\n\n");

  printf("\n\n");

  // Exercise 7.13
  printf("---------------\n");
  printf("Exercise 7.13\n\n");

  printf("\n\n");

  // Exercise 7.14
  printf("---------------\n");
  printf("Exercise 7.14\n\n");

  printf("\n\n");

  // Exercise 7.15
  printf("---------------\n");
  printf("Exercise 7.15\n\n");

  printf("\n\n");


  printf("---------------\n");

  return 0;
}

int calculateTriangularNumber(int n) {
  // Calculates the nth triangular number
  int i, triangularNumber = 0;

  for (i = 1; i <= n; ++i) {
    triangularNumber += i;
  }

  printf("Triangular number %i is %i\n", n, triangularNumber);

  return triangularNumber;
}

float absoluteValue(float x) {
  // Calculates the absolute value of a number and returns it
  if (x < 0) {
    x = -x;
  }

  return x;
}

float squareRoot(float x, float epsilon) {
  // Computes the square root of a number using Newton-Raphson method
  float guess = 1.0;

  if (x < 0) {
    printf("Negative argument to squareRoot.\n");
    return -1;
  }

  while (absoluteValue(guess * guess - x) >= epsilon) {
    guess = (x / guess + guess) / 2.0;
  }

  printf("The square root of %.2f is %.6f\n", x, guess);
  return guess;
}

float squareRootPrint(float x, float epsilon) {
  // Computes the square root of a number using Newton-Raphson method
  // Prints value of guess each time through the while loop
  float guess = 1.0;

  if (x < 0) {
    printf("Negative argument to squareRoot.\n");
    return -1;
  }

  while (absoluteValue(guess * guess - x) >= epsilon) {
    guess = (x / guess + guess) / 2.0;
    printf("New value of guess: %.6f\n", guess);
  }

  printf("The square root of %.2f is %.6f\n", x, guess);
  return guess;
}

float squareRootRatio(float x, float epsilon) {
  // Computes the square root of a number using Newton-Raphson method
  float guess = 1.0;

  if (x < 0) {
    printf("Negative argument to squareRoot.\n");
    return -1;
  }

  while (absoluteValue(guess * guess / x - 1.0) >= epsilon) {
    guess = (x / guess + guess) / 2.0;
  }

  printf("The square root of %.2f is %.6f\n", x, guess);
  return guess;
}

double squareRootDouble(double x, double epsilon) {
  // Computes the square root of a number using Newton-Raphson method
  // Uses double-precision variables
  double guess = 1.0;

  if (x < 0) {
    printf("Negative argument to squareRoot.\n");
    return -1;
  }

  while (absoluteValue(guess * guess - x) >= epsilon) {
    guess = (x / guess + guess) / 2.0;
  }

  printf("The square root of %.2lf is %.6lf\n", x, guess);
  return guess;
}

long int x_to_the_n(int x, int n) {
  // Calculates x^n and returns it as a long int. Assumes n >= 0 only

  if (n < 0) {
    printf("Sorry, power must be a positive number.\n");
    return -1.0;
  }

  printf("%i raised to the %i power is ", x, n);
  long int result = 1;
  while (n >= 1) {
    result *= x;
    n--;
  }
  printf("%li.\n", result);
  return result;
}

void quadraticRoots(void) {
  // Calculates quadratic equation to find roots of a polynomial (order 2)
  // Prints error if the discriminant is < 0 (imaginary roots)

  float a, b, c, discriminant, sqrtDiscriminant, denominator, root1, root2;

  printf("Quadratic Equation Calculator\n");
  printf("Enter constants a, b, and c, separated by spaces\n");
  scanf("%f %f %f", &a, &b, &c);

  discriminant = (b * b) - (4 * a * c);
  denominator = 2.0 * a;

  if (discriminant < 0) {
    printf("The roots for this quadratic equation are imaginary.\n");
  } else {
    sqrtDiscriminant = squareRoot(discriminant, 0.00001);
    root1 = (-b + sqrtDiscriminant) / denominator;
    root2 = (-b - sqrtDiscriminant) / denominator;
    printf("The roots for %.1fx^2 + %.1fx + %.1f are: %.2f and %.2f\n", a, b, c, root1, root2);
  }

}

int gcd(int u, int v) {
  // Inputs two positive integers, returns integer for greatest common divisor
  // Program 7.6 from Programming in C Fourth Edition

  int temp;

  while (v != 0) {
    temp = u % v;
    u = v;
    v = temp;
  }

  return u;
}

int lcm(int u, int v) {
  // Inputs two positive integers, returns integer for least common multiple

  if (u < 0 || v < 0) {
    printf("Error: both parameters must be >= 0.\n");
    return 1;
  }

  int result;

  result = (u * v) / gcd(u, v);
  printf("The least common multiple of %i and %i is %i.\n", u, v, result);

  return result;
}


/*
  To compile and run with GNU compiler:
  Compile on terminal with command: gcc <filename.c>
  Execute on terminal with command: ./a.out
*/
