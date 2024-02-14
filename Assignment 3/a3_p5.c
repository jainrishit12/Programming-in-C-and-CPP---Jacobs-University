/*
CH-230-A
a3_p5.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);
    int n;
    scanf("%d", &n);
    
    double temp[100];

    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%lf", &temp[i]);
    }

    double sum;

    switch (c)
    {
    case 's': // sum case
        for (i = 0; i < n; i++)
        {
            sum += temp[i];
        }
        printf("%lf ", sum);
        break;

    case 'p': // array print case
        for (i = 0; i < n; i++)
        {
            printf("%lf ", temp[i]);
        }
        break;
    
    case 't': // fahrenheit conversion case
        for (i = 0; i < n; i++)
        {
            printf("%lf ", (1.8 * temp[i]) + 32);
        }
        break;
    
    default: // average case
        for (i = 0; i < n; i++)
        {
            sum += temp[i];
        }
        printf("%lf ", sum / n);
        break;
    }
        
}