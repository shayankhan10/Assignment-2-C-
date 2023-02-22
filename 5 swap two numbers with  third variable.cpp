//swap two numbers with a third variable
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a, b, count;
	cout<<"Enter Value of a: ";
	cin>>a;
	cout<<"Enter Value of b: ";
	cin >> b;
	cout<<"After Swapping "<<endl;
	count=a;
	a=b;
	b=count;
	cout<<"\n Value of a becomes: "<<a<<endl;
	cout<<"\n Value of b becomes: "<<b<<endl;
}
