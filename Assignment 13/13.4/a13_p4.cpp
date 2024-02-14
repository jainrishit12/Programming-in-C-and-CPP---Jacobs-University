/*
CH-230-A
a13_p4.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

/*
The error found is: "["D::print" is ambiguous]".

The problem is encountered because print() function is inside A class, and
inherited by B and C subclasses. These sub-classes are further used to make the
D sub-class. Therefore, the compiler doesn't know which call we are referring
to, even though they are technically the same function.

To fix this, we can make the inheritance virtual. This ensures that only one
copy of the base class's member variables are inherited by grandchild derives
classes.

The output will be 20 since setX(20) inside C subclass was called last.
*/

#include <iostream>
using namespace std;
 
class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};
 
class B: virtual public A
{
public:
  B()  { setX(10); }
};
 
class C: virtual public A  
{
public:
  C()  { setX(20); }
};
 
class D: public B, public C {
};
 
int main()
{
    D d;
    d.print();
    return 0;
}