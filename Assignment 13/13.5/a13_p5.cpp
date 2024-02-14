/*
CH-230-A
a13_p5.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

/*
The problem is that there is no constructor for D subclass.

To fix this, we define a new constructor for D subclass/grandchild class. Here, 
we need to specify a value for A since the constructor for A expects an int i.

Otherwise, multiple inheritance would fail.
*/

#include <iostream>
using namespace std;
 
class A
{
  int x;
public:
  A(int i) { x = i; }
  void print() { cout << x; }
};
 
class B: virtual public A
{
public:
  B():A(10) {  }
};
 
class C:  virtual public A 
{
public:
  C():A(10) {  }
};
 
class D: public B, public C {
    public:
        D() : A(7), B(), C()
        {}
};
 
int main()
{
    D d;
    d.print();
    return 0;
}