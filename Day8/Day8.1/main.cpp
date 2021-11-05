#include <iostream>

using namespace std;

template <class  T1>     // T1 =   int or double or string or float or ....... etc

class Complex
{
private:
   T1 real, imagine;

public:
    void setReal(T1 _real)
    {
        real =_real;
    }

    T1 getReal()
    {
        return real;
    }

    void setImagine(T1 _imagine)
    {
        imagine =_imagine;
    }

    T1 getImagine()
    {
        return imagine;
    }

    void display()
    {
        cout<< real << "+" <<imagine <<"i"<< endl;
    }

};

int main()
{
    Complex<float> c1;
    c1.setImagine(3.5);
    c1.setReal(7.8);
    c1.display();



    return 0;
}
