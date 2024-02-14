/*
CH-230-A
a3_p8.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>

float sum(float arr[], int size);
float average(float sum, int size);

int main()
{
    // request input to array
    float arr[10];
    printf("Please enter values:\n");

    // auxiliary variables
    int count;
    float temp;

    // input loop
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &temp);

        if (temp != -99.0)
        {
            arr[i] = temp;
            count++;
        }
        // breaks loop when -99.0 is entered
        else
        {
            break;
        }
    }
    
    printf("The current array is:\n");

    // output loop
    for (int i = 0; i < count; i++)
    {
        printf("%f\n", arr[i]);
    }

    printf("End of input loop, executing operations.\n");

    // sum function call to initialise sumv variable
    float sumv = sum(arr, count);
    printf("Sum: %f\n", sumv);

    // average function call to initialise avg variable
    float avg = average(sumv, count);
    printf("Average: %f\n", avg);

    printf("End of Program.\n");

    return 0;
}

// function goes through each element of array and adds to sum variable
float sum(float arr[], int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    
    return sum;
}

// function uses already defined sum variable and divides by number of elements
float average(float sum, int size)
{
    return ((float)sum / size);
}