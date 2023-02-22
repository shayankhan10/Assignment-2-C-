//check number is positive, negative or zero
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    double number;
    cout<<"Enter a Number ";
    cin>>number;
    if(number>0)
    {
    	cout<<"Number is positive"<<endl;
	}
    else 
	if(number<0)
	{
		cout<<"Number is negative"<<endl;
	}
    else
    {
    	cout<<"Number is zero"<<endl;
	}
}
