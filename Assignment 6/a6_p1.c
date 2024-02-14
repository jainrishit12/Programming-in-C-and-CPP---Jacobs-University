/*
CH-230-A
a6_p1.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>

// defining swap macro
#define SWAP(x, y, z){z temp = x; x = y; y = temp; }

int main()
{
    int a;
    int b;

    // input
    scanf("%d", &a);
    scanf("%d", &b);

    // calls macro
    SWAP(a, b, typeof(a));

    double c;
    double d;

    // input
    scanf("%lf", &c);
    scanf("%lf", &d);

    // calls macro
    SWAP(c, d, typeof(c));

    // output
    printf("After swapping:\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%.6lf\n", c);
    printf("%.6lf\n", d);

    return 0;
}