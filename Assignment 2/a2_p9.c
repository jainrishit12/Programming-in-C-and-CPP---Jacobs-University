/*
CH-230-A
a2_p9.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>

int main() {
  char a;
  scanf("%c", &a);

  if ((48 <= a) && (a <= 57)) // range defining digits in ASCII
  {
    printf("%c is a digit\n", a);
  }

  else if (((65 <= a) && (a <= 90)) || ((97 <= a) && (a <= 122))) // range defining upper and lower case letters in ASCII
  {
    printf("%c is a letter\n", a);
  }

  else // for all other cases
  {
    printf("%c is some other symbol\n", a);
  }

  return 0;
}