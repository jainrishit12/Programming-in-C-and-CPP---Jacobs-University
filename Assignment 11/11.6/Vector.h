/*
CH-230-A
a11_p6.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

using namespace std;

class Vector
{
    private:
        int size;
        double* vector;

    public:
        // constructors
        Vector();
        Vector(const int, const double*);
        // copy constructor
        Vector(const Vector&);

        //destructor
        ~Vector();

        // setter methods
        void setSize(const int);
        void setVector(const double*);

        // getter methods
        int getSize();
        double* getVector();

        // service methods
        void print() const;

        // vector operation functions
        Vector add(const Vector) const;
        Vector diff(const Vector) const;
        double norm();
        double scalarProd(const Vector) const;
};