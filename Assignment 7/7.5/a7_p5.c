/*
CH-230-A
a7_p5.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdlib.h>
#include <stdio.h>

//defining pointer to a function
int (*func_ptr)(const void * a, const void *b);

//the function compares two elements
int compare(const void * a, const void *b){ //function is ued to compare two elements
    return (*(int*)a - *(int*)b);
}

//main function
int main()
{
    int n, i = 0;
    scanf("%d", &n);
    int a[n];
    char ch ='a';

    // Input loop
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    
    // endless loop for commands
    while(1){
        //reading characters a,d, or e
        scanf("%c", &ch);
        //calling the function pointer
        func_ptr = &compare;
        //using qsort for sorting
        qsort(a, n, sizeof(int), func_ptr);
        //sorting in ascending order if the char is a 
        if(ch == 'a'){
            for(i = 0; i < n; i++){
                //printing the elements from start
                printf("%d ", a[i]);
            }
            printf("\n");
        }
        else if(ch == 'd'){
            //sorting in descending order if the char is d
            for(i = n-1; i >= 0; i--){
                //printing the elements from the end of array
                printf("%d ", a[i]);
            }
            printf("\n");
        }
        else if(ch == 'e'){
            //terminating the loop if e is entered
            break;
        }
    }
    return 0;
}