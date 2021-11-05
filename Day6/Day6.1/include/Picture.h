#ifndef PICTURE_H
#define PICTURE_H
#include <Square.h>
#include <Rectangle.h>
#include <Circle.h>
#include <iostream>

class Picture
{
    private:
        Square square;
        Rectangle* rectangle;
       Circle *circlec1= new Circle[3];
    public:
    Picture(Square s , Rectangle& rec ,Circle c[3]) //constructor
    {
        square = s;
        rectangle = &rec;
        circlec1 =c;
    }

    double getAreas()                    //Function to Add All Areas of the Class after relations.
    {
        double Addition =0;             //intialization new variable to store sum of areas in.
        Addition += square.CalcArea();
        Addition += rectangle->CalcArea();
        for(int i=0;i<3;i++)
        {
            Addition+=circlec1[i].CalcArea();
        }

        return Addition;
    }

};

#endif // PICTURE_H
