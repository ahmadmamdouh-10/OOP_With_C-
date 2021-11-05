#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>

using namespace std;


class Fraction
{
   int Num , Den;
  public:
      void SetNum (int _Num)
      {
          Num = _Num;
      }

      int GetNum ()
      {
          return Num;
      }

      bool SetDen (int _Den)
      {
          if (_Den == 0)
          {

              Den = 1;
            //  cout<<"Invalid Denominator, We will replace it to 1 \n";
               return false;
          }

          else
          {
              Den = _Den;
              return true;
          }
      }

      int GetDen ()
      {
          return Den;
      }

      void display ()
      {
          cout << Num << "/" << Den << endl;
      }

      Fraction Add(Fraction f1, Fraction f2)
      {
          Fraction res;
          res.Num = (f1.Num * f2.Den) + (f2.Num * f1.Den);
          res.Den = f1.Den * f2.Den;
          return res;
      }

       Fraction Add(Fraction f1)
      {
          Fraction res;
          res.Num = (this->Num * f1.Den) + (f1.Num * this->Den);
          res.Den = this->Den * f1.Den;
          return res;
      }

      Fraction() //Constructor 1
      {
          Num = 5;
          Den = 4;
      }

      Fraction(int _Num, int _Den) //Constructor 2
      {
          Num = _Num;

           if (_Den == 0)
          {
              Den = 1;
              cout<<"Invalid Denominator.It cannot be zero, We will replace it to 1 \n";
          }
          else
          {
              Den = _Den;
          }

      }

      ~Fraction()   //Destructor
      {
          cout<< "Done, byee ^_^" <<endl;
      }
};

#endif // FRACTION_H
