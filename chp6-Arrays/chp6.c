//
// chp6.c
// chp6-Arrays
//
// Created by @HKuz on 2/5/17
// Exercises from Chapter 6: Working with Arrays
//

#include <stdio.h>


// Function Prototypes
int tenValues(void);
int countRatings(void);
int avgOfTen(void);
int checkOutput(void);
int noArrayFibNums(void);
int sieveOfEratosthenes(void);
int variableArray(void);


int main(void) {
  // Execution of exercise functions

  // Exercise 6.02
  printf("---------------\n");
  printf("Exercise 6.02\n\n");
  tenValues();
  printf("\n\n");

  // Exercise 6.03
  printf("---------------\n");
  printf("Exercise 6.03\n\n");
  countRatings();
  printf("\n\n");

  // Exercise 6.04
  printf("---------------\n");
  printf("Exercise 6.04\n\n");
  avgOfTen();
  printf("\n\n");

  // Exercise 6.05
  printf("---------------\n");
  printf("Exercise 6.05\n\n");
  checkOutput();
  printf("\n\n");

  // Exercise 6.06
  printf("---------------\n");
  printf("Exercise 6.06\n\n");
  noArrayFibNums();
  printf("\n\n");

  // Exercise 6.07
  printf("---------------\n");
  printf("Exercise 6.07\n\n");
  sieveOfEratosthenes();
  printf("\n\n");

  // Exercise 6.08
  printf("---------------\n");
  printf("Exercise 6.08\n\n");
  variableArray();
  printf("\n\n");


  printf("---------------\n");

  return 0;
}

int tenValues(void) {
  // Modifies given program to initialize array with zeroes, using for loop

  int values[10];
  int index;

  for (index = 0; index < 10; index++) {
    values[index] = 0;
  }

  values[0] = 197;
  values[2] = -100;
  values[5] = 350;
  values[3] = values[0] + values[5];
  values[9] = values[5] / 10;
  --values[2];

  for (index = 0; index < 10; index++) {
    printf("Values[%i] = %i\n", index, values[index]);
  }

  return 0;
}

int countRatings(void) {
  // User enters ratings (1-10), program counts how many per rating

  int ratingCounters[11], i, response;

  for (i = 1; i <= 10; i++) {
    ratingCounters[i] = 0;
  }

  printf("Enter your responses (type 999 to finish)\n");

  while (1) {
    scanf("%i", &response);

    if (response == 999) {
      break;
    } else if (response < 1 || response > 10) {
      printf("Bad response: %i\n", response);
    } else {
      ++ratingCounters[response];
    }
  }

  printf("\n\nRating\tNumber of Responses\n");
  printf("------\t--------------------\n");

  for (i = 1; i <= 10; i++) {
    printf("%4i%14i\n", i, ratingCounters[i]);
  }

  return 0;
}

int avgOfTen(void) {
  // Takes average of ten floating point numbers
  double numbers[10] = {[0] = 0.0}, current, average = 0.0;
  int counter, length = 10;

  printf("Enter 10 numbers to get their average:\n");

  // Retrieve numbers from user, keep running sum
  for (counter = 0; counter < 10; counter++) {
    printf("Enter number %i\n", counter + 1);
    scanf("%lf", &current);
    numbers[counter] = current;
    average += current;
  }

  average /= length;
  printf("The average is %lf\n", average);

  return 0;
}

int checkOutput(void) {
  // Checks given program's output

  int numbers[10] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int i, j;

  for (j = 0; j < 10; j++) {
    for (i = 0; i < j; i++) {
      numbers[j] += numbers[i];
    }
  }

  for (j = 0; j < 10; j++) {
    printf("%i ", numbers[j]);
  }

  printf("\n");

  return 0;
}

int noArrayFibNums(void) {
  // Generates and displays first 15 Fibonacci numbers without using an array

  int fib0, fib1, fibCurrent, i;

  fib0 = 0; // By definition
  fib1 = 1; // By definition

  printf("Fibonacci 0 is: %i\n", fib0);
  printf("Fibonacci 1 is: %i\n", fib1);

  for (i = 2; i < 15; i++) {
    fibCurrent = fib0 + fib1;
    printf("Fibonacci %i is: %i\n", i, fibCurrent);
    fib0 = fib1;
    fib1 = fibCurrent;
  }

  return 0;
}

int sieveOfEratosthenes(void) {
  // Implementation of Sieve of Eratosthenes Algorithm to find prime number from 1 to 150

  int n = 150, p[151] = {[0] = 1, [1] = 1}, i, j;

  for (i = 2; i <= n; i++) {
    if (p[i] == 0) {
      // i is prime, mark all multiples to 1 (not prime)
      for (j = 2; j * i <= n; j++) {
        p[j * i] = 1;
      }
    }
  }

  printf("Sieve of Eratosthenes Prime Numbers (1 to 150)\n");

  for (i = 0; i <= n; i++) {
    if (p[i] == 0) {
      printf("%i  ", i);
    }
  }

  return 0;
}

int variableArray(void) {
  // Tests variable length array using GNU compiler

  int numMovies, m;

  printf("Calculate the Average Rating of Your Movie Collection\n");
  printf("How many movies do you own? ");
  scanf("%i", &numMovies);

  double ratings[numMovies];
  double r, average = 0.0;

  for (m = 0; m < numMovies; m++) {
    printf("Enter rating for movie %i\n", m + 1);
    scanf("%lf", &r);
    ratings[m] = r;
    average += r;
  }

  average /= numMovies;
  printf("The average rating is: %lf\n", average);

  return 0;
}


/*
  To compile and run with GNU compiler:
  Compile on terminal with command: gcc <filename.c>
  Execute on terminal with command: ./a.out
*/
