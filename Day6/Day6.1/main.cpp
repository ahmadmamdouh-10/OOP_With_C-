#include <iostream>
#include <Square.h>
#include <Rectangle.h>
#include <Circle.h>
#include<Picture.h>

using namespace std;

int main()
{
    Square square;           //get an object from the class
    square.setHeight(7);     // set height of object
    cout<<" The Height of Square = "<<square.getHeight()<<endl;   //print out the height by call getHeight public function
    cout<<" The Area of Square = "<<square.CalcArea()<<endl;      // print out the Area by call CalcArea public function
    cout<<endl;  //just get a space of new line for clear reading

    Rectangle rec;           //get an object from the class
    rec.setHeight(5);        // set height of object
    rec.setWidth(7);         // set Width of object
    cout<<" The Rectangle Height is = "<<rec.getHeight()<<endl;    //print out the height by call getHeight public function
    cout<<" The Rectangle Width  is = "<<rec.getWidth()<<endl;     //print out the width by call getwidth public function
    cout<<" Rectangle Area = "<<rec.CalcArea()<<endl;              //print out the Area by call CalcArea public function
    cout<<endl;     //just get a space of new line for clear reading

    Circle circle;            //get an object from the class
    circle.setRadius(6.5);       // set radius of object
    cout<<"  The Circle's Radius = "<<circle.getRadius()<<endl;   //print out the radius by calling getradius public fundtion
    cout<<" The Area of Circle = "<<circle.CalcArea()<<endl<<endl;  //print out the Area by calling CalcArea public function

    Circle *circl= new Circle[3];      //Create a pointer of Class Circle in the Stack and make it look at Array of object circle contains of 3 elements.
    for(int i=0;i<3;i++)               // for loop to set Radius for these 3 Elements array objects
    {
        circl[i].setRadius(2);
    }

    Picture p(square,rec,circl);        // Create an object from the class
    double area = p.getAreas();         // get the Area of Class by calling getAreas public function
    cout<<" The Area of Picture = "<<area<<endl;          //print it out

    return 0;
}
