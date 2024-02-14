/*
CH-230-A
a4_p8.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// prototyping
void f1(int m[30][30],int n);
void f2(int m[30][30],int n);

int main()
{	
	int i, j, n, matrix[30][30];
	scanf("%d", &n); // number of rows and columns
	
	for(i = 0; i < n; i++) // loops for rows
    {
		for(j = 0; j < n; j++) // loops for columns
        {
			scanf("%d", &matrix[i][j]);
		}
	}
	
	printf("The entered matrix is:\n");
	f1(matrix, n); // calls matrix print function
	
	printf("Under the secondary diagonal:\n");
	f2(matrix, n); // calls under the secondary diagonal function
	return 0;
}

//prints matrix
void f1(int m[30][30], int n)
{	
	int i, j;
	for(i = 0; i < n; i++)
    {
		for(j = 0; j < n; j++)
        {
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
}

//prints numbers below secondary diagonal
void f2(int m[30][30],int n)
{	
	int i, j;
	for(i = 0; i < n;i++)
    {
		for(j = 0; j < n; j++)
        {
			if(i + j >= n)
            {
				printf("%d ", m[i][j]);
			}
		}
	}
	printf("\n");
}