//
// stdLibMath.c
// Bonus-Other
//
// Created by @HKuz on 3/21/17
// Exercises to practice using C Standard Library <math.h>
//

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  /*
    Library Functions:
    double acos(double x) - Returns the arc cosine of x in radians.
    double asin(double x) - Returns the arc sine of x in radians.
    double atan(double x) - Returns the arc tangent of x in radians.
    double atan2(double y, double x) - Returns the arc tangent in radians of y/x
      based on the signs of both values to determine the correct quadrant.
    double cos(double x) - Returns the cosine of a radian angle x.
    double cosh(double x) - Returns the hyperbolic cosine of x.
    double sin(double x) - Returns the sine of a radian angle x.
    double sinh(double x) - Returns the hyperbolic sine of x.
    double tanh(double x) - Returns the hyperbolic tangent of x.
    double exp(double x) - Returns the value of e raised to the xth power.
    double frexp(double x, int *exponent) - The returned value is the mantissa
      and the integer pointed to by exponent is the exponent. The resultant value is x = mantissa * 2 ^ exponent.
    double ldexp(double x, int exponent) - Returns x multiplied by 2 raised to
      the power of exponent.
    double log(double x) - Returns the natural logarithm (base-e logarithm) of x.
    double log10(double x) - Returns the common logarithm (base-10 logarithm) of x.
    double modf(double x, double *integer) - The returned value is the fraction
      component (part after the decimal), and sets integer to the integer component.
    double pow(double x, double y) - Returns x raised to the power of y.
    double sqrt(double x) - Returns the square root of x.
    double ceil(double x) - Returns the smallest integer value greater than or
      equal to x.
    double fabs(double x) - Returns the absolute value of x.
    double floor(double x) - Returns the largest integer value less than or equal to x.
    double fmod(double x, double y) - Returns the remainder of x divided by y.
  */

  // Test variables
  double a = 2;
  double b = 7;
  double c = 5.134576;
  double d = -6.78143;

  // Examples
  printf("PI in math.h is %f.\n", M_PI);
  double cosiney = cos(M_PI);
  printf("COS: The cosine of radian angle %g is %g.\n", M_PI, cosiney);
  double siney = sin(M_PI);
  printf("SIN: The sine of radian angle %g is %g.\n", M_PI, siney);
  double expy = exp(a);
  printf("EXP: e raised to the %gnd power is %g.\n", a, expy);
  double power = pow(a, b);
  printf("POW: %g raised to the %gth power is %g.\n", a, b, power);
  double root = sqrt(b);
  printf("SQRT: The square root of %g is %g.\n", b, root);
  double loggy = log(b);
  printf("LOG: The natural log of %g is %g.\n", b, loggy);
  double logTen = log10(b);
  printf("LOG10: The log (base 10) of %g is %g.\n", b, logTen);
  double ceiling = ceil(c);
  printf("CEIL: The largest integer value >= to %g is %g.\n", c, ceiling);
  double floory = floor(c);
  printf("FLOOR: The largest integer value <= to %g is %g.\n", c, floory);
  double fabsy = fabs(d);
  printf("FABS: The absolute value of %g is %g.\n", d, fabsy);
  double moddy = fmod(b, a);
  printf("FMOD: The remainder of %g divided by %g is %g.\n", b, a, moddy);

  return 0;
}


/*
  To compile and run with GNU compiler:
  Compile on terminal with command: gcc <filename.c>
  Execute on terminal with command: ./a.out
*/
