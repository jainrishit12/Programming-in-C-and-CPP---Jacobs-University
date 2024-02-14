/*
CH-230-A
a13_p7.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include <stdexcept>
#include <exception>

using namespace std;

// class definition
class OwnException: public exception
{
    public:
        OwnException(const char*)
        {
        }
        const char* what()
        {
            return "OwnException\n";
        }
};

// function definition
void throw_exception(int excp)
{
    switch(excp)
    {
        case 1:
            throw 'a';
            break;

        case 2:
            throw 12;
            break;
            
        case 3:
            throw true;
            break;

        default:
            throw OwnException("Default case exception");
            break;
    }
}

int main() {
	// throws error 4 times and catches
	for (int i = 1; i < 5; i++)
    {
	    try
        {
	        throw_exception(i);
	    }

        catch (bool exc)
        {
	        cerr << "Caught in main: " << exc << endl;
	    }

	    
		catch (char exc)
        {
	        cerr << "Caught in main: " << exc << endl;
	    }

	    catch (int exc)
        {
	        cerr << "Caught in main: " << exc << endl;
	    }

        catch (OwnException& exc)
        {
	        cerr << "Caught in main: " << exc.what();
	    }

	}
	
    return 0;
}