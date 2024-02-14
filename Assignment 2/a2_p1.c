/*
CH-230-A
a2_p1.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>

int main () {
    // Double input
    double a, b;
    scanf("%lf", &a);
    scanf("%lf", &b);
    getchar();
    
    // Double output
    printf("sum of doubles=%lf\n", a+b);
    printf("difference of doubles=%lf\n", a-b);
    printf("square=%lf\n", a*a);
    
    // Integer input
    int c, d;
    scanf("%d", &c);
    getchar();
    scanf("%d", &d);
    getchar();
    
    // Integer output
    printf("sum of integers=%d\n", c+d);
    printf("product of integers=%d\n", c*d);
    
    // Char input
    char e, f;
    scanf("%c", &e);
    getchar();
    scanf("%c", &f);
    
    // Char output
    printf("sum of chars=%d\n", (int)e + (int)f);
    printf("product of chars=%d\n", (int)e * (int)f);
    
    printf("sum of chars=%c\n", e + f);
    printf("product of chars=%c\n", e * f);
    
    return 0;}