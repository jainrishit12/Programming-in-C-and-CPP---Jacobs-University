/*
CH-230-A
a5_p11.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>

// prototyping
int prime(int n, int i);
 
int main()
{
    int n;
    int x;

    scanf("%d", &n);
    if (n <= 1) // for 0 and 1
    {
        printf("%d is not prime\n", n);
    }

    else
    {
        x = prime(n, n / 2); // calls function
        
        if (x == 1) // for when 1 is returned
    {
        printf("%d is prime\n", n);
    }

    else // 0 returned
    {
        printf("%d is not prime\n", n);
    }

    return 0;
    }
}
 
int prime(int n, int i)
{
    if (i == 1) // for n = 2
    {
        return 1;
    }

    else
    {
       if (n % i == 0) // for composite numbers
       {
            return 0;
       }

       else
       {
            return prime(n, i - 1); // for primes
       }       
    }
}