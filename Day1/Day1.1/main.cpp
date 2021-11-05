#include <iostream>
using namespace std;


//struct declaration:
struct point
{
    int x, y;
};

//function prototype:
int Sum(int x,int y);
double Sum(double x, double y);

point Sum(point p1, point p2)
{
    point result;
    result.x=p1.x+p2.x;
    result.y=p1.y+p2.y;
    return result;
}


int main()
{
	int x,y;
	double x1,y1;
	point p1,p2;
	p1.x=10;
	p1.y=20;
	p2.x=15;
	p2.y=30;


	cout<<"Enter Integer Number one : ";
	cin>>x;
	cout<<"Enter Integer Number two : ";
	cin>>y;
	cout<<Sum(x,y)<<endl; //call function


	cout<<"Enter Float Number one : ";
	cin>>x1;
	cout<<"Enter Float Number two : ";
	cin>>y1;
	cout<<Sum(x1,y1)<<endl;
	cout<<"================"<<endl;

	cout<<"Sum of X: "<<Sum(p1,p2).x<<endl<< "Sum of Y: "<<Sum(p1,p2).y<<endl;


	return 0;
}


//function implementation:
int Sum(int x,int y)
{
	return (x+y);
}

double Sum(double x, double y)
{
    return (x+y);
}


