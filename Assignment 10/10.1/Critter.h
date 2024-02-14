/*
CH-230-A
a10_p1.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

/*
The is the explanations.txt file for a10_p1.
According to the professor's instructions, the explanations are attached as
comments in the header file.

a)

Commenting out 'using namespace std;'
This has produced 5 errors in testcritter.cpp and 4 in Critter.cpp

testcritter.cpp 
errors:
identifier "string" is undefined
identifier "cout" is undefined
identifier "endl" is undefined
identifier "getline" is undefined
identifier "cin" is undefined

Critter.cpp
errors:
identifier "string" is undefined
identifier "cout" is undefined
identifier "endl" is undefined
declaration is incompatible with "void Critter::setName(std::string &newname)"

explanation:
We are encountering these errors because we have commented out the namespace,
which means the compiler no longer knows the context and the definition of
the functions.

fix:
the alternate to 'using namespace std' is to write 'std::' every time a 
standard function is called, as follows:
std::function
this fix is currently applied in the files, so all functions have their
namespace defined now.

b)

Commenting out 'Critter::'
This has produced 2 errors

Critter.cpp
errors:
identifier "hunger" is undefined
identifier "name" is undefined

explanation:
We are encountering these errors because we have commented out the class, so the
compiler does not know the context of the identifiers anymore. Since the context
is not defined, the compiler cannot proceed.

fix:
We must always mention the name of the class, so that the context of the
function is specifically defined.
*/

#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	// getter method
	int getHunger();
	// service method
	void print();
};