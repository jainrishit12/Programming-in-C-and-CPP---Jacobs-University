/*
CH-230-A
a11_p1.h
Rishit Jain
ri.jain@jacobs-university.de
*/
#ifndef Box_h
#define Box_h
#include <iostream>
using namespace std;

class Box
{
    public:
        /** Default constructor */
        Box();
        /** Default destructor */
        ~Box();
        /** Copy constructor
         *  \param other Object to copy from
         */
        Box(const Box& other);

        /** Access height
         * \return The current value of height
         */
        double Getheight() 
        {
            return height; 
        }
        /** Set height
         * \param val New value to set
         */
        void Setheight(double val) 
        {
            height = val;
        }
        /** Access width
         * \return The current value of width
         */
        double Getwidth() 
        {
            return width;
        }
        /** Set width
         * \param val New value to set
         */
        void Setwidth(double val)
        {
            width = val;
        }
        /** Access depth
         * \return The current value of depth
         */
        double Getdepth() 
        {
            return depth;
        }
        /** Set depth
         * \param val New value to set
         */
        void Setdepth(double val)
        {
            depth = val;
        }

        double calculateVolume(); //return volume of box height*width*depth

    private:
        double height; //!< Member variable "height"
        double width; //!< Member variable "width"
        double depth; //!< Member variable "depth"
};

#endif // Box_h