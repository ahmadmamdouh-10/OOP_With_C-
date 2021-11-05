#include <iostream>
#include "Fraction.h"

using namespace std;

int main()
{

     Fraction f1 (5,6),f2(3,4),res;
   // f1.SetNum(5);
    //f1.SetDen(4);
    f1.display();

    //f2.SetNum(10);
   // f2.SetDen(8);
    f2.display();

    res = f1.Add(f2);
    res.display();

/*
    res = res.Add(f1,f2);   // ASk UR QUESTION
    res.display();
*/

    //cout << "Hello world!" << endl;
    return 0;
}
