/*
CH-230-A
a4_p7.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>

// prototyping
void f1 (int matrix[30][30],int n);
void f2 (int matrix[30][30],int n);

int main() 
{
    int matrix[30][30];
    int i, j, n;
    scanf("%d", &n); // number of rows and columns
    for(i = 0; i < n; i++) // loops for rows
    {
        for(j = 0; j < n; j++) // loops for columns
        scanf("%d", &matrix[i][j]);
    }

    // output
    printf("The entered matrix is:\n");
    f1(matrix, n); // calls matrix print function

    printf("Under the main diagonal:\n");
    f2(matrix, n); // calls under the diagonal function

    printf("\n");
    return 0;
}

void f1 (int matrix[30][30], int n) 
{
    int i,j;
    for(i = 0; i < n; i++) // prints the matrix
    {
        for(j = 0; j < n; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void f2 (int matrix[30][30], int n) 
{
    int i, j;
    for(i = 0; i < n; i++) // prints the numbers under the main diagonal
    {

        for (j = 0; j < n; j++) 
        {
            if(i > j) 
            {
                printf("%d ", matrix[i][j]);
            }
        }
    }
    
}