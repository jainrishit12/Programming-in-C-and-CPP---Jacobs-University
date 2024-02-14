/*
CH-230-A
a7_p4.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//function prototyping
void print_upper(char array[]);
void print_lower(char array[]);
void exchange(char array[]);
void terminate(char array[]);
void (*func_arr[4])(char*) = {print_upper, print_lower, exchange, terminate};



int main(){
    char string[100];
    //reading a string
    fgets(string, sizeof(string), stdin);
    int option;
    while(1){
        //repeatedly reading a command
        scanf("%d", &option);
        getchar();
        //calling the array of function pointers
        func_arr[option - 1](string);
    }
    return 0;
}

/*the function takes a string as parameter
and returns the string in uppercase*/
void print_upper(char array[]){
    char str[strlen(array)];
    strcpy(str, array);
    for(int i = 0; i < sizeof(str); i++){
        str[i] = (char) toupper((int) str[i]);
    }
    printf("%s", str);
}

/*the function takes a string as parameter
and returns the string in lowercase*/
void print_lower(char array[]){
    char str[strlen(array)];
    strcpy(str, array);
    for(int i = 0; i < sizeof(str); i++){
        str[i] = (char) tolower((int) str[i]);
    }
    printf("%s", str);
}

/*the function takes a string as parameter
and returns the string in uppercase*/
void exchange(char array[]){
    char str[strlen(array)];
    strcpy(str, array);
    for(int i = 0; i < sizeof(str); i++){
        if (islower(str[i])){ 
        str[i] = (char) toupper((int) str[i]);
        }
        else if(isupper(str[i])){
            str[i] = (char) tolower((int) str[i]);
        }
    }
    printf("%s", str);
}

/*the function takes a string as parameter
and returns the string in uppercase*/
void terminate(char array[]){
    exit(0);
}