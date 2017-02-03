//
// chp5.c
// chp5-Decisions
//
// Created by @HKuz on 2/3/17
// Exercises from Chapter 5: Making Decisions
//

#include <stdio.h>

// Function Prototypes
int checkDivisibility(void);
int showDivision(void);

int main(void) {
  // Execution of exercise functions

  // Exercise 5.02
  printf("---------------\n");
  printf("Exercise 5.02\n\n");
  checkDivisibility();
  printf("\n\n");

  // Exercise 5.03
  printf("---------------\n");
  printf("Exercise 5.03\n\n");
  showDivision();
  printf("\n\n");

  // Exercise 5.04
  printf("---------------\n");
  printf("Exercise 5.04\n\n");

  printf("\n\n");

  // Exercise 5.05
  printf("---------------\n");
  printf("Exercise 5.05\n\n");

  printf("\n\n");

  // Exercise 5.06
  printf("---------------\n");
  printf("Exercise 5.06\n\n");

  printf("\n\n");

  // Exercise 5.07
  printf("---------------\n");
  printf("Exercise 5.07\n\n");

  printf("\n\n");


  printf("---------------\n");

  return 0;
}

int checkDivisibility(void) {
  // Asks user for two integers and checks if first is divisible by second

  int x, y;

  printf("Enter two integers separated with a space: ");
  scanf("%i %i", &x, &y);

  if (y == 0) {
    printf("Danger - division by zero!\n");
  } else if (x % y == 0) {
    printf("Yes, %i is divisible by %i!\n", x, y);
  } else {
    printf("No, %i is not divisible by %i.\n", x, y);
  }

  return 0;
}

int showDivision(void) {
  // Asks user for two integers and checks if first is divisible by second

  int x, y;
  double z;

  printf("Enter two integers separated with a space: ");
  scanf("%i %i", &x, &y);

  if (y == 0) {
    printf("Danger - division by zero!\n");
  } else {
    z = (float) x / y;
    printf("%i divided by %i is %.3f.\n", x, y, z);
  }

  return 0;
}

/*
  To compile and run with GNU compiler:
  Compile on terminal with command: gcc <filename.c>
  Execute on terminal with command: ./a.out
*/
