/*
CH-230-A
a3_p9
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>

double sum25 (double v[], int n);

int main()
{
    // variable input
    int n;
    scanf("%d", &n);
    double v[20];
    
    for (int i = 0; i < n; i++) // loops n times
    {
        scanf("%lf", &v[i]);
    }
    
    int arrayLength = sizeof(v)/ sizeof (v[0]);
    if (arrayLength < 5) // check validity
    {
        printf("One or both positions are invalid\n"); // error case
        return -111;
    }
    else
    {
        sum25 (v, n); // calls function
    }
    return 0;
}

double sum25 (double v[], int n)
{
    printf("sum=%lf\n", v[2] + v[5]); 
    // sum of v[2] and v[5] // sums v[2] and v[5]
}