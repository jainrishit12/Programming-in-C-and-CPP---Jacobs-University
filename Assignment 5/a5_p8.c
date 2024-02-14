/*
CH-230-A
a5_p8.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// prototyping
void scan(int **first, int **second, int n, int m);
void multiply(int **first, int **second, int **third, int m);
void print(int **first, int **second, int **third, int n, int m, int p);

int main()
{
    int n, m, p, i;

    // dimensions input
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &p);

    // dynamic allocation
    int **first;
    first = (int **)malloc(sizeof(int *) * n);

    for (i = 0; i < n; i++)
    {
        first[i] = (int *)malloc(sizeof(int) * n);
    }

    int **second;
    second = (int **)malloc(sizeof(int *) * m);

    for (i = 0; i < n; i++)
    {
        second[i] = (int *)malloc(sizeof(int) * m);
    }

    int **third;
    third = (int **)malloc(sizeof(int *) * p);

    for (i = 0; i < n; i++)
    {
        third[i] = (int *)malloc(sizeof(int) * p);
    }

    // calls functions
    scan(first, second, n, m);
    multiply(first, second, third, m);
    print(first, second, third, n, m, p);

    // frees matrices
    for (i = 0; i < n; i++)
    {
        free(first[i]);
    }
    free(first);

    for (i = 0; i < m; i++)
    {
        free(second[i]);
    }
    free(second);

    for (i = 0; i < p; i++)
    {
        free(third[i]);
    }
    free(third);

    return 0;
}

void scan(int **first, int **second, int n, int m)
{
    int i, j;
    // scans each element of matrix A
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &first[i][j]);
        }
    }

    // scans each element of matrix B
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &second[i][j]);
        }
    }
}

void multiply(int **first, int **second, int **third, int m)
{
    int i, j, k;

    int sum = 0;
    // generating third matrix by multiplying
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            for (k = 0; k < m; ++k)
            {
                sum += first[i][k] * second[k][j];
            }
            third[i][j] = sum;
            sum = 0; // resetting sum
        }
    }
}

void print(int **first, int **second, int **third, int n, int m, int p)
{
    int i, j;
    printf("Matrix A:\n");
    // prints matrix A
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", first[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B:\n");
    // prints matrix B
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", second[i][j]);
        }
        printf("\n");
    }

    printf("The multiplication result AxB:\n");
    // prints output matrix
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", third[i][j]);
        }
        printf("\n");
    }
}