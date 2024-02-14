/*
CH-230-A
a4_p10.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//prototyping
void proddivpowinv (float a, float b, float *prod, float *div, float *pwr, 
float *invb);

int main()
{
    float a, b;
    scanf("%f %f", &a, &b); // input
    float p, d, pow, inv;

    // calls function that returns by reference
    proddivpowinv(a, b, &p, &d, &pow, &inv); 
    printf("%f %f %f %f", p, d, pow, inv); 
    return 0;
}

void proddivpowinv (float a, float b, float *prod, float *div, float *pwr, 
float *invb)
{
    // computation using reference
    *prod = a * b; 
    *div = a / b;
    *pwr = pow(a, b);
    *invb = (float) 1 / b;
}