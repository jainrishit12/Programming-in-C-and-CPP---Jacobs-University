/*
CH-230-A
a4_p12.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//prototyping
void replaceAll(char *str, char c, char e);

int main(){
    
	char str[80], c, e;
	while(1)
    {
		//string input
		fgets(str, sizeof(str), stdin);
		str[strlen(str) - 1] = '\0';
		
        // using string comparison to stop when 'stop' is typed
		if(strcmp(str, "stop") == 0)
        {
			break;
		}
		//char input
		scanf("%c",&c);
		getchar();
		scanf("%c",&e);
		
		printf("All '%c' are changed to '%c' \n", c, e);
		printf("The string first was : %s\n", str); // prints original
	
		replaceAll(str,c,e); // calls function
		printf("The string now is : %s\n", str); // output
		getchar();
	}
	
	return 0;
}

void replaceAll(char *str, char c, char e){
	int i;
	for(i = 0;i < strlen(str); i++) // loops for entire length
    {
		if(str[i] == c)
        {
			str[i] = e; //replaces char c with char e 
		}
	}
}