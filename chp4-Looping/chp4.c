//
// chp4.c
// chp4-Looping
//
// Created by @HKuz on 2/3/17
// Exercises from Chapter 4: Program Looping
//

#include <stdio.h>

// Function Prototypes
int nSquared(void);
int fifthTriangularNum(void);
int firstTenFactorials(void);
int powersOf2(void);
int triangularNums(void);
int centFormat(void);
int pickTrianNums(int n);
int whilePickTrianNums(int n);
int sumOfDigits(void);

int main(void) {
  // Execution of exercise functions

  // Exercise 4.02
  printf("---------------\n");
  printf("Exercise 4.02\n\n");
  nSquared();
  printf("\n\n");

  // Exercise 4.03
  printf("---------------\n");
  printf("Exercise 4.03\n\n");
  fifthTriangularNum();
  printf("\n\n");

  // Exercise 4.04
  printf("---------------\n");
  printf("Exercise 4.04\n\n");
  firstTenFactorials();
  printf("\n\n");

  // Exercise 4.05
  printf("---------------\n");
  printf("Exercise 4.05\n\n");
  powersOf2();
  printf("\n\n");

  // Exercise 4.06
  printf("---------------\n");
  printf("Exercise 4.06\n\n");
  triangularNums();
  printf("\n\n");

  // Exercise 4.07
  printf("---------------\n");
  printf("Exercise 4.07\n\n");
  centFormat();
  printf("\n\n");

  // Exercise 4.08
  printf("---------------\n");
  printf("Exercise 4.08\n\n");
  pickTrianNums(2);
  printf("\n\n");

  // Exercise 4.09
  printf("---------------\n");
  printf("Exercise 4.09\n\n");
  whilePickTrianNums(2);
  printf("\n\n");

  // Exercise 4.11
  printf("---------------\n");
  printf("Exercise 4.11\n\n");
  sumOfDigits();
  printf("\n\n");


  printf("---------------\n");

  return 0;
}

int nSquared(void) {
  // Prints a table of n and n^2 values from 1 to 10

  printf("Table of Squares from 1 to 10\n\n");
  printf(" n \t\tn^2\n");
  printf("---\t\t---\n");

  int n;

  for (n = 1; n <=10; n++) {
    printf("%2i\t\t%3i\n", n, n * n);
  }

  printf("---------------------\n");

  return 0;
}

int fifthTriangularNum(void) {
  // Prints table of every fifth triangular number from 5 to 50

  printf("Every 5th Triangular Number from 5 to 50\n\n");
  printf(" n \t\tt(n)\n");
  printf("---\t\t----\n");

  int n, t;

  for (n = 5; n <=50; n += 5) {
    t = n * (n + 1) / 2;
    printf("%2i\t\t%4i\n", n, t);
  }

  printf("---------------------\n");

  return 0;
}

int firstTenFactorials(void) {
  // Prints table of first ten factorials

  printf("First Ten Factorial Numbers\n\n");
  printf(" n \t\t    n!\n");
  printf("---\t\t---------\n");

  int n;
  int f = 1;

  for (n = 1; n <=10; n++) {
    f *= n;
    printf("%2i\t\t%7i\n", n, f);
  }

  printf("------------------------\n");

  return 0;
}

int powersOf2(void) {
  // Prints table of the powers of 2 from 0 to 10

  int n, two_to_the_n;
  printf("TABLE OF POWERS OF TWO\n\n");
  printf(" n \t\t2 to the n\n");
  printf("---\t\t-----------\n");

  two_to_the_n = 1;
  for (n = 0; n <= 10; n++) {
    printf("%2i\t\t%4i\n", n, two_to_the_n);
    two_to_the_n *= 2;
  }

  return 0;
}

int triangularNums(void) {
  // Prints a table of the first ten triangular numbers

  int n, triangularNumber;

  printf("TABLE OF TRIANGULAR NUMBERS\n\n");
  printf(" n \t\tSum from 1 to n\n");
  printf("---\t\t-----------------\n");

  triangularNumber = 0;

  for (n = 1; n <= 10; n++) {
    triangularNumber += n;
    printf(" %-2i\t\t%i\n", n, triangularNumber);
  }

  return 0;
}

int centFormat(void) {
  // Tests formatting using decimals in field width specification

  int dollars, cents, count;

  for (count = 1; count <= 2; count++) {
    printf("Enter dollars: ");
    scanf("%i", &dollars);
    printf("Enter cents: ");
    scanf("%i", &cents);
    printf("$%i.%.2i\n\n", dollars, cents);
  }

  return 0;
}

int pickTrianNums(int n) {
  // User picks how many triangular numbers to calculate and show

  int t, number, triangularNumber, counter;

  for (counter = 1; counter <= n; counter++) {
    printf("What triangular number do you want? ");
    scanf("%i", &number);

    triangularNumber = 0;

    for (t = 1; t <= number; t++) {
      triangularNumber += t;
    }

    printf("Triangular number %i is %i\n\n", number, triangularNumber);
  }

  return 0;
}

int whilePickTrianNums(int n) {
  // User picks how many triangular numbers to calculate and show
  // Replaces for loops with while loops

  int t, number, triangularNumber, counter;
  counter = 1;

  while (counter <= n) {
    printf("What triangular number do you want? ");
    scanf("%i", &number);

    triangularNumber = 0;
    t = 1;

    while ( t <= number) {
      triangularNumber += t;
      t++;
    }

    printf("Triangular number %i is %i\n\n", number, triangularNumber);

    counter++;
  }

  return 0;
}

int sumOfDigits(void) {
  // Inputs an integer, calculates and returns the sum of the digits
  int sum, digit, number, n;

  printf("Enter an integer: ");
  scanf("%i", &n);

  sum = 0;
  number = n;

  while (number > 0) {
    digit = number % 10;
    sum += digit;
    number /= 10;
  }

  printf("The sum of the digits in %i is %i\n", n, sum);

  return sum;
}


/*
  To compile and run with GNU compiler:
  Compile on terminal with command: gcc <filename.c>
  Execute on terminal with command: ./a.out
*/
