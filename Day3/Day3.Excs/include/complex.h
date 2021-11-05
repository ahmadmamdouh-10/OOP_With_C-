#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

using namespace std;

class complex
{
  int Real , Imagine;
  public:
      void SetReal (int _Real)
      {
          Real = _Real;
      }

      int GetReal ()
      {
          return Real;
      }

      void SetImagine (int _Imagine)
      {
          Imagine = _Imagine;
      }

      int GetImagine ()
      {
          return Imagine;
      }

      void display ()
      {
          cout << Real << "+" << Imagine << "i" << endl;
      }

      complex Addcomplex(complex c1, complex c2)
      {
          complex res;
          res.Real = c1.Real + c2.Real;
          res.Imagine = c1.Imagine + c2.Imagine;
          return res;
      }

       complex Addcomplex(complex c1)
      {
          complex res;
          res.Real = this->Real + c1.Real;
          res.Imagine = this->Imagine + c1.Imagine;
          return res;
      }



};

#endif // COMPLEX_H
