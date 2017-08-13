#include <stdio.h>

// \n is line break
void printBasicFunction() {
  printf("Basic Function \n");
}

void printString() {
  printf("Basic String %s \n", "sample string");
}

void printInteger() {
  printf("Basic String %i \n", 5);
}

void printFloat() {
  //.xf the is a number that represents of decimal precision
  printf(" %f \n", 5.0);
  printf(" %.2f \n", 5.0);
  printf(" %.4f \n", 5.0);
}

void printMultipleValues() {
  printf("%f %d %s", 3.0, 3, "testing");
}

