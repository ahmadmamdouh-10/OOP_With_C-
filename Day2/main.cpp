#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

using namespace std;

int main()
{
   Circle circle;
   circle.setRadius(3.5);
   cout<<" Circle Radius = "<<circle.getRadius()<<endl;
   cout<<" Circle Area = " <<circle.calcArea()<<endl;
   cout<<endl;

   Rectangle rec;
   rec.setHeight(5);
   rec.setWidth(7);
   cout<<" Rectangle Height = "<< rec.getHeight()<<endl;
   cout<<" Rectangle Width = "<< rec.getWidth()<<endl;
   cout<<" Rectangle Area = "<< rec.calcArea()<<endl;
   cout<<endl;

   Square square;
   square.setHeight(7);
   cout<<"Square Height = "<<square.getHeight()<<endl;
   cout<<"Square Area = "<< square.getArea()<<endl;



    return 0;
}
