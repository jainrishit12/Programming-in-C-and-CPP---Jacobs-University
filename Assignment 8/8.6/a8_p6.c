/*
CH-230-A
a8_p6.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Pointer declaration
    FILE *read1;
    FILE *read2;
    FILE *write1;

    // Variables used to store filenames
    char filename1[50];
    char filename2[50];

    // Variable declarations
    double first = 0;
    double second = 0;
    double sum = first + second;
    double product = first * second;
    double difference = first - second;
    double quotient = first / second;

    // Input
    scanf("%s", filename1);
    scanf("%s", filename2);

    // Accessing first input file
    read1=fopen(filename1, "r");
    if (read1 == NULL)
    {
        printf("Error opening first input file\n");
    }
    fscanf(read1, "%lf", &first);

    // Accessing second input file
    read2=fopen(filename2, "r");
    if (read2 == NULL)
    {
        printf("Error opening second input file\n");
    }
    fscanf(read2, "%lf", &second);

    // Accessing output file
    write1=fopen("results.txt", "w");
    if (write1 == NULL)
    {
        printf("Error opening output file\n");
    }
    
    // Output into results.txt file
    fprintf(write1, "Output of sum function is %lf", sum);
    fprintf(write1, "Output of difference function is %lf", difference);
    fprintf(write1, "Output of division function is %lf ", quotient);
    fprintf(write1, "Output of product function is %lf", product);

    // Closing files
    fclose(read1);
    fclose(read2);
    fclose(write1);

    return 0;
}