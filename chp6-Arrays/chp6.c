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

  printf("\n\n");

  // Exercise 6.04
  printf("---------------\n");
  printf("Exercise 6.04\n\n");

  printf("\n\n");

  // Exercise 6.05
  printf("---------------\n");
  printf("Exercise 6.05\n\n");

  printf("\n\n");

  // Exercise 6.06
  printf("---------------\n");
  printf("Exercise 6.06\n\n");

  printf("\n\n");

  // Exercise 6.07
  printf("---------------\n");
  printf("Exercise 6.07\n\n");

  printf("\n\n");

  // Exercise 6.08
  printf("---------------\n");
  printf("Exercise 6.08\n\n");

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

/*
  To compile and run with GNU compiler:
  Compile on terminal with command: gcc <filename.c>
  Execute on terminal with command: ./a.out
*/
