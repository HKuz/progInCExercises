//
// chp7.c
// chp7-Functions
//
// Created by @HKuz on 2/8/17
// Exercises from Chapter 7: Working with Functions
//

#include <stdio.h>
#include <math.h>

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
int prime(int n);
int arraySum(int arr[], int length);
void displayMatrix(int nRows, int nCols, int matrix[nRows][nCols]);
void transposeMatrix(int nRows, int nCols, int matrix[nRows][nCols],
                    int tMatrix[nCols][nRows]);
void sort(int a[], int n, _Bool type);
void getNumberAndBase(void);
void convertNumber(void);
void displayConvertedNumber(void);


// Global Variables
int convertedNumber[64];
long int numberToConvert;
int base;
int digit;


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
  //quadraticRoots();
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
  prime(-2);
  prime(2);
  prime(3);
  prime(4);
  prime(101);
  printf("\n\n");

  // Exercise 7.11
  printf("---------------\n");
  printf("Exercise 7.11\n\n");
  int testArray[4] = {1, 2, 3, 4};
  arraySum(testArray, 4);
  printf("\n\n");

  // Exercise 7.12
  printf("---------------\n");
  printf("Exercise 7.12\n\n");
  int origRows = 4;
  int origCols = 5;
  int origMatrix[4][5] = {
    { 1,  2,  3,  4,  5},
    { 6,  7,  8,  9, 10},
    {11, 12, 13, 14, 15},
    {16, 17, 18, 19, 20}
  };
  int transposedMatrix[origCols][origRows];

  printf("Original matrix is:\n\n");
  displayMatrix(origRows, origCols, origMatrix);
  transposeMatrix(origRows, origCols, origMatrix, transposedMatrix);
  printf("Transposed matrix is:\n\n");
  displayMatrix(origCols, origRows, transposedMatrix);
  printf("\n\n");

  // Exercise 7.13
  printf("---------------\n");
  printf("Exercise 7.13\n\n");
  int sortingArray1[8] = {34, -5, 6, 0, 12, 100, 56, 22};
  sort(sortingArray1, 8, 0);
  sort(sortingArray1, 8, 1);
  printf("\n\n");

  // Exercise 7.15
  printf("---------------\n");
  printf("Exercise 7.15\n\n");
  getNumberAndBase();
  convertNumber();
  displayConvertedNumber();
  printf("\n\n");

  // Exercise 7.16
  printf("---------------\n");
  printf("Exercise 7.15\n\n");
  printf("Convert as many numbers as you like. Enter 0 to quit.\n");
  do {
    getNumberAndBase();
    convertNumber();
    displayConvertedNumber();
  }
  while (numberToConvert != 0);

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

int prime(int n) {
  // Checks if n is prime. Returns 1 if it is prime, 0 if not, -1 for an error

  int isPrime = 1;
  double sqRootOfN = sqrt(n);

  // Input check
  if (n < 0) {
    printf("Error: %i must be a positive integer to check if it's prime.\n", n);
    return -1;
  }

  // Positive integers
  if (n < 2) {
    // n is 1 or 0
    isPrime = 0;
  } else {
    // n is any other positive integer
    for (int i = 2; i <= sqRootOfN; i++) {
      if (n == 2) {
        break;
      }
      if (n % i == 0) {
        isPrime = 0;
        break;
      }
    }
  }

  if (isPrime) {
    printf("%i is a prime number!\n", n);
  } else {
    printf("%i is not a prime number.\n", n);
  }

  return isPrime;
}

int arraySum(int arr[], int length) {
  // Inputs an array of integers and its length. Returns the sum of the array values

  int sum = 0;
  for (int i = 0; i < length; i++) {
    sum += arr[i];
  }
  printf("The sum of your array values is %i.\n", sum);
  return sum;
}

void displayMatrix(int nRows, int nCols, int matrix[nRows][nCols]) {
  // Prints a Row x Column matrix

  int r, c;

  for (r = 0; r < nRows; r++) {
    for (c = 0; c < nCols; c++) {
      printf("%5i", matrix[r][c]);
    }
    printf("\n");
  }

  printf("\n");

  return;
}

void transposeMatrix(int nRows, int nCols, int matrix[nRows][nCols], int tMatrix[nCols][nRows]) {
  // Takes an MxN matrix and transposes it to an NxM matrix

  int r, c;

  for (r = 0; r < nRows; r++) {
    for (c = 0; c < nCols; c++) {
      tMatrix[c][r] = matrix[r][c];
    }
  }

  return;
}

void sort(int a[], int n, _Bool type) {
  // Sorts an array a with n items. Type is 0 for ascending, 1 for descending

  int i, j, k, temp;

  if (type) {
    printf("Descending order sort\n");
  }
  else {
    printf("Ascending order sort\n");
  }

  printf("Array before the sort:\n");
  for (k = 0; k < n; k++) {
    printf("%i ", a[k]);
  }

  for (i = 0; i < n - 1; i++) {
    for (j = i + 1; j < n; j++) {
      // Checks for both ascending sort and new item is less than current item,
      // OR for both descending sort and new item is greater than current item
      // Either of those condition true, then swap the items
      if ( (type == 0 && a[j] < a[i]) || (type == 1 && a[j] > a[i]) ) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }

  printf("\nArray after the sort:\n");
  for (k = 0; k < n; k++) {
    printf("%i ", a[k]);
  }
  printf("\n");

  return;
}

void getNumberAndBase(void) {
  printf("Number to be converted? ");
  scanf("%li", &numberToConvert);

  if (numberToConvert == 0) {
    return;
  }

  printf("Base to convert to (2-16)? ");
  scanf("%i", &base);

  while (base < 2 || base > 16) {
    printf("Enter a valid base between 2 and 16: ");
    scanf("%i", &base);
  }

  return;
}

void convertNumber(void) {
  digit = 0;

  if (numberToConvert == 0) {
    return;
  }

  do {
    convertedNumber[digit] = numberToConvert % base;
    digit++;
    numberToConvert /= base;
  }
  while (numberToConvert != 0);

  // Reset numberToConvert
  numberToConvert = 1;

  return;
}

void displayConvertedNumber(void) {
  const char baseDigits[16] = {
    '0', '1', '2', '3', '4', '5', '6', '7',
    '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'
  };
  int nextDigit;

  if (numberToConvert == 0) {
    return;
  }

  printf("Converted number = ");

  for (--digit; digit >= 0; --digit) {
    nextDigit = convertedNumber[digit];
    printf("%c", baseDigits[nextDigit]);
    // Clear array value
    convertedNumber[digit] = 0;
  }

  printf("\n");

  return;
}


/*
  To compile and run with GNU compiler:
  Compile on terminal with command: gcc <filename.c>
  Execute on terminal with command: ./a.out
*/
