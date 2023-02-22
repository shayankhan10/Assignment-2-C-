//find the largest number among three number
#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x,y,z,largest;
    cout<<"Enter three numbers "<<endl;
    cin>>x>>y>>z;
    largest=x;
    if(y>largest) 
	{
        largest=y;
    }
    if(z>largest) 
	{
        largest=z;
    }
    cout<<"Largest number is "<<largest<<endl;
}
