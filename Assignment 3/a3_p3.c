/*
CH-230-A
a3_p3.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>

float convert (int cm); // function prototyping

int main() {
  int cm;
  scanf("%d", &cm); // variable input
  float km = convert(cm); // calls function
  printf("Result of conversion: %f\n", km); // prints float km output
  return 0;
}

float convert(int cm) {
  float km = (float) cm / (1000*100); // conversion from int cm to float km
  return km; // returns float km
}