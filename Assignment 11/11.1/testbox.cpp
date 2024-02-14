/*
CH-230-A
a11_p1.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <iostream>
#include "Box.h"

using namespace std;

int main()
{
    int nboxes; //variable to hold nboxes
    double height,width,depth;

    cout<<"Enter number of boxes : "; //prompt for input
    cin>>nboxes;
    nboxes*=2; //multiply by 2

    Box** boxObjArray=new Box*[nboxes]; //create a dynamic array of box class
    Box Obj; //a object of box class

    for(int i=0;i<nboxes;i++)
    {

        cout<<"Object "<<(i+1)<<" Height : ";
        cin>>height; //get input
        Obj.Setheight(height); //set height
        cout<<"Object "<<(i+1)<<" width : ";
        cin>>width;
        Obj.Setwidth(width); //set width
        cout<<"Object "<<(i+1)<<" Depth : ";
        cin>>depth; //set width
        Obj.Setdepth(depth);
        //call copy constructor
        boxObjArray[i]=new Box(Obj);

    }
    //print volume
    for(int i=0;i<nboxes;i++)
    {
        //calculate volume and print
        cout<<"Volume of Box "<<(i+1)<<" : "<<boxObjArray[i]->calculateVolume()
        <<endl;
    }


    return 0;
}