//
// chp5.c
// chp5-Decisions
//
// Created by @HKuz on 2/3/17
// Exercises from Chapter 5: Making Decisions
//

#include <stdio.h>
#include <stdbool.h>


// Function Prototypes
int checkDivisibility(void);
int showDivision(void);
int printCalculator(void);
int reverseDigits(void);
int numWords(void);
int primes(void);


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
  printCalculator();
  printf("\n\n");

  // Exercise 5.05
  printf("---------------\n");
  printf("Exercise 5.05\n\n");
  reverseDigits();
  printf("\n\n");

  // Exercise 5.06
  printf("---------------\n");
  printf("Exercise 5.06\n\n");
  numWords();
  printf("\n\n");

  // Exercise 5.07
  printf("---------------\n");
  printf("Exercise 5.07\n\n");
  primes();
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

int printCalculator(void) {
  // Asks user for number and operator, prints running calculation
  // Valid operators: +, -, *, /, S (set), E (evaluate or end)

  // Initialize variables
  float number;
  char operator = 'S';
  float accumulator = 0.0;

  printf("Begin Calculations\n\n");

  while (operator != 'E' && operator != 'e') {
    printf("Enter a number and operator (+, -, *, /, S to set, E to end): ");
    scanf("%f %c", &number, &operator);

    switch (operator) {
      case 'S':
      case 's':
        accumulator = number;
        printf("= %f\n", accumulator);
        break;
      case '+':
        accumulator += number;
        printf("= %f\n", accumulator);
        break;
      case '-':
        accumulator -= number;
        printf("= %f\n", accumulator);
        break;
      case '*':
      case 'x':
      case 'X':
        accumulator *= number;
        printf("= %f\n", accumulator);
        break;
      case '/':
        if (number == 0) {
          printf("Division by zero!\n");
        } else {
          accumulator /= number;
          printf("= %f\n", accumulator);
        }
        break;
      case 'E':
      case 'e':
        printf("= %f\n\n", accumulator);
        printf("End Calculations\n\n");
        break;
      default:
        printf("Unknown operator.\n");
        break;
    }

  }

  return 0;
}

int reverseDigits(void) {
  // Asks user for integer, and reverses digits of that number

  int number, right_digit;
  char sign = '-';
  _Bool isNegative = 0;

  printf("Enter your number and have it reversed: ");
  scanf("%i", &number);

  if (number < 0) {
    isNegative = 1;
    number *= -1;
  }

  do {
    right_digit = number % 10;
    printf("%i", right_digit);
    number /= 10;
  } while(number != 0);

  if (isNegative) {
    printf("%c", sign);
  }

  printf("\n");

  return 0;
}

int numWords(void) {
  // Asks user for an integer, outputs the word form of each digit

  int places = 0, digit;
  double number;

  printf("Enter an integer and get the digits read in words: ");
  scanf("%lf", &number);

  if (number < 0) {
    printf("negative ");
    number *= -1;
  }

  if (number == 0) {
    printf("zero");
    return 0;
  }

  // Get how many places in the number and make it a decimal
  while (number >= 1) {
    number /= 10;
    places++;
  }

  for (; places > 0; places--) {
    number *= 10;
    digit = (int) number;
    number -= digit;

    switch (digit) {
      case 0:
        printf("zero ");
        break;
      case 1:
        printf("one ");
        break;
      case 2:
        printf("two ");
        break;
      case 3:
        printf("three ");
        break;
      case 4:
        printf("four ");
        break;
      case 5:
        printf("five ");
        break;
      case 6:
        printf("six ");
        break;
      case 7:
        printf("seven ");
        break;
      case 8:
        printf("eight ");
        break;
      case 9:
        printf("nine ");
        break;
      default:
        printf("Digit error!");
        break;
    }
  }

  printf("\n");

  return 0;
}

int primes(void) {
  // Generates a table of prime numbers

  int p, d;
  bool isPrime;
  printf("Prime numbers up to 50:\n");
  printf("2   ");

  for (p = 3; p <= 50; p += 2) {
    isPrime = true;

    for (d = 3; isPrime, d < p; d += 2) {
      if (p % d == 0) {
        isPrime = false;
      }
    }

    if (isPrime) {
      printf("%i   ", p);
    }
  }

  printf("\n");

  return 0;
}


/*
  To compile and run with GNU compiler:
  Compile on terminal with command: gcc <filename.c>
  Execute on terminal with command: ./a.out
*/
