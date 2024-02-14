/*
CH-230-A
a3_p6.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>

float to_pounds (int kg, int g); // function prototyping

int main() {
  // variable input
  int kg;
  scanf("%d", &kg);
  int g;
  scanf("%d", &g);
  
  float lbs = to_pounds(kg, g); // calls function
  printf("Result of conversion: %f\n", lbs); // prints float km output
  return 0;
}

float to_pounds(int kg, int g) {
  float lbs = (2.2 * (float)(kg + ((float) g / 1000)));
  // conversion to kg, followed by conversion to lbs
  return lbs; // returns float lbs
}