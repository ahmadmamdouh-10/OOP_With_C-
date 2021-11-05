#include <iostream>

using namespace std;

int main()
{
    double num1,num2;
    char operatorr;

    cout<< "Enter First Number"<<endl;
    cin>> num1;

    cout<< "Enter The Operator (+ , - , / , *)" <<endl;
    cin>>operatorr;

    cout<< "Enter Second Number"<<endl;
    cin>>num2;

   switch(operatorr)
   {
   case '+':
    cout<<num1+num2;
    break;
   case '-':
    cout<<num1-num2;
    break;
   case '*':
    cout<<num1*num2;
    break;
   case '/':
    if(num2==0)
    {
        cout<< "The Second Number cannot equal Zero "<<endl;
        break;
    }
    cout<<num1/num2;
    break;
   }

    return 0;
}
