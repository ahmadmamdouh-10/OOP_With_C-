#include <iostream>

using namespace std;

class shape               // Using virtual function ==> let me overriding
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
   virtual double calcArea()=0;

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

class Picture
{
    private:
        shape* sh[3];

    public:
        Picture()
        {

        }

        void SetShape(shape* _sh[])
        {
            for(int i=0;i<3; i++)
            {
                sh[i]=_sh[i];
            }
        }

    double calcAreas()
    {
        double sum =0;
        for(int i=0;i<3;i++)
        {
            sum+=this->sh[i]->calcArea();
        }
        return sum;
    }
};

int main()
{

    shape* sh[3];

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

    cout<<"============================"<<endl;

    sh[0]= &s;
    sh[1]= &r;
    sh[2]= &c;

    Picture pic;
    pic.SetShape(sh);
    cout<< pic.calcAreas()<<endl;

    return 0;
}
