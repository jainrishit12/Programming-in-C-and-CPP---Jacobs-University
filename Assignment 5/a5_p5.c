/*
CH-230-A
a5_p5.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// prototyping
double scalarProd(double* x, double* y, int size);
void findmax(double* arr, int dim);
void findmin(double* arr, int dim);

int main() 
{
    int n; // number of loops
    scanf("%d", &n);

    //vectors
    double* x;
    double* y;

    //dynamic allocation
    x = (double*) malloc(sizeof(double) * n);
    y = (double*) malloc(sizeof(double) * n);

    //input loop
    for (int i = 0; i < n; i++) {
        scanf("%lf", &x[i]);
    }

    for (int i = 0; i < n; i++) {
        scanf("%lf", &y[i]);
    }

    // calls functions and prints output
    printf("Scalar product=%lf\n", scalarProd(x, y, n));

    // min and max for first array
    findmin(x, n);
    findmax(x, n);
    
    //min and max for second array
    findmin(y, n);
    findmax(y, n);

    // frees arrays
    free(x);
    free(y);

    return 0;
}


double scalarProd(double* x, double* y, int size) // vector multiplication
{
    double product;
    double sum = 0;
    for (int i = 0; i < size; i++) 
    {
        product = x[i] * y[i];
        sum += product;
    }
    return sum;
}

void findmax(double* arr, int size) // finds largest element in array
{
    float max = arr[0];
    int pos = 0;
    for (int i = 1; i < size; i++) 
    {
        if(arr[i] > max) 
        {
            max = arr[i];
            pos = i;
        }
    }
    printf("The largest = %lf\n", max);
    printf("Position of largest = %d\n", pos);
}

void findmin(double* arr, int size) // finds smallest in array
{
    float min = arr[0];
    int pos = 0;
    for (int i = 1; i < size; i++) 
    {
        if(arr[i] < min) 
        {
            min = arr[i];
            pos = i;
        }
    }
    printf("The smallest = %lf\n", min);
    printf("Position of smallest = %d\n", pos);
}