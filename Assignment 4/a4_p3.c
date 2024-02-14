/*
CH-230-A
a4_p3.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

// function prototyping
float geometric_mean (float arr[], int num);
float highest (float arr[], int num);
float lowest (float arr[], int num); 
float sum_all (float arr[], int num);

int main()
{
    float temp;
    float array[15];
    int size;

    printf("Please enter array elements:\n");
    for (int i = 0; i < sizeof(array); i++) 
    {
        scanf("%f", &temp);
        if (temp < 0)
        {
            printf("End of input loop.\n");
            break;
        }
        array[i] = temp;
        size++;
    }

    char ch;
    printf("Please enter command:\n");
    getchar();
    scanf("%c", &ch);
    printf("You selected: ");
    

    float output;

    switch (ch)
    {
    case 'm': // geometric mean
        printf("geometric mean function\n");
        output = geometric_mean(array, size);
        printf("Result of computation: %f", output);
        break;

    case 'h': // return highest
        printf("highest function\n");
        output = highest (array, size);
        printf("Result of computation: %f", output);
        break;

    case 'l': // return lowest
        printf("lowest function\n");
        output = lowest (array, size);
        printf("Result of computation: %f", output);
        break;

    case 's': // sum all
        printf("sum all function\n");
        output = sum_all (array, size);
        printf("Result of computation: %f", output);
        break;    

    default:
        printf("Error\n");
        break;
    }
    
    return 0;
}

float geometric_mean (float arr[], int num)
{
    float sum;
    for (int i = 0; i < num; i++)
    {
        sum += arr[i];
    }
    float mean = pow (sum, (float)1 / num); // calculates geo mean
    return mean;
}

float highest (float arr[], int num)
{
    float max = arr[0];
    for (int i = 0; i < num; i++)
    {
        if (arr[i] > max) // compares all elements to find highest
        {
            max = arr[i];
        }
    }
    return max;
}

float lowest (float arr[], int num)
{
    float min = arr[0];
    for (int i = 0; i < num; i++) 
    {
        if (arr[i] < min) // compares all elements to find lowest
        {
            min = arr[i];
        }
    }
    return min;
}

float sum_all (float arr[], int num)
{
    float sum;
    for (int i = 0; i < num; i++)
    {
        sum += arr[i]; // sums all elements
    }
    return sum;
}