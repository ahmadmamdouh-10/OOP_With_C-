#include <iostream>
#include "Fraction.h"

using namespace std;

ostream& operator<< (ostream& output, Fraction& f2)
{
    output << f2.Num << "/" << f2.Den <<endl;
    return output;
}

istream& operator >> (istream& input, Fraction& f2)
{
    input >> f2.Num >> f2.Den;
    return input;
}

int main()
{

     Fraction f1 (5,2),f2(4,8),res;
   // f1.SetNum(5);
    //f1.SetDen(4);
    f1.display();

    //f2.SetNum(10);
   // f2.SetDen(8);
    f2.display();

    res = f1.Add(f2);
    res.display();

   // res.arr[2]=5;
    //res.display();


 //  Fraction f3 = res;
   // res.display();






















/*      double x = f1;              //Casting from fraction to double

    res = f1 - f2;                 //operator (-)
    res.display();
    res = --f1;                   //prefix
    res.display();
    res = f1--;                  //postfix
    res.display();

  cout << x <<endl;

    if  (f1 == res)            //operator (==)
        cout << "true" <<endl;
    else
        cout << "false"<<endl;

    res = f1;
    res.display();

    cin >> f2;                  //cin.operator>>(f1) //istream
    cout << f2;                //cout.operator<<(f1) //ostream

*/







/*
    res = res.Add(f1,f2);   // ASk UR QUESTION
    res.display();
*/

    //cout << "Hello world!" << endl;
    return 0;
}
