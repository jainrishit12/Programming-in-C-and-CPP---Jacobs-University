#include <iostream>

using namespace std;

int main()
{
    int a = 11;
    int *ptr_a = &a;
    // pointer ptr_a gets the value of a

    cout << a << endl;
    cout << ptr_a << " holds the value " << *ptr_a;

    return 0;
}