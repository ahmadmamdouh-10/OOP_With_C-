#include <iostream>
#include "complex.h"

using namespace std;

int main()
{
    complex c1, c2, res;
    c1.SetReal(5);
    c1.SetImagine(4);
    c1.display();

    c2.SetReal(10);
    c2.SetImagine(8);
    c2.display();

    res = c1.Addcomplex(c2);
    res.display();


  //  cout << "Hello world!" << endl;
    return 0;
}
