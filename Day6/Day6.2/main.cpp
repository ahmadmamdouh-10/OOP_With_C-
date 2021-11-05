#include <iostream>

using namespace std;

class shape
{
protected:
    double Dim;
public:
   shape(double _dim=1) //constructor
   {
       Dim=_dim;
   }
   void setDim(double _dim)
   {
       Dim=_dim;
   }
   double getDim()
   {
       return Dim;
   }
   double calcArea()
    {
        return 0;
    }
};

class square : public shape
{
public:


    double calcArea()
    {
        return Dim*Dim;
    }
};

class rect : public shape
{
private:
    double Dim2;
public:
     rect(double _dim=1, double _dim2=1):shape{}
     {
         Dim=_dim;
         Dim2=_dim2;
     }
     void setDim2(double _dim2)
     {
         Dim2=_dim2;
     }

     double getDim2()
     {
         return Dim2;
     }

     double calcArea()
     {
         return Dim*Dim2;
     }

};

class circle:public shape
{
public:
    double calcArea()
    {
        return Dim*Dim*3.14;
    }
};

int main()
{
    square s;
    s.setDim(7);
    double x= s.calcArea();
    cout<< "Area of Square= "<< x <<endl;

    rect r(5,4);
    x=r.calcArea();
    cout<< "Area of Rectangle= "<< x <<endl;

    circle c;
    c.setDim(15);
    x=c.calcArea();
    cout<< "Area of Circle= "<< x <<endl;

    return 0;
}
