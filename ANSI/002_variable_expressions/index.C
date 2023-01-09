#include <stdio.h>

/*
  print Fahrenheit-Celsius table
  for fhar = 0, 20, ..., 300
  It's a comment, which can write multi lines.
  And in this case explains briefly what the program does.
  Between comment are ignored by the compiler.
*/
int main() {
  /*
    In C, all variables must be declared before they are used.
    Usually at the beginning of the function before any executable statements.
    A declaration announces the properties of variables.
  */
  int fahr, celsius;
  // The type int means that the variables listed are intergers.
  int lower, upper, step;

  // set initial value
  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  printf("fahr\tcelsius\n");
  // body will execute while it's true that testing condition
  while (fahr <= upper) {
    celsius = 5 * (fahr-32) / 9;
    // printf: general-purpose output formatting function
    // each % indicating where one of the other arguments is to be substituted
    // %d specifies an integer arguments
    // Each % construction in the first argument of printf is paired with the corresponding second argument, third ... etc;
    // they must match up properly by number and type
    // printf is not part of the C lang
    // there is no input or output defined in C itself.
    // printf is just a useful function from the standard library of functions that are normally accessible to C programs.
    printf("%d\t%d\n", fahr, celsius);
    fahr = fahr + step;
  }
}