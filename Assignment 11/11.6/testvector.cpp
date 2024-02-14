/*
CH-230-A
a11_p6.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

#include "Vector.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    double a1[3] = {3.0, 4.0, 5.0};
    double a2[3] = {8.0, 9.0, 2.0};
    double a3[3] = {6.0, 3.0, 7.0};

    // calling constructors
    Vector v1(3, a1);
    // calling constructors
    Vector v2(3, a2);
    //copying
    Vector v3(v2);
    // parametric
    Vector v4(3, a3);

    // Outputting current vectors
    cout << "V1:" << endl;
    v1.print();
    cout << "V2:" << endl;
    v2.print();
    cout << "V3:" << endl;
    v3.print();
    cout << "V4:" << endl;
    v4.print();

    // outputting desired details
    cout << "Norm of V2:" << endl;
    cout << v2.norm() << endl << endl;

    cout << "Scalar Product of V2 and V4:" << endl;
    cout << v2.scalarProd(v4) << endl << endl;

    cout << "Addition of V2 and V4:" << endl;
    (v2.add(v4)).print();
    // print service method call on vector type

    cout << "Difference of V2 and V4:" << endl;
    (v2.diff(v4)).print();
    // print service method call on vector type

    cout << "End of Program, terminating." << endl;
    return 0;
}