#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>

using namespace std;


class Fraction
{
   int Num , Den;
  public:
     int *arr; // in public to avoid setter and getter functions

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
          cout << "your Array is = " << arr<<endl;
      }

     static Fraction Add(Fraction f1, Fraction f2)
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

      Fraction() //Constructor 1 default
      {
          Num = 5;
          Den = 4;
          arr = new int [2];
      }

      Fraction(int _Num, int _Den) //Constructor 2 arr[]
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

      Fraction operator-(Fraction f2) // operator (-)
      {
         Fraction res;
          res.Num = (this->Num * f2.Den) - (f2.Num * this->Den);
          res.Den = this->Den * f2.Den;
          return res;
      }

      Fraction operator-- ()       //prefix
      {
          this->Num--;
          this->Den--;
          return *this;
      }

      Fraction operator--(int)      //postfix
      {
          Fraction temp = *this;
          this->Num--;
          this->Den--;

          return temp;
      }


      operator double ()     //Casting
      {
        double Num = this->Num;
        double Den = this-> Den;
        return Num/Den;
      }

      bool operator == (Fraction f2)  //operator (==)
      {
          return Num == f2.Num && Den == f2.Den;
      }

      Fraction (Fraction& f2)
      {
          Num = f2.Num;
          Den = f2.Den;
          arr = new int [2];
          for (int i = 0; i<2; i++)
          {
              arr[i]=f2.arr[i];
          }
      }

      Fraction abc (Fraction f2)
      {
          f2.arr[0]=10;
      }

      friend ostream& operator << (ostream& output, Fraction& f2);
      friend istream& operator >> (istream& input, Fraction& f2);


      ~Fraction()   //Destructor
      {
          delete arr;
      }



};

#endif // FRACTION_H
