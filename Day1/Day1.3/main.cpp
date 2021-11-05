#include <iostream>

using namespace std;

int main()
{
    int Size;
    cout<< "Enter The Size Of Array"<<endl;
    cin>>Size;

    int x[Size]={};
    for(int i=0 ; i<Size;i++)
    {
        cout<< "Enter The Element Number: "<< i+1<<endl;
        cin>>x[i];

        cout<< "========================="<<endl;

    }

     cout<< "The Reversed Array: "<<endl;
        for(int i=Size-1; i>=0; i--)
        {
            cout<<x[i]<<endl;
        }



    return 0;
}
