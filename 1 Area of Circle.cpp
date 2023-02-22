//Calculate Area of Circle.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float Area, pie = 3.14;
	int radius;
	cout<<"Enter radius of the circle: ";
	cin>>radius;
	Area = pie * radius*radius;
	cout<< "Area of this circle is: '" << Area <<"m'"<< endl;
}
