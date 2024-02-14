/*
CH-230-A
a8_p7.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // File pointer declaration
    FILE *read1;
    FILE *read2;
    FILE *merge12;

    // Variable used to copy text and merge files
    char c;

    // Accessing first input file
    read1 = fopen("text1.txt", "r");
    if (read1 == NULL)
    {
        printf("Error opening first input file\n");
    }
    
    // Accessing second input file
    read2 = fopen("text2.txt", "r");
    if (read2 == NULL)
    {
        printf("Error opening second input file\n");
    }

    // Accessing output file
    merge12 = fopen("merge12.txt", "w");
    if (merge12 == NULL)
    {
        printf("Error opening output file\n");
    }
    
    // Copies text from read1 into merge12 until EOF
    while ((c = fgetc(read1)) != EOF)
    {
        fputc(c, merge12);
    }
    
    // Copies text from read2 into merge12 until EOF
    while ((c = fgetc(read2)) != EOF)
    {
        fputc(c, merge12);
    }
    
    // Closing files
    fclose(read1);
    fclose(read2);
    fclose(merge12);

    return 0;
}